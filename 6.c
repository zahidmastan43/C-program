 #include <stdio.h>

int main() {
    float num, square, cube;

    // Getting input from the user
    printf("Enter a number: ");
    scanf("%f", &num);

    // Mathematical calculations
    square = num * num;
    cube = num * num * num;

    // Displaying the results
    printf("\n--- Results ---\n");
    printf("Number: %.2f\n", num);
    printf("Square: %.2f\n", square);
    printf("Cube:   %.2f\n", cube);

    return 0;
}