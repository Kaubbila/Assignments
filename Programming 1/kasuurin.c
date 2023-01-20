#include <stdio.h>

int main()
{
    int luku, rem= 0,summa=0;
    double keskiarvo;
    int taulukko[10];
    int koko = 10;
    for (int i = 0; i < koko; i++)
    {
        printf("Anna %d. kokonaisluku\n", (i + 1));
        scanf("%d", &luku);
        while (luku < 0 || luku > 100) {
            printf("Anna %d. kokonaisluku\n", i+1);
            scanf("%d", &luku);
        }
        taulukko[i] = luku;
        summa = summa + luku;
        keskiarvo = (double)summa / 10;

    }
    for (int i = 0; i < koko; i++) {
        printf("%d ", taulukko[i]);
    }
    for (int i = 1; i < koko; i++) {
        if (taulukko[i] > taulukko[0]) {
            taulukko[0] = taulukko[i];
            rem = i;
        }
    }
    printf("\nSuurin arvo on %d ja se sijaitsee paikassa %d\n", taulukko[0],rem);

    printf("Taulukon arvojen keskiarvo on %.3lf ", keskiarvo);
}
