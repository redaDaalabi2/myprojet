#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("entrer un nombre entier : \n");
    scanf("%d",&x);
    printf("entrer un nombre entier : \n");
    scanf("%d",&y);
    if(x>y)
    {
        printf("%d est le plus grand \n",x);
    }
    else
    {
        printf("%d est le plus grand !!\n",y);
    }
    return 0;
}
