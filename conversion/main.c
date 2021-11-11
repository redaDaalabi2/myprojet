#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mad,S1=0,S2=0;
    printf("combien de d'argent : \n");
    scanf("%f",&mad);
    //1 * mad=0.1 * usd;
    //1 * mad=0.096 * euro;
    S1 = mad * 0.11;
    S2 = mad * 0.096;
    printf("la conversion de %.2f DH est : %.2f $\n",mad,S1);
    printf("la conversion de %.2f DH est : %.2f euro\n",mad,S2);
    return 0;
}
