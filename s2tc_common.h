/*
 * Copyright (C) 2011  Rudolf Polzer   All Rights Reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * RUDOLF POLZER BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef S2TC_COMMON_H
#define S2TC_COMMON_H

template <class T> inline T min(const T &a, const T &b)
{
	if(b < a)
		return b;
	return a;
}

template <class T> inline T max(const T &a, const T &b)
{
	if(b > a)
		return b;
	return a;
}

inline int byteidx(int bit)
{
	return bit >> 3;
}

inline int bitidx(int bit)
{
	return bit & 7;
}

inline void setbit(unsigned char *arr, int bit, int v = 1)
{
	arr[byteidx(bit)] |= (v << bitidx(bit));
}

inline void xorbit(unsigned char *arr, int bit, int v = 1)
{
	arr[byteidx(bit)] ^= (v << bitidx(bit));
}

inline int testbit(const unsigned char *arr, int bit, int v = 1)
{
	return (arr[byteidx(bit)] & (v << bitidx(bit)));
}

#endif
