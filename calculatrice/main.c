#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float somme(float a, float b);
float soustraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);
float PGCD(float a, float b);

int main()
{
    float x, y;
    int num;
    printf("entrer un nombre : ");
    scanf("%f",&x);
    printf("entrer un nombre : ");
    scanf("%f",&y);
    printf("****tu peut choisir svp****\n");
    printf("1 : la somme\n");
    printf("2 : la soustraction\n");
    printf("3 : produit\n");
    printf("4 : division\n");
    printf("5 : PGCD\n");
    do{
       printf("\nVeuillez saisir le numero pour faire l'operation que vous voulez!!: ");
       scanf("%d",&num);
       if((num>5)||(num<1))
        printf("\n(!) Ce numero ne figure pas dans la liste !\n");
    }while((num>5)||(num<1));
    if(num==1)
      printf("la somme de %.2f et %.2f est : %.2f\n",x,y,somme(x,y));
    if(num==2)
      printf("la soustraction de %.2f et %.2f est : %.2f\n",x,y,soustraction(x,y));
    if(num==3)
      printf("le produit de %.2f et %.2f est : %.2f\n",x,y,multiplication(x,y));
    if(num==4)
    {
      if(y==0)
      {
          printf("Ereur le denominateur est toujour deferents de 0!!\n");
      }
      else
      printf("la division de %.2f et %.2f est : %.2f\n",x,y,division(x,y));
    }
    if(num==5)
      printf("le PGCD de %.2f et %.2f est : %.2f\n",x,y,PGCD(x,y));
    system("PAUSE");
    return 0;
}

float somme(float a, float b)
{
   return a + b;
}

float soustraction(float a, float b)
{
   return a - b;
}

float multiplication(float a, float b)
{
   return a * b;
}

float division(float a, float b)
{
   return a / b;
}

float PGCD(float a, float b)
{
	int z;
	if((int)b==0)
	return (int)a;
	else
	return PGCD((int)b,((int)a%(int)b));
}

