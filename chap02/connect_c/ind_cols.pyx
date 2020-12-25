# distutils: language=c++
import numpy as np
cimport numpy as np
from libcpp.vector cimport vector
cdef extern from "ind_cols.h":
    vector[long] get_ind_cols(double*, const long, const long)

def get_ind_col(df):
    df_copy = df.copy(deep=True)
    for column in df_copy.columns:
        mean = df_copy[column].mean()
        std = df_copy[column].std()
        df_copy.loc[:, column] = (df_copy[column] - mean) / std

    matrix = np.concatenate([np.ones((df.shape[0], 1)), df_copy], axis=1)
    cdef np.ndarray[double, ndim=2, mode='fortran'] arg = np.asfortranarray(matrix, dtype=np.float64)

    ind_col_vec = list(get_ind_cols(&arg[0, 0], matrix.shape[0], matrix.shape[1]))
    result = []
    for i in range(1, len(ind_col_vec)):
        result.append(df.columns[ind_col_vec[i] - 1])
    return result
