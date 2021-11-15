#include<stdio.h>
#include<stdlib.h>

int main()
{
  float T1[2];/*Tableau notes*/
  int T2[2];/*Tableau coefs*/
  int i;/*Variable*/
  int somme_coef=0;/*Somme coefficient*/
  float somme_note=0;/*Somme note*/
  float moyenne;/*Moyenne*/
  //Entrée des donnees
  printf("Entrez les notes puis le coef.\n");
  for(i=0;i<2;i++){
   scanf("%d %d",&t[i],&c[i]);
   printf("T1[i]=%d,T2[i]=%d \n",t[i],c[i]);
  }
}
/*Traitement des données*/
for(i=0;i<T;i++){
somme_note=somme_note+(t[i]*c[i]);{ifdef DEBUG;
fprintf(stderr,"somme_note=%f, ",somme_note);
}
somme_coef=somme_coef+(c[i]);{ifdef DEBUG;
fprintf(stderr,"somme_coef=%d, ",somme_coef);
}
}
moyenne=somme_note/somme_coef;
/*Affichage du résultat*/
printf("La moyenne est de %f\n",moyenne);
scanf("%*c");
return(0);
}
