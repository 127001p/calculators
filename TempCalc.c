// temp unit converter
#include <stdio.h>

int main() {

    char units;
    double temp;

    printf("\nPlease enter your units: ");
    scanf("%c", &units);

    if (units == 'C' || units == 'c') {
        printf("\nPlease enter your temperature in Celsius: ");
        scanf("%lf", &temp);
        printf("\nYour temperature in Fahrenheit  is: %.2lf", (9*temp)/5 + 32);
    }
    else if (units == 'F' || units == 'f') {
        printf("\nPlease enter your temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        printf("\nYour temperature in Celsius :%.2lf" , ((temp - 32) * 5) / 9);
    }
    else {
        printf("\n %c is not the measurement of temperature" , units);
    }
}
