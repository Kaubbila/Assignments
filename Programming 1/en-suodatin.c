#include <stdio.h>
#include <string.h>

int main () {
    char lista [5][100];
    int i, vertailu[5];

    for (i = 0; i < 5; i++) {
        printf("Anna merkkijono (max 100 merkkia > ");
        scanf("%s", lista[i]);

        //printf("\nListan pituus ompi %d\n", vertailu[i]);
    }

     for (i = 0; i < 5; i++) {
        vertailu[i] = strlen(lista[i]);
        int k = vertailu[i];
        //printf("%s\n", lista[i]);
        //printf("%d\n", vertailu[i]);
        if(lista[i][k-2] == 'e' && lista[i][k-1] == 'n') {
            printf("en-merkkijonoon paattyva merkkijono: %s\n", lista[i]);
           }

        }

}
