#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int tuntipalkka, tunnit, bruttopalkka;


printf("Anna tuntipalkka >\n");
scanf("%d", &tuntipalkka);

printf ("Tehdyt tunnit >\n");
scanf("%d", &tunnit);

bruttopalkka = tuntipalkka * tunnit;

printf( "Bruttopalkkasi on %d euroa", bruttopalkka );

return (0);
}
