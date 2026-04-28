 #include <stdio.h>

int main() {
    float sub1, sub2, sub3;
    float total, average;

    // Input marks for three subjects
    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);

    // Calculate Total
    total = sub1 + sub2 + sub3;

    // Calculate Average
    average = total / 3;

    // Output results
    printf("\n--- Marksheet ---\n");
    printf("Total Marks:   %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}