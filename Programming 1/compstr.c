#include <stdio.h>
#include <string.h>

void omaStrcmp(char * eka, char *  toka);

int main() {

    char taulukko[10], taulukko2[10];

    scanf("%s", taulukko);
    scanf("%s", taulukko2);

   omaStrcmp(taulukko, taulukko2);

}

void omaStrcmp(char * eka, char *  toka) {

int erilaiset = 0, i=0;

while(eka[i] == toka[i]){
    if(eka[i] == '\0' && toka[i] == '\0') {
            break;
    }
    i++;
    }
    erilaiset = eka[i] - toka[i];

    if(erilaiset > 0){
        printf("%s > %s", eka, toka);
    } else if(erilaiset < 0) {
        printf("%s < %s", eka, toka);
    } else {
        printf("%s == %s", eka, toka);
    }
}

