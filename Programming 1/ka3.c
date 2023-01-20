
#include <stdio.h>

int main () {

    double luku, summa=0, maara=0,keskiarvo,i;

    for (i=luku; i >= 0; i = luku){
            scanf("%lf", &luku);
        if(luku >= 0) {
            summa = summa + luku;
            maara = maara + 1;
        }

    }

    keskiarvo = (double)summa / (double)maara;
    printf("Keskiarvo on %.2lf", keskiarvo);
    return 0;

}
