#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int k=1;
    for (int i=1;i<=n+n-1;i++)
    {

        for (int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        if (i<=n-1)
        {
            k++;
        }
        else 
        {
            k--;
        }
        printf("\n");
        
    }

    return 0;
}
