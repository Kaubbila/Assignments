#include <stdio.h>

int main()

{   int n,i,j;

    n = 8;
    for(i=1; i <= n; i++) {
            for(j = i; j < n; j++) {
                printf(" ");
            }
            for(j = 1; j <= i ; j++) {
                printf("a");

            }
    printf("\n");
    }




    return 0;
}
