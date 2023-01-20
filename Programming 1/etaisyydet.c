#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


typedef struct {
    double x;
    double y;
} Koordinaatit;
Koordinaatit lueKoordinaatit(void);

int main (void) {

    int i,k=4;
    double mutkitellen =0,alkuloppu=0;


    Koordinaatit piste[k];

    for(i = 0; i <= k; i++) {
        piste[i] = lueKoordinaatit();
    }


    for(i = 0; i < k; i++) {
    mutkitellen = mutkitellen + sqrt(((piste[i+1].x - piste[i].x) * (piste[i+1].x - piste[i].x)) + ((piste[i+1].y - piste[i].y) * (piste[i+1].y - piste[i].y)));

    }
    alkuloppu = ((piste[0].x - piste[4].x) * (piste[0].x - piste[4].x)) + ((piste[0].y - piste[4].y) * (piste[0].y - piste[4].y));

    printf("\nEtaisyys mutkitellen on %.3lf",mutkitellen);
    printf("\nAlku ja loppupisteiden valinen etaisyys on %.3lf",sqrt(alkuloppu));

}
Koordinaatit lueKoordinaatit(void){
    Koordinaatit ko;

    printf("\nSyota koordinaatti X >");
    scanf("%lf", &ko.x);

    printf("\nSyota koordinaatti Y >");
    scanf("%lf", &ko.y);
    printf("\n");

    return ko;
}
