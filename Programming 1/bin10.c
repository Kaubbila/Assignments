#include <stdio.h>

int main()
{
int luku,vali,desi= 0, i = 1;
scanf("%d", &luku);



while(luku > 0) {
    vali = luku % 10;
    desi = desi + vali * i;
    luku = luku / 10;
    i = i * 2;
}
printf("%d", desi);

return 0;

}

