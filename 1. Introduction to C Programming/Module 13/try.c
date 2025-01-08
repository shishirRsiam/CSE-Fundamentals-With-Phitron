#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int k1=1,s1=n-1;
    for (int i=1;i<=n+n-1;i++)
    {
        for (int a=1;a<=s1;a++)
        {
            printf("# ");
        }
        for (int a=1;a<=k1;a++)
        {
            printf("* ",a);
        }
        if (i<=n-1)
        {
            s1--,k1++;
        }
        else 
        {
            s1++,k1--;
        }
        printf("\n");
    }
    
    return 0;
}