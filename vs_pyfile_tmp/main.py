#!/usr/bin/python
from ctypes import *

if __name__ == "__main__":
    print "Test"
    libtest = CDLL('./libtestlib.so')
    
    # ---- Examples how to use C-function from Python
    # C - function returns value 250 with type uint8_t, since Python use only integer... 
    print "wrong way"
    res=libtest.testGetUint8()
    print res
    print "right way"
    # !!! ---- it's very important to define function return type
    libtest.testGetUint8.restype=c_ubyte
    # !!! ----
    res=libtest.testGetUint8()
    print res
    
    # ---- other examples below
    # return string
    libtest.testSetUint.restype = c_char_p
    s_res = libtest.testSetUint(1,2,3,4)
    print s_res
    

    

    