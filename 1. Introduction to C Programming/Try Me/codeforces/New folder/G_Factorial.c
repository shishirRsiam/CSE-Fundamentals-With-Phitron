// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include<stdio.h>

int main()
{
    
    int a;
    scanf("%d",&a);
    for (int n=0;n<a;n++)
    {
        long long int s;
        long long int result=1;
        scanf("%lld",&s);
        for (int i=1;i<=s;i++)
        {
            result*=i;
        }
        printf("%lld\n",result);
    }

    return 0;
}
