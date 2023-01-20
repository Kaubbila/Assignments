#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main () {
    int taulukko [20] = {0};
    srand(time(NULL));

    for (int i = 0; i <= 20; i++) {
        bool duplikaatti = false;
        int luku = 1 + rand() % 20;

        for (int i = 0; i < 20; i++) {
        if (luku == taulukko[i]) {
            duplikaatti = true;
        }
    }
    if (duplikaatti == false) {
        taulukko[i] = luku;
        printf("%d\n", taulukko[i]);
    }
    }

}

