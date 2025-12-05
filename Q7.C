#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print left sequence
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf(" "); // space between the two sequences

        // Print right sequence (same as left)
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}
