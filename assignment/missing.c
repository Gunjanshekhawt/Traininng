#include <stdio.h>

int findMissingElementSum(int arr[], int size, int n) {
    int expected_sum = n * (n + 1) / 2; 
    int actual_sum = 0;

    for (int i = 0; i < size; i++) {
        actual_sum += arr[i];
    }

    return expected_sum - actual_sum;
}

int main() {
    int n;

    printf("Enter the number of elements (including the missing one): ");
    scanf("%d", &n);

    int arr[n - 1]; 

    printf("Enter %d integers (from 1 to %d, with one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = findMissingElementSum(arr, n - 1, n);
    printf("The missing element is: %d\n", missing);

    return 0;
}

