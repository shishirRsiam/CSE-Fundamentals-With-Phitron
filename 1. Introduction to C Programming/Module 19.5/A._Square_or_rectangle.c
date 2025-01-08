#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        if (a==b)
        {
            printf("Square\n");
        }
        else 
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}
