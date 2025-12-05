#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%lld", a);

        if (i < n)
            printf(", ");

        next = a + b;  // next term
        a = b;         // update a
        b = next;      // update b
    }

    return 0;
}
