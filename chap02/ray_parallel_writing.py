# coding = 'utf-8
import numpy as np
import time
import ray


@ray.remote
def f(x):
    return x * x


def demo():
    futures = [f.remote(i) for i in range(4)]
    print(ray.get(futures))  # [0, 1, 4, 9]


@ray.remote
def write(x, column):
    for row in range(x.shape[0]):
        x[row, column] = column


def write_parallel(matrix):
    futures = [write.remote(matrix, column) for column in range(10)]
    ray.get(futures)


class Wrapper:
    def __init__(self, matrix):
        self.matrix = matrix


if __name__ == '__main__':
    ray.init()
    matrix = np.random.randn(10000000, 10)
    matrix_id = ray.put(matrix)
    start = time.time()
    write_parallel(matrix_id) # Cannot do this
    end = time.time()
    print(matrix[0:10, :])
    print(end - start)
