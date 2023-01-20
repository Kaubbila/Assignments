#include <stdio.h>

int main() {

    char c;

    FILE *tiedosto;
    tiedosto = fopen ("teksti.txt","r");
    if ( tiedosto == NULL )
     printf ("Virhe tiedoston avaamisessa\n");

    c = fgetc(tiedosto);
    int rivit = 1, merkit = 0;
    while(c != EOF) {
        c = fgetc(tiedosto);
        merkit++;

        if(c == '\n'){
            rivit++;
        }
    }
    printf("Rivit: %d\n",rivit);
    printf("Merkit: %d\n", merkit);
    fclose(tiedosto);

}
