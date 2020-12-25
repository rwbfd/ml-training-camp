from distutils.core import setup, Extension
from Cython.Build import cythonize
import numpy

compile_flags = ['-std=c++11']

module = Extension('ind_cols',
                   ['ind_cols.pyx'],
                   language='c++',
                   include_dirs=[numpy.get_include()],
                   extra_compile_args=compile_flags)

setup(
    name='cython_test',
    ext_modules=cythonize(module)
)
