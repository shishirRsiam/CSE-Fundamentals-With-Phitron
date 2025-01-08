#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int s=n-1, k=1;
    for (int i=1;i<=n+n;i++)
    {
        for (int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for (int j=1;j<=k;j++)
        {
            printf("*");
        }
        printf("\n");
        if (i<n)
        {
            s--;
            k++;
            k++;
        }
        else if (i>n)
        {
            s++;
            k--;
            k--;
        }

    }

    return 0;
}
