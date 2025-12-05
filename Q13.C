#include <stdio.h>

int findPeak(int arr[], int n) {
    // If array has only one element
    if (n == 1)
        return arr[0];

    // Check first element
    if (arr[0] >= arr[1])
        return arr[0];

    // Check last element
    if (arr[n-1] >= arr[n-2])
        return arr[n-1];

    // Check middle elements
    for (int i = 1; i < n - 1; i++) {
        if (a
