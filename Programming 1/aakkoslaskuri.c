#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i = 0;
    char taulukko1[100], taulukko2[100], taulukko3[100], summa[300];
    char kirjaimet = 'a';
    int maarat [26] = {0};

    scanf("%s", taulukko1);
    scanf("%s", taulukko2);
    scanf("%s", taulukko3);
    strcpy(summa, taulukko1);
    strcat(summa, taulukko2);
    strcat(summa, taulukko3);

    while(summa[i] != '\0'){
        if(summa[i] >= 'a' && summa[i] <= 'z'){
            maarat[summa[i]-'a']++;
            i++;
        }
    }
    printf("\n");
    printf("Aakkonen    Kpl\n");
    for (i = 0; i < 26; i++) {
        printf("%c           %d\n", kirjaimet, maarat[i]);
        kirjaimet++;
  }

}
