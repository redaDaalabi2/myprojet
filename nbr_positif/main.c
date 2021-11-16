#include <stdio.h>
#include <stdlib.h>
#define Max 100

// fonction qui permit de afficher le tableau
void afficher(int TAB[], int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        if(TAB[i]>=0)
        {
           printf(" %d\t",TAB[i]);
        }
    }
}

// fonction qui permit de remplit le tableau
void remplit(int tab[], int n)
{
    int i=0;
    do
    {
          printf("donner T[%d] : ",i+1);
          scanf("%d",&tab[i]);
          i=i+1;
    }while(tab[i-1]>=0);
    afficher(tab, n-1);
}

// tri par sélection
void tri_selection(int tab[], int n)
{
  int i, j, tmp;
  for(i=0;i<n;i++)
  {
     for(j=i+1;j<n;j++) // j il prends l'indice apres i
     {
      if(tab[j]<tab[i])
      {
          tmp=tab[i];
          tab[i]=tab[j];
          tab[j]=tmp;
      }
     }
  }
}

int main()
{
    int T[Max]; // tableau des entiers
    int dim; // dimension du tableau
    do
    {
      printf("Donner la dimension du tableau : ");
      scanf("%d",&dim);
    }while(dim>Max || dim<1);
    printf("affichage avant le tri\n");
    remplit(T, dim-1);
    printf("\naffichage apres le tri\n");
    tri_selection(T, dim);
    afficher(T, dim-1);
    return 0;
}
