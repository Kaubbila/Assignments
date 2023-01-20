#include <stdio.h>
#include <string.h>

int main() {
    char lista [5][100];
    char kirjain = 'a';
    int i;

    for(i = 0; i < 5; i++) {
        printf("Anna merkkijono (max 100 merkkia) > ");
        scanf("%s", lista[i]);
    }

    for (i = 0; i < 5; i++) {
        if (lista[i][0] == kirjain) {
            printf("\na-merkilla alkava merkkijono: %s ", lista[i]);
        }
    }

}
