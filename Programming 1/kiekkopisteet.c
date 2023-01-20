#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void lueRoskat(void);
typedef struct{
  char nimi[50];
  int voitot;
  int haviot;
}Joukkue;
Joukkue lueJoukkue(void);


int main (void)
{
    int joukkueita = 0,i,j;


    printf("Joukkueiden maara > ");
    scanf("%d", &joukkueita);
    Joukkue maara[joukkueita];

    //joukkueen lukeminen structiin
    for(i = 0; i < joukkueita; i++)
    {
        lueRoskat();
        maara[i] = lueJoukkue();

    }
    lueRoskat();
    // joukkueiden järjestäminen oikeaan järjestykseen
    for (i = 0; i < joukkueita; i++) {
            for(j = 0; j < joukkueita; j++) {
                 int verrattava = maara[i].voitot - maara[i].haviot;
                 int verrattava2 = maara[j].voitot - maara[j].haviot;
                 if(verrattava > verrattava2) {
                    Joukkue temp = maara[i];
                    maara[i] = maara[j];
                    maara[j] = temp;
            }
        }
    }

    // joukkueen tulostaminen structista
    for(i = 0; i < joukkueita; i++) {
        printf("%d. joukkue:          %s tilanne: %d voittoa ja %d tappiota\n",i+1,maara[i].nimi, maara[i].voitot, maara[i].haviot);
    }


    return 0;
}

    Joukkue lueJoukkue(void)
{
    Joukkue op;
    printf("Anna joukkueen nimi: \n");
    fgets(op.nimi,50,stdin);
    if( op.nimi[strlen(op.nimi)-1] == '\n'){
        op.nimi[strlen(op.nimi)-1] = '\0';
    }

    printf("Voitot: \n");
    scanf("%d", &op.voitot);


    printf("Haviot: \n");
    scanf("%d", &op.haviot);

    return op;
}

void lueRoskat(void)
{
   while( getc(stdin) != '\n');

}
