#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,Age;
    printf(" Ecrivez votre age :\n");
    scanf("%d",&Age);
    if(Age<3)
    {
        printf("Categorie Bebe\n");
        i=1;
    }
    else if(Age>=3 && Age<15)
    {
         printf("Categorie Enfant\n");
         i=2;
    }
    else if(Age>=15 && Age<20)
    {
         printf("Categorie Adolescent\n");
         i=3;
    }
    else if(Age>=20 && Age<30)
    {
         printf("Categorie jeun\n");
         i=4;
    }
    else if(Age>=35 && Age<65)
    {
         printf("Categorie Mature\n");
         i=5;
    }
    else if(Age>=65)
    {
         printf("Categorie Vieux\n");
         i=6;
    }

    switch(i)
    {
        case 1 : printf("donc l'intervale de votre Age est : 0<Age<3 \n");
        break;
        case 2 : printf("donc l'intervale de votre Age est : 3<=Age<15 \n");
        break;
        case 3 : printf("donc l'intervale de votre Age est : 15<=Age<20 \n");
        break;
        case 4 : printf("donc l'intervale de votre Age est : 20<=Age<35 \n");
        break;
        case 5 : printf("donc l'intervale de votre Age est : 35<=Age<65 \n");
        break;
        case 6 : printf("donc l'intervale de votre Age est : 65<=Age \n");
        break;
    }
}
