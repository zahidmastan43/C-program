#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input
    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Output
    printf("Time = %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    return 0;
}
