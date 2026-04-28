 #include <stdio.h>

// Method 1: Using #define (Preprocessor Directive)
// These do not occupy memory and are replaced before compilation.
#define PI 3.14159
#define COMPANY_NAME "TechCorp"

int main() {
    // Method 2: Using the 'const' keyword
    // These are actual variables that are "read-only."
    const int MAX_USERS = 100;
    
    float radius = 5.0;
    float area;

    // Calculation using constants
    area = PI * radius * radius;

    printf("Welcome to %s\n", COMPANY_NAME);
    printf("The area of the circle is: %.2f\n", area);
    printf("Maximum system users allowed: %d\n", MAX_USERS);

    // Uncommenting the line below would cause a COMPILATION ERROR:
    // MAX_USERS = 200; 

    return 0;
}#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Input total seconds
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    // Calculation Logic
    hours = total_seconds / 3600;          // Get total hours
    minutes = (total_seconds % 3600) / 60; // Get remaining minutes
    seconds = total_seconds % 60;          // Get remaining seconds

    // Displaying the result in HH:MM:SS format
    printf("\nTime: %d Hour(s), %d Minute(s), %d Second(s)\n", hours, minutes, seconds);
    printf("Formatted: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}