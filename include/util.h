/**
 * Various utility functions for use by device drivers
 * 
 * Copyright (C) 2015 Tommy Vestermark
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef INCLUDE_UTIL_H_
#define INCLUDE_UTIL_H_

#include <stdint.h>


/// Generic Cyclic Redundancy Check CRC-8
///
/// Example polynomial: 0x31 = x8 + x5 + x4 + 1	(x8 is implicit)
/// Example polynomial: 0x80 = x8 + x7			(a normal bit-by-bit parity XOR)
///
/// @param message[]: array of bytes to check
/// @param nBytes: number of bytes in message
/// @param polynomial: byte is from x^7 to x^0 (x^8 is implicitly one)
/// @return CRC value
uint8_t crc8(uint8_t const message[], unsigned nBytes, uint8_t polynomial);


#endif /* INCLUDE_UTIL_H_ */
