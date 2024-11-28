#pragma once
#include <stdio.h>
#include <math.h>

#if __cplusplus
extern "C" {
#endif
int imax_search_mv(float *curdist, int *curNodeNum, float *pVectq, int *data, size_t qty, size_t size, char *data_level0_memory_, size_t memoryPerObject_, size_t offsetData_, size_t threadId, size_t maxThreadQty);
#if __cplusplus
}
#endif