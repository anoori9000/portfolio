#include "notes.h"

// array size is 9800
const uint16_t e2Tune[]  = {
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d,
  0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe73c, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xe71c, 0xe69a, 0xde18, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7,
  0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5b7, 0xd5f7, 0xde7a, 0xe71c, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe73c, 0xef5d, 0xef5d, 0xef5d, 0xde18, 0xc451, 0xaaaa, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xaa6a, 0xbc10, 0xd5d7, 0xef3c, 0xef5d, 0xef5d, 0xef7d, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xef5d, 0xef5d, 0xef5d, 0xd5f7, 0xaaec, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xaa8a, 0xd596, 0xef5d, 0xef5d, 0xef7d, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xef5d, 0xef5d, 0xe6fb, 0xb36e, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xb2ec, 0xe6ba, 0xef5d, 0xef5d, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0xef5d, 0xef5d, 0xde9a, 0xaa8a, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa249, 0xde38, 0xef5d, 0xef5d, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0xef7d, 0xef5d, 0xde7a, 0xa229, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1e8, 0xd5f7, 0xef5d, 0xef5d, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0xef5d, 0xef5d, 0xe6db, 0xaa8a, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa249, 0xe69a, 0xef5d, 0xef7d, 0x0000, 0x0000,
  0x0000, 0x0000, 0xef5d, 0xef5d, 0xb34d, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xaaab, 0xef3c, 0xef5d, 0x0000, 0x0000,
  0x0000, 0xef5d, 0xef5d, 0xd5b7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xccf3, 0xef5d, 0xef7d, 0x0000,
  0x0000, 0xef5d, 0xef5d, 0xaaab, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa249, 0xe6fb, 0xef5d, 0x0000,
  0xe71c, 0xef5d, 0xd5b7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xcd14, 0xef5d, 0xef7d,
  0xef5d, 0xef5d, 0xbbf0, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xb34d, 0xef5d, 0xef5d,
  0xef5d, 0xef5d, 0xa249, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1e8, 0xe6fb, 0xef5d,
  0xef5d, 0xe6ba, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xd5f7, 0xef5d,
  0xef5d, 0xde38, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0x9966, 0x98c3, 0x98c3, 0x98e4, 0x98e4, 0x9904, 0x9904, 0x9925, 0x9986, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xd575, 0xef5d,
  0xef5d, 0xd596, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99a7, 0x9925, 0x98c3, 0x9882, 0x9883, 0x98c3, 0x9945, 0x99a7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0x9021, 0xa986, 0xbb0b, 0xbac9, 0xbac9, 0xb2a9, 0xb227, 0xa104, 0x9882, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xccd3, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9945, 0x9042, 0xa0e3, 0xbaea, 0xbb6c, 0xbb6c, 0xbaca, 0x98c3, 0x9041, 0x9904, 0x99a7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5c, 0xbbae, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9945, 0x9021, 0xc40e, 0xef1b, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef1b, 0xd4f2, 0xa124, 0x9042, 0x9945, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0x9021, 0xb248, 0xde16, 0xef3c, 0xef5d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9986, 0x9021, 0xcc4f, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef1b, 0xc3ee, 0x9001, 0x98e4, 0x99a7,
  0xa1c7, 0xa1c7, 0xa1c7, 0x9945, 0x98a3, 0x9041, 0xa986, 0xef1b, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x98c4, 0xa986, 0xef5c, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xddb5, 0xa0e3, 0x98a3,
  0x99a7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99a7, 0x9041, 0xc40f, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9021, 0xcc91, 0xef5d, 0xef5d, 0xef1b, 0xd574, 0xbb6d, 0xbb6c, 0xc3ae, 0xddd5, 0xef1b, 0xef5d, 0xef5d, 0xef5d, 0xe699, 0xa165,
  0x9062, 0x9986, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9882, 0xc38d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9986, 0x9000, 0xeefa, 0xef5d, 0xddf6, 0xa0e3, 0x9062, 0x98a3, 0x98c3, 0x98a3, 0x9062, 0x98c3, 0xc3ad, 0xe6fa, 0xef5d, 0xef5d, 0xef1b,
  0xa9e7, 0x9041, 0x9986, 0xa1c7, 0xa1c7, 0xa1c7, 0x9882, 0xc38d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9945, 0x9000, 0xef5c, 0xef5c, 0xa124, 0x98c3, 0x99a7, 0xa1c7, 0xa1c7, 0x99c7, 0x99a7, 0x9946, 0x9883, 0x98e3, 0xccd1, 0xef5c, 0xef5d,
  0xef3c, 0xbb0b, 0x9021, 0x9966, 0xa1c7, 0xa1c7, 0x9882, 0xc38d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9945, 0x9000, 0xef5d, 0xef1a, 0x9000, 0x9966, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99a7, 0x9925, 0x9021, 0xb2ca, 0xef1b,
  0xef5d, 0xef5c, 0xc3ce, 0x9021, 0x9945, 0xa1c7, 0x9882, 0xc38d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9945, 0x9000, 0xef5d, 0xef3b, 0x9000, 0x9966, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9986, 0x9882, 0xa165,
  0xe699, 0xef5d, 0xef5d, 0xcc70, 0x9021, 0x9925, 0x9882, 0xc38d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9945, 0x9000, 0xef5c, 0xef5d, 0xa9e7, 0x9882, 0x9986, 0xa1a7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99a7, 0x98c3,
  0xa0e3, 0xddd6, 0xef5d, 0xef5d, 0xd4f2, 0x9041, 0x9021, 0xc38d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9986, 0x9000, 0xe6b9, 0xef5d, 0xe6b9, 0xb228, 0x9021, 0x9062, 0x9882, 0x98c3, 0x99a7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99c7,
  0x98e4, 0x9041, 0xd4d1, 0xef5d, 0xef5d, 0xdd95, 0x9882, 0xc38d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9041, 0xc430, 0xef5d, 0xef5d, 0xef5c, 0xe698, 0xdd74, 0xcc50, 0x9000, 0x9945, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0x9925, 0x9021, 0xcc70, 0xef5c, 0xef5d, 0xe657, 0xcc70, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x98e4, 0xa124, 0xef3c, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0x9000, 0x9945, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0x9945, 0x9021, 0xbb2b, 0xef3c, 0xef5d, 0xef3c, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99a7, 0x9041, 0xbb6c, 0xef3c, 0xef5d, 0xef5d, 0xef5d, 0xe678, 0x9000, 0x9986, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0x9986, 0x9041, 0xa9c6, 0xeefb, 0xef5d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9966, 0x9041, 0xaa27, 0xdd94, 0xe6b9, 0xddf6, 0xa165, 0x9883, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9986, 0x9082, 0xa165, 0xe699, 0xef5d, 0xef5d, 0xbbae, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9986, 0x98c3, 0x9041, 0x9021, 0x9041, 0x98c3, 0x99a7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99a7, 0x98a3, 0xa0e3, 0xbac9, 0xbac9, 0xa165, 0x9882, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99c7, 0x99a7, 0x9986, 0x99a7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0x99c7, 0x99a7, 0x99a7, 0x99a7, 0x9925, 0x9904, 0x9904, 0x9904, 0x9986, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0x98c3, 0x9041, 0x9041, 0x9062, 0x9062, 0x9862, 0x9882, 0x9883, 0x9945, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9966, 0x98c3, 0x98c3, 0x98a3, 0x98a3, 0x9882, 0x9882, 0x9882, 0x9945, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0x99a7, 0x9000, 0xbaeb, 0xddb5, 0xd533, 0xd533, 0xbb8d, 0xbb8d, 0xa9a6, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9021, 0xa986, 0xbb0b, 0xbb4c, 0xbb6c, 0xbb6c, 0xbb6d, 0xa9c7, 0x9041, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0x99a7, 0x9000, 0xbbaf, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xbbaf, 0x9000, 0xa1c7, 0xa1c7, 0x99a7, 0x9966, 0x9966, 0x9966, 0x99c7,
  0xa1c7, 0xa1c7, 0x99a7, 0x9021, 0xa9e7, 0xdd94, 0xe6b9, 0xef5c, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xef5d, 0xef5d, 0xef1b, 0xe698, 0xbaeb, 0x9041, 0xa1c7, 0xa1c7, 0x98a3, 0x9000, 0x9000, 0x9001, 0x9925,
  0xa1c7, 0xa1c7, 0xa1c7, 0x9945, 0x98a3, 0x9062, 0x9021, 0xbb4c, 0xef5c, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xef5c, 0xc38c, 0x9041, 0x9041, 0x9062, 0x9925, 0xa1c7, 0xa1c7, 0x9062, 0xbb8e, 0xef3b, 0xbaea, 0x98c3,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99c7, 0x99a7, 0x9966, 0x9021, 0xcc91, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xcc91, 0x9041, 0x9966, 0x99a7, 0xa1a7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9062, 0xbbaf, 0xef5d, 0xbb2b, 0x98c3,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x98a3, 0xbb6c, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xbb4c, 0x98c3, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9062, 0xbbaf, 0xef5d, 0xbb2b, 0x98c3,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x98c3, 0xbb2b, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xbb2b, 0x98e4, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9062, 0xbbaf, 0xef5d, 0xbb2b, 0x98c3,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x98c3, 0xbb2b, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xbb2b, 0x98e4, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9062, 0xbbaf, 0xef5d, 0xbb2b, 0x98c3,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x98c3, 0xbb2b, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xbb2b, 0x98e4, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9062, 0xbbaf, 0xef5d, 0xbb2b, 0x98c3,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x98c3, 0xbb2b, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xbb2b, 0x98e4, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9062, 0xbbaf, 0xef5d, 0xbb2b, 0x98a3,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x98a3, 0xbb2b, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xbb2b, 0x9041, 0x9882, 0x9882, 0x9882, 0x9882, 0x9882, 0x9882, 0x9021, 0xbbaf, 0xef5d, 0xbb2b, 0x9021,
  0x9882, 0x9882, 0x9882, 0x9882, 0x9882, 0x9882, 0x9882, 0x9021, 0xbb2b, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xd533, 0xbb8d, 0xbb8d, 0xbb8d, 0xbb8d, 0xbb8d, 0xbb8d, 0xbb8d, 0xbb8d, 0xd575, 0xef5d, 0xd533, 0xbb8d,
  0xbb8d, 0xbb8d, 0xbb8d, 0xbb8d, 0xbb8d, 0xbb8d, 0xbb8d, 0xbb8d, 0xd533, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d,
  0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d,
  0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d,
  0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xef1b, 0xc3ee, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b,
  0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xbb0b, 0xc38d, 0xe6da, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xcd35, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0xbaca, 0x9062, 0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x98c3,
  0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x98c3, 0x9042, 0xbaca, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc472, 0xef5d,
  0xef5d, 0xd596, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbbaf, 0xef5d, 0x9021, 0x9966, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9904, 0x9021, 0xef5d, 0xbbaf, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xccd3, 0xef5d,
  0xef5d, 0xde18, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9000, 0xbaeb, 0xddd5, 0x9000, 0x9966, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x9945, 0x9000, 0xddd5, 0xbaeb, 0x9062, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xcd55, 0xef5d,
  0xef5d, 0xe6ba, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x98e4, 0x9042, 0x9042, 0x98a3, 0x99a7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99a7, 0x9882, 0x9042, 0x9062, 0x9904, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xd5f7, 0xef5d,
  0xef5d, 0xef3c, 0xa229, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99a7, 0x99a7, 0x99c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0x99a7, 0x99a7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xe6fb, 0xef5d,
  0xef5d, 0xef5d, 0xbbcf, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xb30c, 0xef5d, 0xef5d,
  0xef5d, 0xef5d, 0xd596, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xccd3, 0xef5d, 0xef5d,
  0x0000, 0xef5d, 0xef3c, 0xaa8a, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa229, 0xe6db, 0xef5d, 0x0000,
  0x0000, 0xef5d, 0xef5d, 0xd575, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xc4b2, 0xef5d, 0xef5d, 0x0000,
  0x0000, 0x0000, 0xef5d, 0xef5d, 0xb2ec, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xaa6a, 0xe71c, 0xef5d, 0x0000, 0x0000,
  0x0000, 0x0000, 0xe73c, 0xef5d, 0xe6ba, 0xaa69, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa208, 0xde79, 0xef5d, 0xef5d, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0xef5d, 0xef5d, 0xde39, 0xa208, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xd576, 0xef5d, 0xef5d, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0xef5d, 0xef5d, 0xde39, 0xaa69, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa229, 0xd5b6, 0xef5d, 0xef5d, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xef5d, 0xef5d, 0xe6ba, 0xb2ec, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xaa8a, 0xde7a, 0xef5d, 0xef5d, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xef5d, 0xef5d, 0xef5d, 0xd575, 0xaa8a, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa249, 0xccf4, 0xef3c, 0xef5d, 0xef5d, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe73c, 0xef5d, 0xef5d, 0xef3c, 0xd596, 0xbbcf, 0xa229, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7,
  0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa1c7, 0xa208, 0xbb8e, 0xd555, 0xe71c, 0xef5d, 0xef5d, 0xef5d, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef3c, 0xe6ba, 0xde18, 0xd596, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35,
  0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xcd35, 0xd575, 0xde18, 0xde9a, 0xe73c, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d,
  0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xef5d, 0xf79e, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};