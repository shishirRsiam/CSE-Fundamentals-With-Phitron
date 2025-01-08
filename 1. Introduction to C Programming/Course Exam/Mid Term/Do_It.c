#include<stdio.h>

int main()
{
    
    int n,k;
    scanf("%d %d",&n,&k);

    for (int i=0;i<n;i++)
    {
        for (int m=1;m<=k;m++)
        {
            printf("%d ",m);
        }
    printf("\n");
        
    }
    
    return 0;
}


