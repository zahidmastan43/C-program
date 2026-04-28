 #include <stdio.h>

int main() {
    float km, meters, cm;

    // Asking for input in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    // Conversion Logic
    meters = km * 1000;      // 1 km = 1000 m
    cm = meters * 100;       // 1 m = 100 cm

    // Displaying the results
    printf("\n--- Conversion Results ---\n");
    printf("%.2f Kilometers is equal to:\n", km);
    printf("Meters:      %.2f m\n", meters);
    printf("Centimeters: %.2f cm\n", cm);

    return 0;
}