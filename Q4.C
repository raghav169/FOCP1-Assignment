#include <stdio.h>

// 1. Swap using a temporary variable
void swapTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 2. Swap using arithmetic (no temp variable)
// NOTE: Avoid for very large integers due to overflow risk
void swapArithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// 3. Swap using bitwise XOR (no temp variable)
void swapXOR(int *a, int *b) {
    if (a != b) {          // Protect against swapping sam
