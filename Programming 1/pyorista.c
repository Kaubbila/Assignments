#include <stdio.h>
#include <math.h>
double lattia (double luku);
int main () {
    double eka,toka,kolmas,neljas,viides;
    scanf("%lf", &eka);
    scanf("%lf", &toka);
    scanf("%lf", &kolmas);
    scanf("%lf", &neljas);
    scanf("%lf", &viides);

    printf("%lf   %lf", eka, lattia(eka));
    printf("\n");
    printf("\n");
    printf("%lf   %lf\n", toka, lattia(toka));
    printf("\n");
    printf("\n");
    printf("%lf   %lf\n", kolmas, lattia(kolmas));
    printf("\n");
    printf("\n");
    printf("%lf   %lf\n", neljas, lattia(neljas));
    printf("\n");
    printf("\n");
    printf("%lf   %lf\n", viides, lattia(viides));
}

double lattia (double luku) {
    double arvo = 0;
    double tulos = 0;
    arvo = luku;
    tulos = floor(arvo+0.5);
    return tulos;

}
