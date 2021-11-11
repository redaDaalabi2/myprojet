#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T1[3][3], T2[3][3], i, j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("entrer T1[%d][%d] = ",i+1,j+1);
            scanf("%d",T1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("entrer T1[%d][%d] = %d\n",i+1,j+1,T1[i][j]);
        }
    }
    return 0;
}
