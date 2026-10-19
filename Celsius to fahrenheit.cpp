#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9.0 * celsius / 5.0) + 32.0;
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
    return 0;
}