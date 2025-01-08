
#include <stdio.h>
int main()
{
    long long int a, b, c, min;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a < b && a < c)
    {
        min = a;
    }
    else if (b < a && b < c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    long long int sub1 = a - min;
    long long int sub2 = b - min;
    long long sub3 = c - min;
    long long sub4 = sub1 / 2;
    long long sub5 = sub3 / 2;
    
    if (sub4 <= sub5 || sub4 <= sub3)
    {
        long long div1 = sub1 / 2;
        long long result1 = min + div1;
        printf("%lld\n", result1);
    }
    else
    {
        printf("%lld", c);
    }

    return 0;
}