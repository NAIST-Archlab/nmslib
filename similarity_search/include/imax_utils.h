#pragma once
#ifndef IMAX_UTILS_H
#define IMAX_UTILS_H
#include <stdio.h>
#include <math.h>
#if __cplusplus
typedef unsigned int Uint;
#else
#include "conv-c2d/emax7.h"
#include "conv-c2d/emax7lib.h"
#endif

#if defined(ARMZYNQ) && defined(EMAX7)
#if __AARCH64EL__ == 1
typedef long double Dll;
#else
typedef struct { Ull u[2]; } Dll;
#endif
#endif

#if __cplusplus
extern "C" {
#endif
void imemcpy(Uint *dst, Uint *src, int words);
void xmax_bzero(Uint *dst, int words);
unsigned char* sysinit(Uint memsize, Uint alignment, Uint threadQty);
#if __cplusplus
}
#endif
#endif