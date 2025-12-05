#include <stdio.h>

int main() {
    int n, i;
    int even_count = 0, odd_count = 0;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n], even_array[n], odd_array[n];

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Traverse and separate even and odd scores
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count] = scores[i];
            even_count++;
        } else {
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }

    // Display res
