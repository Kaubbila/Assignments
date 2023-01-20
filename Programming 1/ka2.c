
#include <stdio.h>

int main () {

    double luku, summa=0, maara=0,keskiarvo;


    do {
        scanf("%lf", &luku);
        if (luku >= 0) {
        summa = summa + luku;
        maara = maara + 1;
        }
    }
    while(luku > 0);

    keskiarvo = (double)summa / (double)maara;
    printf("Keskiarvo on %.2lf", keskiarvo);
    return 0;

}
