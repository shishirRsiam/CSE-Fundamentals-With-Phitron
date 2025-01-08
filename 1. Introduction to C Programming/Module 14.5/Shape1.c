#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int m=1;
    for (int i=1;i<=n;i++)
    {

        for (int j=m;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
        m++;

    }

    return 0;
}
