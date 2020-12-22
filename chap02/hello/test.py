import hello
import numpy as np


if __name__ == '__main__':
    hello.say_hello_to('everyone')
    matrix = np.random.randn(100, 2)
    print(hello.convert_demo(matrix))
