#include <stdio.h>

int main(void){

    printf("%-7s%13s", "Celsius", "Fahrenheit\n");

    int a, c;
    double b, f;
    a = 0;
    c = -100;
    f = -148;
    while (a <= 20) {
        printf("%5d%12.2lf\n", c,f);
        c = c+10;
        f = f+18;
        a++;
    }
    return 0;
}
