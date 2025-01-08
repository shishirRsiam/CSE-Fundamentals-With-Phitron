#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int k=1,s=n-1+n-1;
    for (int i=1;i<=n;i++)
    {

        for (int j=1;j<=s;j++)
        {
            printf(" ");
        }

        for (int j=0;j<k;j++)
        {
            printf("%c ",j+'A');
        }
        printf(" \n");
        k++;
        s--;
        s--;
    }

    return 0;
}
