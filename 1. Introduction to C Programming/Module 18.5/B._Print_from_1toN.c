#include<stdio.h>

void recursion(int n)
{
    if (n==0) return;
    recursion(n-1);
    printf("%d\n",n);
}

int main()
{
    
    int n;
    scanf("%d",&n);
    recursion(n);

    return 0;
}
