#include<stdio.h>
#include<math.h>

int main() {
    int num;
    int lowerSquare, upperSquare;
    int lowerRoot, upperRoot;
    int closestSquare;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    double root = sqrt(num);

    lowerRoot = (int)floor(root);
    upperRoot = (int)ceil(root);

    lowerSquare = lowerRoot * lowerRoot;
    upperSquare = upperRoot * upperRoot;

    if ((num - lowerSquare) <= (upperSquare - num)) {
        closestSquare = lowerSquare;
    } else {
        closestSquare = upperSquare;
    }

    printf("The closest integer with a whole number square root is: %d\n", closestSquare);

    return 0;
}

