#include <stdio.h>
#include <string.h>

char etsiMerkkijonoAlusta(char *lista , char *lista2 , char *loytyi);
int main(void) {

    char mjono1[100];
    char mjono2[100];
    char loydetty[10]={'\0'};
    scanf("%s", mjono1);
    scanf("%s", mjono2);

    etsiMerkkijonoAlusta(mjono1, mjono2, loydetty);
    printf("%s", loydetty);

    return 0;
}

char etsiMerkkijonoAlusta(char *lista , char *lista2 , char *loytyi) {
    for (int i = 0; lista[i]; i++){
            if(lista[i] == lista2[i]){
                //printf("%c", lista[i]);
                loytyi[i] += lista[i];
                //strcat(loytyi[i], lista[i]);
                //printf("%s", loytyi[i]);
            } else if (lista[i] != lista2[i]){
                break;
            } else {

            }
    }
    return loytyi[10];
}
