#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n; scanf("%d",&n);
    int a[n];
    long long int pos = 0, neg = 0;
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
        if(a[i]>0) pos += a[i];
        else neg += abs(a[i]);
    }
    printf("%lld ", pos);
    if(neg>0) printf("-%lld ", neg);
    else printf("%lld ", neg);
}
