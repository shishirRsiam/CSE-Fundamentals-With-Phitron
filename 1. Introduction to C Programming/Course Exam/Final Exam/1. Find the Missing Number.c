#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int n, a, b, c;
        scanf("%lld %lld %lld %lld", &n, &a, &b, &c);
        long long int three = a * b * c;
        long long ans = n / three;
        if (ans * a * b * c == n && ans >= 0)
        {
            printf("%lld\n", ans);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
