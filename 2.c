 #include <stdio.h>

int main() {
    float num1, num2, num3, avg;

    // Input from user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculation
    // We add the numbers first, then divide by 3.0
    avg = (num1 + num2 + num3) / 3;

    // Displaying the result
    printf("\nThe average of %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, avg);

    return 0;
}