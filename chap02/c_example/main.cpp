#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>


float get_rand();

int main() {
    const long long length = 10000000;
    auto *a = new double[length];
    auto *b = new double[length];
    auto *c = new double[length];

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (auto index = 0; index < length; index++) {
        a[index] = get_rand();
        b[index] = get_rand();
    }
#pragma omp parallel
    {
#pragma omp for
        for (auto index=0;index < length; index++){
            c[index] = a[index] + b[index];
        }

    }


    delete[] a;
    delete[] b;
    delete[] c;
    return 0;
}

inline float get_rand() {
    return static_cast <float> (std::rand()) / static_cast <float> (RAND_MAX);
}
