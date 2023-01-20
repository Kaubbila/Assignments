#include <stdio.h>
int main (void)
{
    double tuntipalkka, tunnit, veroprosentti, bruttopalkka, nettopalkka, verotus, ylityoraha, ylityotunnit;

    scanf("%lf", &tuntipalkka);
    scanf("%lf", &tunnit);
    scanf("%lf", &veroprosentti);

    ylityotunnit = 0;
    ylityoraha = tuntipalkka * 1.5;

    int a = 41;
    int b = 0;
    while(a <=  tunnit)
    {
        ylityotunnit = ylityotunnit + 1;
        a = a+1;
        b = b + 1;
    }


    bruttopalkka = (tuntipalkka  * (tunnit - b)) + (ylityotunnit * ylityoraha);
    verotus = (veroprosentti/100) * bruttopalkka;
    nettopalkka = bruttopalkka - verotus;
    printf("Nettopalkkasi on %2.2lf euroa ja verottajan osuus on %2.2lf euroa\n", nettopalkka, verotus);
}
