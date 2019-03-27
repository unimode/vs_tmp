#ifndef __TESTLIB_H__
#undef __TESTLIB_H__

#include <stdint.h>
uint8_t testGetUint8(void);
void testSimple(void);
const char* testSetUint(uint8_t ux8, uint16_t ux16, uint32_t ux32, uint64_t ux64);

#endif