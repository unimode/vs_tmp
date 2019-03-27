#!/usr/bin/python
from ctypes import *

if __name__ == "__main__":
    print "Test"
    libtest = CDLL('./libtestlib.so')