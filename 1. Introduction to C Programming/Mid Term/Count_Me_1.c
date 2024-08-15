#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n; scanf("%d", &n);
    int a[n];
    int x = 0, b = 0;
    for(int i=0;i<n;i++) 
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0) x++;
        else if(a[i]%3==0) b++;
    }
    printf("%d %d", x, b);
    return 0;
}
