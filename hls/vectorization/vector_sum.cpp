#include "vector_sum.h"

int vector_sum(const int data[N]) {
    int acc = 0;
    for (int i = 0; i < N; i++) {
#pragma HLS PIPELINE II=1
        acc += data[i];
    }
    return acc;
}
