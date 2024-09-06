#include <stdio.h>
#include<stdlib.h>

int main() {
    int score;
    char grade;

    printf("Enter the score: ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        grade = 'A';
    } else if (score >= 80 && score < 90) {
        grade = 'B';
    } else if (score >= 70 && score < 80) {
        grade = 'C';
    } else if (score >= 60 && score < 70) {
        grade = 'D';
    } else if (score < 60 && score >= 0) {
        grade = 'F';
    } else {
        printf("Invalid score. Please enter a value between 0 and 100.\n");
        return EXIT_FAILURE;
    }

    printf("The grade for the score %d is: %c\n", score, grade);

    return EXIT_SUCCESS;
}


