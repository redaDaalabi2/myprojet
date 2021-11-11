#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int /*x, i, y, z,*/i, j, dim;
    int T[dim],s=0;
    do{
       printf("donner moi la dimension du tableau\n");
       scanf("%d",&dim);
    }while(dim==0);

    for(i=0;i<dim;i++)
    {
        printf("donner la note %d \n",i+1);
        scanf("%d",&T[i]);
    }
    for(i=0;i<dim;i++)
    {
        printf("T[%d] = %d\n",i+1,T[i]);
    }

    /*printf("Entrez deux entiers:\n");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("le nombre de x avant est : %d\n",z);
    printf("le nombre de y avant est : %d\n",x);
    printf("le nombre de x apres est : %d\n",x);
    printf("le nombre de y apres est : %d\n",y);*/
    system("pause");
    return 0;
}
