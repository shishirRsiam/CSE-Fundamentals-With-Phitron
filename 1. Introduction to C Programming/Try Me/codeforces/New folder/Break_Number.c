//  https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F

#include<stdio.h>
#include<limits.h>

int main()
{
    
    int humm;
    scanf("%d",&humm);
    int max=INT_MIN;
    for (int i=0;i<humm;i++)
    {
        
        long long int n;
        scanf("%lld",&n);
        int cnt=0;
        while (n%2==0)
        {
            cnt++;
            n=n/2;
        }
        if (max<cnt)
        {
            max=cnt;
        }
    }
    printf("%d",max);
    return 0;
}
