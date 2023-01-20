#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char poistaValilyonnit(char lista[], char lista2[]);

int main() {
    char lista[100], lista2[100], lista3[100], siivottu[300];

    fgets(lista, 100, stdin);
    fgets(lista2, 100, stdin);
    fgets(lista3, 100, stdin);
    //strcpy(siivottu, lista);
    //strcat(siivottu, lista2);
    //strcat(siivottu, lista3);
     poistaValilyonnit(lista,siivottu);
     poistaValilyonnit(lista2,siivottu);
     poistaValilyonnit(lista3,siivottu);
}

char poistaValilyonnit(char lista[], char siivottu[]) {
    int i, k=0;

    for(i=0;lista[i];i++){
        lista[i] = lista[i+k];
        if (lista[i] == ' ') {
            k++;
            i--;
        }
    }
    printf("%s", lista);

}
