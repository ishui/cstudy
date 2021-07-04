# from ctypes import *
# libc = cdll.LoadLibrary("./lib/libmymathe.a")
# res = libc.add(4, 7)
# print(res)
from ctypes import *
libc = cdll.LoadLibrary("/lib/x86_64-linux-gnu/libc.so.6")
libc.srand(1)
libc.rand()