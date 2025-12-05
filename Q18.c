#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int found = 0;  // Flag to track duplicates

    // Data validation: Array size must be > 0
    if (n <= 0) {
        printf("Invalid array size!\n");
        return;
    }

    printf("Duplicate elements: ");

    for (int i = 0; i < n; i++) {
        int count = 1;

        // Skip already-checked elements (mark them as -1)
        if (arr[i] == -1) 
            continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  // Mark as counted
            }
        }

        if (count > 1)
