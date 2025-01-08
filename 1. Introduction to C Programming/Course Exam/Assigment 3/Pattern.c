#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int s=n-1,k=1,m=k+2;

    for (int i=1;i<=n+n-1;i++)
    {
        for (int j=0;j<s;j++)
        {
            printf(" ");
        }
        for (int j=1;j<=k;j++)
        {          
            if (i%2==1)
            {
                printf("#");
            }
            else 
            {
                printf("-");
            }
        }
        printf("\n");
        if (i < n)
        {
            s--;
            k += 2; 
        } 
        else 
        {
            s++;
            k -= 2;
        }
    }

    return 0;
}
