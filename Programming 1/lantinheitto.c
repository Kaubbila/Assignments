#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kolike ();
int main () {

int heitot, kruuna, klaava;
srand(time(NULL));
    for (heitot = 0; heitot <= 100; heitot++){
        if (kolike() == 0)
        kruuna++;
        else
        klaava++;
    }
    printf("Heittojen tulos: %d kruunua ja %d klaavaa", kruuna, klaava);

}

int kolike () {
    int i = rand() % 2;

    if(i == 0)
        return 0;
    else
        return 1;

}
