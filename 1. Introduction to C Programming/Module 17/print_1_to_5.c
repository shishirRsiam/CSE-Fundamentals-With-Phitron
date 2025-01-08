#include<stdio.h>
void fun(int a)
{
    printf("%d\n",a);
    if (a==1) return; // Base Case
    fun(a-1);
}
int main()
{
    int n,m;
    scanf("%d",&n);
    fun(n);
    return 0;
}
