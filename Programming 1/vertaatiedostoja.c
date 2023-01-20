#include <stdio.h>
#include <string.h>

int main () {
    char a[100];
    char b[100];

    FILE *eka;
    FILE *toka;
    eka = fopen ("eka.txt","r");
    toka = fopen ("toka.txt","r");

    fgets(a,100,stdin);
     if(a[strlen(a)-1] == '\n'){
        a[strlen(a)-1] = '\0';
     }
   if( (eka=fopen(a, "r")) == NULL){
    printf("Tiedoston %s avaaminen lukemista varten epäonnistui\n", a);
    return 0;
  }
    fgets(b,100,stdin);
    if(b[strlen(b)-1] == '\n'){
       b[strlen(b)-1] = '\0';
       }
    if( (toka=fopen(b, "r")) == NULL){
    printf("Tiedoston %s avaaminen lukemista varten epäonnistui\n", b);
    return 0;
  }
    char ekakopio = fgetc(eka);
    char tokakopio = fgetc (toka);

    while (ekakopio != EOF && tokakopio != EOF) {
    ekakopio = fgetc(eka);
    tokakopio = fgetc(toka);
        if(ekakopio == EOF && tokakopio == EOF) {
            printf("Tiedostot ovat sisällöltään identtiset.");
            return 0;
        }
        if (ekakopio != tokakopio) {
            printf("Tiedostot eivät ole sisällöltään identtiset.");
            return -1;
        }
    }
    fclose(eka);
    fclose(toka);
}
