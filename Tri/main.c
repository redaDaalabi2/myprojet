#include <stdio.h>
#include <stdlib.h>

void tri_selection(int *t, int n);

int main()
{
    int *T, i, dim;
    //dimension du tableau
    do
    {
      printf("Entrer la dimension du tableau\n");
      scanf("%d",&dim);
      if(dim<0)
        dim * -1;
    }while(dim==0);
    T=(int *)malloc(dim * sizeof(int));
    printf("remplissage de tableau\n");
    for(i=0;i<dim;i++)
    {
        printf("donner T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("affichage du tableau avant le tri\n");
    for(i=0;i<dim;i++)
    {
        printf("T[%d] = %d\n",i+1,T[i]);
    }
    tri_selection(T,dim);
    printf("affichage du tableau apres le tri\n");
    for(i=0;i<dim;i++)
    {
        printf("T[%d] = %d\n",i+1,T[i]);
    }
    return 0;
}

void tri_selection(int *t, int n)
{
   int i, min, j , tmp;
   for(i = 0 ; i < n - 1 ; i++)
   {
     min = i;
     for(j = i+1 ; j < n ; j++)
      if(t[j] < t[min])
       min = j;
        if(min != i)
        {
         tmp = t[i];
         t[i] = t[min];
         t[min] = tmp;
        }
   }
}
