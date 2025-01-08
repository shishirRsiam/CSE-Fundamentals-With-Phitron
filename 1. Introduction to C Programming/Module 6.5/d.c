#include<stdio.h>

int main()
{
    long long int a,b,c,d;
    
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    long long int x=a+b*c,y=a+b-c,z=a-b+c,m=a-b*c,n=a*b+c,o=a*b-c;
    if (x == d)
    {
        printf("YES\n");
    }
    else if (y == d)
    {
        printf("YES\n");
    }
        else if (z == d)
    {
        printf("YES\n");
    }
        else if (m == d)
    {
        printf("YES\n");
    }
    else if (n == d)
    {
        printf("YES\n");
    }
        else if (o == d)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}