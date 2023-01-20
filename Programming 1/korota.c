#include <stdio.h>
#include <math.h>

int korotaPotenssiin (int luku1, int luku2);
int main() {
int luku,potenssiin, tulos;

    printf("Luku?\n");
    scanf("%d", &luku);
    printf("Potenssiin?\n");
    scanf("%d", &potenssiin);
    tulos = korotaPotenssiin(luku,potenssiin);
    printf("Luku %d korotettuna potenssiin %d on %d", luku, potenssiin, tulos);


}
int korotaPotenssiin (int luku1, int luku2) {
    int i = luku2;
    int potenssiin = luku1;
    while (i >= 2) {
    potenssiin = potenssiin * luku1;
    i = i - 1;
    }
    return (potenssiin);
}

