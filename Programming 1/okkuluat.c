#include <stdio.h>

int main()
{
    int luku;
    int taulukko[10];
    int koko = 10;
    for (int i = 0; i < koko; i++)
    {
        printf("Syota %d. luku\n", (i + 1));
        scanf("%d", &luku);
        taulukko[i] = luku;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d  ", taulukko[i]);
        printf("%d\n", taulukko[koko-1]);
        koko--;
    }
}
