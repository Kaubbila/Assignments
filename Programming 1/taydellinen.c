#include <stdio.h>
int onkoLukuTaydellinen(int luku, int luku2);
int luku, muisti, i, summa = 0, alku, loppu;
int main(void){

    int alku = 1;
    int loppu = 10000;
    onkoLukuTaydellinen(alku,loppu);
    return(0);
}

int onkoLukuTaydellinen(int luku, int luku2){
loppu = luku2;
for (luku = alku; luku <= loppu; luku++) {
   for (i=1, summa=0; i < luku; i++) {
    if(luku % i == 0)
    summa = summa + i;
   }
   if(summa == luku && summa != 0)
    printf("\nLuku %d on taydellinen luku", luku);
}

}
