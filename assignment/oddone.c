#include <stdio.h>
#include <stdlib.h>

#define SIZE1 5
#define SIZE2 5

void mergearray(int arr1[], int size1, int arr2[], int size2, int result[], int *result_size) {
    int i, j;
    int count = 0;

    for (i = 0; i < size1; i++) {
        if (arr1[i] % 2 != 0) {
            result[count++] = arr1[i];
        }
    }
    
    for (j = 0; j < size2; j++) {
        if (arr2[j] % 2 != 0) {
            result[count++] = arr2[j];
        }
    }

    *result_size = count; 
}

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int array1[SIZE1];
    int array2[SIZE2];
    int i;
    int result[SIZE1 + SIZE2]; 
    int result_size;

    printf("Enter 5 integers for the first array:\n");
    for (i = 0; i < SIZE1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter 5 integers for the second array:\n");
    for (i = 0; i < SIZE2; i++) {
        scanf("%d", &array2[i]);
    }

    mergearray(array1, SIZE1, array2, SIZE2, result, &result_size);

    qsort(result, result_size, sizeof(int), compare);

    printf("Sorted array of odd numbers:\n");
    for (i = 0; i < result_size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

