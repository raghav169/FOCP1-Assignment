#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int deleteElement(int arr[], int n, int pos) {
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return n;
    }

    // Shift elements left starting from the position
    for (int i = pos; i < n - 1; i++) {
