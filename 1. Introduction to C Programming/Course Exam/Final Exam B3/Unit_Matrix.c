#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
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
    else 
    {
        printf("NO");
    }
    return 0;
}
