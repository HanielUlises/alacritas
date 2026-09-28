#include <cstdio>
#include "vector_sum.h"

int main() {
    int data[N];
    int expected = 0;
    for (int i = 0; i < N; i++) {
        data[i] = i + 1;
        expected += data[i];
    }

    int result = vector_sum(data);
    std::printf("vector_sum = %d (expected %d)\n", result, expected);
    return result == expected ? 0 : 1;
}
