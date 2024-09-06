#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    if (temperature > 30) {
        printf("It's hot outside, stay hydrated!\n");
    } else if (temperature >= 20 && temperature <= 30) {
        printf("The weather is nice and warm.\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("It's a bit chilly, wear a jacket.\n");
    } else if (temperature < 10) {
        printf("It's cold outside, stay warm!\n");
    } else {
        printf("Invalid temperature value.\n");
    }

    return 0;
}

