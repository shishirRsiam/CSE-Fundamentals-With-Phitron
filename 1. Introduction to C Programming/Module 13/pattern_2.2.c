#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int s=n-1, k=1;
    for (int i=1;i<=n;i++)
    {
        
        for (int a=1;a<=s;a++)
        {
            printf(" ");
        }
        for (int a=1;a<=k;a++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        k=k+2;
        

    }
    return 0;
}
