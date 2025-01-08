#include<stdio.h>

int x=10;

void fun(void)
{

    int n;
    scanf("%d",&n);
    printf("You Enterd - %d\n",n);
    int ans = n+n-x;
    printf("Your Ans is - %d\n",ans);

}

int main()
{
    printf("X Vallue id - %d\n",x);
    fun();
    fun();
    fun();

    return 0;
}
