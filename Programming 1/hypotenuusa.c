#include <stdio.h>
#include <math.h>
double laskeHypotenuusa(double, double);

int main() {

    double sivu1 = 0.0;
    double sivu2 = 0.0;
    double hypotenuusa = 0.0;

    printf("\nAnna ensimmäinen sivu: ");
    scanf("%lf", &sivu1);

    printf("\nAnna toinen sivu: ");
    scanf("%lf", &sivu2);

    laskeHypotenuusa(sivu1,sivu2);

    return 0;
}

double laskeHypotenuusa(double luku1, double luku2) {
    double hypotenuusa = 0;
    hypotenuusa = hypot(luku1, luku2);
    printf("%lf", hypotenuusa);
}
