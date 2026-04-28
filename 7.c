 #include <stdio.h>

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