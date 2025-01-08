#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=0;
    if (n!=m)
    {
        flag=1;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i+j==n-1)
            {
                if (a[i][j]!=1)
                {
                    flag=1;
                }
            }
            else if (i==j)
            {
                if (a[i][j]!=1)
                {
                    flag=1;
                }
            }
            else if (a[i][j]!=0)
            {
                flag=1;
            }
        }
    }
    if (flag==0)
    {
        printf("YES");
    }
    if (flag==1)
    {
        printf("NO");
    }
    return 0;
}
