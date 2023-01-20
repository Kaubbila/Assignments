#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char mystrcpy (char* kohde, const char* lahde) {
    int i;
    for(i = 0; lahde[i] != '\0'; i++) {
        kohde[i] = lahde[i];
    }
    kohde[i] = '\0';

}

void mystrcat (char* kohde, char* lahde) {
    int i,j;

    for(i = 0; kohde[i] != '\0'; i++);
    //--i;
    kohde[i] = ' ';
    ++i;
    for(j = 0; lahde[j] != '\0'; j++, i++) {

    kohde[i] = lahde[j];

    }
    kohde[i] = '\0';
}