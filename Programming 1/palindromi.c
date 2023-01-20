#include <stdio.h>
int main ()
{

int a,sum=0,c;

scanf("%d", &a);
c = a;

while (c != 0) {
    sum = sum * 10;
    sum = sum + c%10;
    c = c/10;
}

 if (a < 10000) {
    printf ("Syote ei ole viisinumeroinen positiivinen kokonaisluku");
 }
 else if (a == sum) {
    printf ("Luku %d on palindromi", a);
 } else {
  printf("Luku %d ei ole palindromi", a);
 }
    return 0;
}
