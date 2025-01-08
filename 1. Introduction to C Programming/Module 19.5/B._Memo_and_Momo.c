#include<stdio.h>

int main()
{
    long long int a,b,s;
    scanf("%lld %lld %lld",&a,&b,&s);
    if (a%s==0 && b%s==0)
    {
        printf("Both");
    }
    else if (a%s==0)
    {
        printf("Memo");
    }
    else if (b%s==0)
    {
        printf("Momo");
    }
    else 
    {
        printf("No One");
    }
    return 0;
}
