#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
int vastaus,satunnainen,satunnainen2,arvaus;
srand(time(NULL));

    while (arvaus != -1) {
satunnainen = rand() % 10;
satunnainen2 = rand() % 10;
        printf("\nAnna luku -1 lopettaaksesi\n");
        printf("Paljonko on %d kertaa %d?\n", satunnainen, satunnainen2);
        vastaus = satunnainen * satunnainen2;
        scanf("%d", &arvaus);
        if(arvaus == -1){
            return 0;
        }
        if (arvaus == vastaus) {
            printf("Oikein!\n");
        } else {
            while (arvaus != vastaus){
                printf("Vaarin, yrita uudelleen\n");
                scanf("%d", &arvaus);
            if(arvaus == -1){
            return 0;
            }
            }
            printf("Oikein!\n");
        }

    }

}
