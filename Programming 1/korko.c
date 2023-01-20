#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    double lainasumma, lainakorko, korko, kokonaiskorko;
    int lainapaiva;

   
    scanf("%lf", &lainasumma);

    
    scanf("%lf", &lainakorko);

   
    scanf ("%d", &lainapaiva);

    korko = lainakorko / 100;
    kokonaiskorko = lainasumma * korko * lainapaiva / 365;

    printf("Lainapaaoman %.2lf euroa korko %d paivalta korkoprosentilla %.2lf on yhteensa %.2lf euroa.", lainasumma, lainapaiva, lainakorko, kokonaiskorko );


}
