//conversion of fahrenheit to celcius and vice versa 
#include <stdio.h>

int main() {
    int choice;
    float temp, result;

    printf("1. F to C\n2. C to F\nChoose: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    result = (choice == 1) ? (temp - 32) * 5 / 9 : (temp * 9 / 5) + 32;

    printf("Converted temperature: %.2f\n", result);

    return 0;
}
