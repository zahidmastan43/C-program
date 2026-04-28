#include <stdio.h>

int main() {
    float num1, num2;

    // Taking input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;

    // Display results
    printf("\nSum = %.2f", sum);
    printf("\nDifference = %.2f", difference);
    printf("\nProduct = %.2f", product);

    // Division (check to avoid division by zero)
    if (num2 != 0) {
        float division = num1 / num2;
        printf("\nDivision = %.2f", division);
    } else {
        printf("\nDivision not possible (cannot divide by zero)");
    }

    return 0;
}
