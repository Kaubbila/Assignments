#include <stdio.h>

int karkausvuosi(int luku);
int main () {

int vuosi;

printf("Moro ilimotappa karkausvuosi: \n");
scanf("%d", &vuosi);
karkausvuosi(vuosi);
}

int karkausvuosi (int luku) {
    if (((luku % 4 == 0) && (luku % 100!= 0)) || (luku%400 == 0)) {
        printf("Vuosi %d on karkausvuosi", luku);
        }
    else{
        printf("Vuosi %d ei ole karkausvuosi", luku);
        }
}
