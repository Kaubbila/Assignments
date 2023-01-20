#include <stdio.h>
int paivienLukumaaraKuukaudessa (int kk);
int main () {
    int luku;
    printf("Anna luku 1-12\n");
    scanf("%d", &luku);
    int kuukausi = paivienLukumaaraKuukaudessa(luku);
    if (luku > 0 && luku < 13)
    printf("kuukaudessa %d on %d paivaa", luku, kuukausi);
    else
    printf("kuukautta %d ei ole olemassa", luku);
}

int paivienLukumaaraKuukaudessa (int kk) {
int kuukaudet[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

return kuukaudet[kk];

}
