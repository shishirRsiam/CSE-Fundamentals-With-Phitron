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
            
            if (j==0)
            {
                printf("%d",a[i][j]);
            }
            else 
            {
                printf("%d ",a[i][j]);
            }
        }
        if (i<n-1)
        {
            printf("\n");
        }
        
    }
    return 0;
}
// 3 3
// 2 3 5
// 7 9 20
// 35 1 12