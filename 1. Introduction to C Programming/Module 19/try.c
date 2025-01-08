#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=m-1;j>=0;j--)
        {
            printf("%d",a[i][j]);
            if (a[i][j]>=3)
            {
                printf(" ");
            }
        }
        if (i<n-1)
        {
            printf("\n");
        }
        
    }
    return 0;
}
