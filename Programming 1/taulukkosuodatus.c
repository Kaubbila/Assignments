#include <stdio.h>

int main()
{
    int luku,j=1,i;
    int taulukko[20];
    int koko = 20;
    for (int i = 0; i < koko; i++)
    {
        printf("Syota %d luku\n", (i + 1));
        scanf("%d", &luku);

        while (luku < 10 || luku > 100)
        {
            printf("\nEi kelpaa!\nYrita uudelleen \n");
            scanf("%d", &luku);
        }
        taulukko[i] = luku;
    }
    if (taulukko[0] != taulukko[1]){
        printf("%d\n", taulukko[0]);
    }
    for (int i = 1; i < 20 - 1; i++){
        if (taulukko[i] != taulukko[i+1] && taulukko[i] != taulukko [i-1]) {
            printf("%d\n", taulukko[i]);
        }
    }

    if (taulukko[20 - 2] != taulukko [20-1]){
        printf("%d", taulukko[20-1]);
    }




}
