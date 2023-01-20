#include <stdio.h>

int main(void){

  printf("\n%-7s%-7s%-7s%-7s","N", "10*N", "100*N", "1000*N");
  int a;


    a = 1;
    while (a <= 10) {
    printf("\n%-7d%-7d%-7d%-7d", a, 10*a, 100*a, 1000*a);
    a++;
    }
  return 0;


}
