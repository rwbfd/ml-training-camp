#pragma once
#include <vector>
#include <cmath>
#include <iostream>
const double tres = 1e-5;


template<typename T, bool col_major=false>
class MatrixView{
public:
    T* data_pointer;
    const long nrow;
    const long ncol;

    MatrixView(T *data_pointer, const long nrow, const long ncol) : data_pointer(data_pointer), nrow(nrow),
                                                                    ncol(ncol) {}

    T &operator()(const int row, const int col) {
        if (col_major) {
            return data_pointer[row + col * nrow];
        } else {
            return data_pointer[col + row * ncol];
        }
    }

    T operator()(const int row, const int col) const {
        if (col_major) {
            return data_pointer[row + col * nrow];
        } else {
            return data_pointer[col + row * ncol];

        }
    }
};


std::vector<long> get_ind_cols(double *data, const long nrow, const long ncol) {
    std::vector<long> ind;
    std::vector<double *> u;
    u.push_back(new double[nrow]);
    const MatrixView<double, true> data_view(data, nrow, ncol);
    double* u_new = new double[nrow];


    for (auto i = 0; i < nrow; i++) {
        u[0][i] = data_view(i, 0);
    }

    ind.push_back(0);

    for (auto i = 1; i < ncol; i++){
        for (auto row=0;row<nrow;row++){
            u_new[row] = data_view(row, i);
        }

        for (auto n=0;n<u.size();n++){
            double dot_ua= 0;
            double dot_uu= 0;

            for (auto row=0;row<nrow;row++){
                dot_ua += data_view(row, i)*u[n][row];
                dot_uu += u[n][row]*u[n][row];

            }


            double div = dot_ua/dot_uu;
            for (auto row=0;row<nrow;row++) {
                u_new[row] = u_new[row] -  div*u[n][row];
            }

        }
        double sum =0;
        for (auto row=0;row<nrow;row++){
            sum += std::abs(u_new[row]);
        }

        if (sum/nrow>tres){

            u.push_back(new double[nrow]);
            for (auto row=0;row<nrow;row++) {
                u[u.size() - 1][row]=u_new[row];
            }
            ind.push_back(i);
        }
    }

    for (auto vec:u){
        delete[] vec;
    }
    delete[] u_new;
    return ind;
}
