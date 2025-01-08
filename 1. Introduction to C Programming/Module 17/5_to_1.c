#include<stdio.h>

void fun(int n)
{
    if (n==100) return;
    fun(n+1);
    printf("%d\n",n);
}

int main()
{
    
    int n;
    scanf("%d",&n);
    fun(n);


    return 0;
}
