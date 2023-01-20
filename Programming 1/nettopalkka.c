#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    double tuntipalkka, tunnit, bruttopalkka, veroprosentti, verotus, nettopalkka;



printf("Anna tuntipalkka >\n");
scanf("%lf", &tuntipalkka);

printf ("Tehdyt tunnit >\n");
scanf("%lf", &tunnit);

printf ("Veroprosentti >\n");
scanf ("%lf", &veroprosentti);

bruttopalkka = tuntipalkka * tunnit;
verotus = (veroprosentti / 100) * bruttopalkka;
nettopalkka = bruttopalkka - verotus;

printf( "Nettopalkkasi on %2.2lf euroa josta veron osuus on %2.2lf euroa", nettopalkka,  verotus );

return (0);
}
