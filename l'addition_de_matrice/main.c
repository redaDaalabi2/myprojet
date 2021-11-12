#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[2][2],M[2][2],R[2][2], i, j;
    printf("remplissage du tableau\n");
    for(i=0;i<2;i=i+1)
    {
        for(j=0;j<2;j++)
        {
            printf(" T[%d][%d] = ",i+1,j+1);
            scanf("%d",&T[i][j]);
        }
    }
    printf("remplissage du tableau\n");
    for(i=0;i<2;i=i+1)
    {
        for(j=0;j<2;j++)
        {
            printf(" M[%d][%d] = ",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d\t",T[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i=i+1)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d\t",M[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           R[i][j] = M[i][j] + T[i][j];
           printf(" %d\t",R[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;++i)
    {
        for(j=0;j<2;++j)
        {
            R[0][0]=0;
            R[1][1]=0;
            printf(" %d\t",R[i][j]);
        }
        printf("\n");
    }
    return 0;
}
