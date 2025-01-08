#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int s=n-1, k=1;
    for (int i=1;i<=n+n-1;i++)
    {

        for (int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        for (int j=1;j<=s;j++)
        {
            printf("0 ");
        }
        for (int j=1;j<=s;j++)
        {
            printf("0 ");
        }
        for (int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        if (i<=n-1)
        {
            k++;
            s--;
        }
        else 
        {
            k--;
            s++;
        }
        printf("\n");
        
    }

    return 0;
}
