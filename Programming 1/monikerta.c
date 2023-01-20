#include <stdio.h>

int main (void)

{
    int luku, luku2;
    scanf("%d", &luku);
    scanf("%d", &luku2);

    if(luku2 == 0 )
    {
        printf ("Luku %d ei ole luvun %d monikerta.", luku, luku2);
    }

     if( luku % luku2 == 0 || luku == 0)
    {
        printf("Luku %d on luvun %d monikerta.", luku, luku2);
    }
     else
    {
        printf ("Luku %d ei ole luvun %d monikerta.", luku, luku2);
    }
}
