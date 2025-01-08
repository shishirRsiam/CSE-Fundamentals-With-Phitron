#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int k=1, s=n-1;
    for (int i=1;i<=n+n-1;i++)
    {

        for (int a=1;a<=s;a++)
        {
            printf("# ");
        }

        
        for (int a=1;a<=k;a++)
        {
            printf("*%d* ",a);
        }
        for (int a=1;a<=s;a++)
        {
            printf("# ");
        }
        if (i<n)
        {
            s--,k=k+2;
        }
        else 
        {
            s++,k=k-2;
        }

        printf("\n");

    }

    return 0;
}
