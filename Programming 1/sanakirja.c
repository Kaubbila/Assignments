#include <stdio.h>
#include <string.h>

int main()
{
    char sana[100], englanniksi[100], suomeksi[100], sanakirj;
    int riveja,i;

    //Alustetaan sanakirja
    FILE * txt;
    if ((txt = fopen("sanakirja.txt", "r")) == NULL) {
        printf("Ei onnistunut");
        return 0;
    }
    //Etsitään montako riviä
    for (sanakirj = getc(txt); sanakirj != EOF; sanakirj = getc(txt)){
        if (sanakirj == '\n'){
            riveja++;
        }
    }

    //Tiedoston alku
    fseek(txt,0,SEEK_SET);
    scanf("%s",sana);
    fscanf(txt,"%[^;]", suomeksi);
    //Nykyinen sijainti
    fseek(txt,1,SEEK_CUR);
    fscanf(txt,"%[^\n]",englanniksi);

    if(strcmp(sana,suomeksi)== 0){
        printf("Sana %s englanniksi on %s", sana, englanniksi);
        return 0;
    }
     if (strcmp(sana, englanniksi) == 0){
            printf("Sana %s suomeksi on %s", sana, suomeksi);
            return 0;
    }
    
    fseek(txt,1,SEEK_CUR);
    while(i < riveja){
    fseek(txt,1,SEEK_CUR);
    fscanf(txt,"%[^;]", suomeksi);
    fseek(txt,1,SEEK_CUR);
    fscanf(txt, "%[^\n]", englanniksi);

        if (strcmp(sana, suomeksi) == 0){
            printf("Sana %s englanniksi on %s", sana, englanniksi);
            return 0;
    }
        if (strcmp(sana, englanniksi) == 0){
            printf("Sana %s suomeksi on %s", sana, suomeksi);
            return 0;
    }
    i++;

    }
    printf("Sanaa %s ei loytynyt sanakirjasta",sana);


}
