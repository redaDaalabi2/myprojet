#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Age;
    printf("quel est l'intervalle de votre age\n");
    printf("1 : 0<Age<3\n");
    printf("2 : 3<=Age<15\n");
    printf("3 : 15<=Age<20\n");
    printf("4 : 20<=Age<35\n");
    printf("5 : 35<=Age<65\n");
    printf("6 : 65<=Age\n");
    scanf("%d",&Age);
    switch(Age)
    {
        case 1 : printf("donc Bebe !!\n");
        break;
        case 2 : printf("donc enfant !!\n");
        break;
        case 3 : printf("donc Adolescent !!\n");
        break;
        case 4 : printf("donc jeune !!\n");
        break;
        case 5 : printf("donc mature !!\n");
        break;
        case 6 : printf("donc vieux !!\n");
        break;
    }
    return 0;
}
