 #include <stdio.h>

int main() {
    int first, second, temp;

    // Input from user
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    printf("\nBefore swapping: First = %d, Second = %d\n", first, second);

    // Swapping Logic
    temp = first;   // Step 1: Copy first to temp
    first = second; // Step 2: Copy second to first
    second = temp;  // Step 3: Copy temp back to second

    printf("After swapping:  First = %d, Second = %d\n", first, second);

    return 0;
}