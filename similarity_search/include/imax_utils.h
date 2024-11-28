#pragma once
#ifndef IMAX_UTILS_H
#define IMAX_UTILS_H
#include <stdio.h>
#include <math.h>
#include "conv-c2d/emax7lib.h"

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