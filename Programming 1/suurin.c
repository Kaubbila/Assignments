#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int a[10];
    int i = 0;
    int suurin = 0;
    while (i < 10) {
        printf("Anna arvo >");
        scanf("%d", &a[i]);
        i++;
    }
    suurin = a[0];
    for (i = 0; i < 10; i++) {
        if (a[i] > suurin) {
            suurin = a[i];
        }
    }
    printf("Suurin syottamasi luku oli %d", suurin);

}
