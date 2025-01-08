#include<stdio.h>

int main()
{
    
    int n,m=1;
    {
        scanf("%d",&n);
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            printf("*");
        }
        printf(" Sishir Siam ");
        for (int k=1;k<=m;k++)
        {
            printf("*");
        }
        printf("\n");
        m++;
    }

    return 0;
}
