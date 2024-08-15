#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,k; scanf("%d %d", &n, &k);
    for(int j=0;j<n;j++)
    {
        for(int i=1;i<=k;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
