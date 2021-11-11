#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("entrer un nombre \n");
    scanf("%f",&a);
    if(a>0)
    {
        printf("%.2f est positif\n",a);
    }
    else
    {
        printf("%.2f est negatif\n",a);
    }
    return 0;
}
