#include<stdio.h>

void recursion(int n)
{
    if (n==0) return;
    printf("%d",n);
    if (n>1)
    {
        printf(" ");
    }
    recursion(n-1);
}

int main()
{
    
    int n;
    scanf("%d",&n);
    recursion(n);


    return 0;
}
