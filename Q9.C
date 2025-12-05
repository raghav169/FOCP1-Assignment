#include <stdio.h>

int main() {
    int n, i, pos = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Linear search for first occurrence of 99
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            pos = i;     // store index
            break;       // stop after first match
        }
    }

    if (pos != -1)
        printf("First occurrence of score 99 is at position %d.\n", pos);
    else
        printf("Score 99 not found in the array.\n");

    return 0;
}
