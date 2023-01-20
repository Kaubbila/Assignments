#include <stdio.h>
double laskeParkkiMaksu(double tunnit);

int main()
{
int asiakas;
double eka, toka, kolmas, tunnit, veloitus;

for(asiakas = 1; asiakas <= 3; asiakas++) {
    scanf("%lf", &tunnit);

    if(asiakas == 1)
        eka = tunnit;
    else if (asiakas == 2)
        toka = tunnit;
    else
        kolmas = tunnit;
}

printf("Asiakas Tunnit Veloitus\n");
printf("%d %.2lf %.2lf\n", 1, eka, laskeParkkiMaksu(eka));
printf("%d %.2lf %.2lf\n", 2, toka, laskeParkkiMaksu(toka));
printf("%d %.2lf %.2lf\n", 3, kolmas, laskeParkkiMaksu(kolmas));
printf("YHTEENSA %.2lf %.2lf", eka + toka + kolmas, laskeParkkiMaksu(eka)+laskeParkkiMaksu(toka)+laskeParkkiMaksu(kolmas));


return 0;
}
double laskeParkkiMaksu (double tunnit)
{
    int t = tunnit;
    double veloitus = 2.0;

    if(tunnit > 0 && tunnit <= 3) {
        return veloitus;
        } else if(tunnit <= 24) {
            while (t > 3) {
                veloitus = veloitus + 0.5;
                t--;
                if (veloitus >= 10)
                    veloitus = 10;
            }
            return veloitus;

        }

}





