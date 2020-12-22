# distutils: language=c++
import numpy as np
cimport numpy as np

def say_hello_to(name):
    print("Hello %s!" % name)

cpdef convert_demo(matrix):
    cdef np.ndarray[double, ndim=2, mode='fortran'] arg = np.asfortranarray(matrix, dtype=np.float64)
    return arg