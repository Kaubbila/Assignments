#include <stdio.h>
#include <stdlib.h>
int tunnit, minuutit, sekuntit,tunnit2,minuutit2,sekuntit2, b;
int aika,aika2, aikaero (int luku1, int luku2, int luku3);
int main () {

int tunnit, minuutit, sekuntit;
    //aika
    printf ("Tunnit\n");
    scanf("%d",&tunnit);
    printf ("Minuutit\n");
    scanf("%d",&minuutit);
    printf ("sekuntit\n");
    scanf("%d",&sekuntit);
    // 2 aika
    printf ("Tunnit\n");
    scanf("%d",&tunnit2);
    printf ("Minuutit\n");
    scanf("%d",&minuutit2);
    printf ("sekuntit\n");
    scanf("%d",&sekuntit2);
    aika = aikaero(tunnit,minuutit,sekuntit);
    aika2= aikaero(tunnit2,minuutit2, sekuntit2);
    int lasku = aika - aika2;
    if (lasku < 0) {
        int a = aika - aika2;
        int b = abs(a);
        printf("Aikaero on %d\n", (b));
    } else {
    printf("Aikaero on %d\n", (lasku));
    }
    int sekuntti, t, m, s;
    if (lasku > 0) {
        int sekuntti = lasku;
        int t = (sekuntti / 3600);
        int m = (sekuntti -(3600*t))/60;
        int s = (sekuntti -(3600*t)-(m*60));
        printf("Aika on %d tuntia %d minuuttia ja %d sekuntia", t, m, s);
    } else {
        int a = aika - aika2;
        int b = abs(a);
        int sekuntti = b;
        int t = (sekuntti / 3600);
        int m = (sekuntti -(3600*t))/60;
        int s = (sekuntti -(3600*t)-(m*60));
        printf("Aika on %d tuntia %d minuuttia ja %d sekuntia", t,m,s);
     }



}
int aikaero (int luku1, int luku2, int luku3) {
tunnit = luku1;
minuutit = luku2;
sekuntit = luku3;
    int aikasekuntteina = sekuntit + (minuutit * 60) + (tunnit * 3600);
    return aikasekuntteina;



}
