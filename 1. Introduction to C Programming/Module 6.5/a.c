#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int x = a - b;
    if (x<=0)
    {
        printf("0");
    }
    else 
    {
        printf("%d",x);
    }
    return 0;
}
