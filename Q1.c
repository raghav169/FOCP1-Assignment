#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate Armstrong sum
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check Armstrong condition
    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
