#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{
    int taulukko [13] = {0};
    int heitot = 36000, summa = 0;
    srand(time(NULL));

    for (int i = 1; i <= heitot; ++i) {
    int noppa = 1+ rand() % 6;
    int noppa2 = 1+ rand() % 6;
    taulukko[noppa+noppa2]++;
    }

    printf("Summa    Lukumaara\n");
    for (int i = 2; i < 13; i++) {
        printf("%8d  %d\n", i, taulukko[i]);
        summa += taulukko[i];
    }
    printf("YHTEENSA");
    printf("%d", summa);
    return 0;

}
