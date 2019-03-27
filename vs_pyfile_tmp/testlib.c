#include "testlib.h"
#include <stdio.h>

uint8_t testGetUint8(void)
{
    return 250;
}

void testSimple(void)
{
    printf("C function %s without parameters\n", __FUNCTION__);
}

const char* testSetUint(uint8_t ux8, uint16_t ux16, uint32_t ux32, uint64_t ux64)
{
    static char str[256];
    
    sprintf(str, "C function %s with parameters:\nux8  = 0x%02X\nux16 = 0x%04X\nux32 = 0x%08X\nux64 = 0x%016lX\n",
           __FUNCTION__, ux8, ux16, ux32, ux64);

    return str;
}   