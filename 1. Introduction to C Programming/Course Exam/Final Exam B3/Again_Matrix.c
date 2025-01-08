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
        for (int j=0;j<m;j++)
        {
            if (i==n-1)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
    printf("\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i][m-1]);
    }
    return 0;
}
