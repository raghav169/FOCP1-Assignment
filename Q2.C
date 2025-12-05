#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Ensure positive values
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF is %d\n", a);

    return 0;
}
