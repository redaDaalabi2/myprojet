#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t[100];
    int i,n,N,som,max,min;
    do{
       printf("Donnez le nombre des element du tableau:\n");
       scanf("%d",&N);
    }while(N==0);
    if(N<0)
    {
        n=N*(-1);
    }
    for(i=0;i<n;i++)
    {
       printf("Donnez l'element %d:\n",i+1);
       scanf("%d",&t[i]);
    }
    som=0;
    //min=t[0];
    //max=t[0];
    for(i=0;i<n;i++)
    {
       printf("T[%d] = %d \n",i+1,t[i]);
       som=som+t[i];
       if(t[i]>max)
        max=t[i];
       if(t[i]<min)
       min=t[i];
    }
    printf("\n");
    printf("La somme est: %d\n",som);
    printf("Le max est: %d\n",max);
    printf("Le min est: %d\n",min);
    system("pause");
    return 0;
}
