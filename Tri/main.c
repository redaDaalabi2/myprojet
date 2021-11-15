#include <stdio.h>
#include <stdlib.h>
#define Max 100

int main()
{
    int T[Max], i, dim, min, posmin, DIM;
    //dimension du tableau
    do
    {
      printf("Entrer la dimension du tableau = ");
      scanf("%d",&dim);
    }while(dim>Max || dim<1);
    DIM=dim;
    printf("remplissage de tableau\n");
    for(i=0;i<dim;i++)
    {
        printf("donner T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("affichage du tableau avant le tri par selection\n");
    for(i=0;i<dim;i++)
    {
        printf(" %d\t",T[i]);
    }
    while(dim>0)
    {
        min=T[0];
        posmin=0;
        for(i=0;i<dim;i++)
        {
            if(T[i]>min)
            {
               min=T[i];
               posmin=i;
            }
        }
        for(i=posmin;i<dim;i++)
        {
            T[i]=T[i+1];
        }
        T[dim-1]=min;
        dim--;
    }
    printf("\naffichage du tableau apres le tri\n");
    for(i=0;i<DIM;i++)
    {
        printf(" %d\t",T[i]);
    }
    return 0;
}

