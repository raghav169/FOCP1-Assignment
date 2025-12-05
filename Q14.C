#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0; // Not prime
    if (n == 2)
        return 1; // 2 is prime
    if (n % 2 == 0)
        return 0; // Even numbers > 2 are not prime

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

// Function to count prime numbers in an array
int countPrimes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            count++;
    }
    return count;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    int primeCount = countPrimes(arr, n);
    printf("Number of prime numbers in the array: %d\n", primeCount);

    return 0;
}
