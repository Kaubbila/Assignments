#include  <stdio.h>
#include  <string.h>
#include <ctype.h>

int main (void) {

    int i = 0;
    char lista [100];
    printf("Anna sana > ");
    fgets(lista,100, stdin);
    for(i = 0; lista[i] != '\0'; i++) {
            if (lista[i] >= 'A' && lista[i] <= 'Z') {
                lista[i] = lista[i] + 32;
            }
    }
    char lista2 [100];
    strcpy(lista2, lista);
    for(i = 0; lista2[i] != '\0'; i++) {
            if (lista2[i] >= 'a' && lista2[i] <= 'z') {
                lista2[i] = lista2[i] - 32;
            }
    }
    printf("\n\n\n");
    printf("%s", lista);
    printf("%s", lista2);
}
