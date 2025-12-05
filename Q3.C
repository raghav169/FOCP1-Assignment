#include <stdio.h>

// Function to add using bitwise operators
int bitwiseAdd(int a, int b) {
    while (b != 0) {
        int carry = a & b;   // Find positions where both bits are 1
        a = a ^ b;           // Add bits without carrying
        b = carry << 1;      // Carry shifted left for next iteration
    }
    return a;
}

// Function to subtract using only bitwise operators
int bitwiseSubtract(int a, int b) {
    // a - b = a + (~b + 1)
    return bitwiseAdd(a, bitwiseAdd(~b, 1));
}

int main() {
    int a, b;

    printf("Enter two integers (A B): ");
    scanf("%d %d", &a, &b);

    int result = bitwiseSubtract(a, b);
    printf("Result of %d - %d = %d\n", a, b, result);

    return 0;
}
