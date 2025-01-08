//  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include<stdio.h>
#include<limits.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int a,max=INT_MIN;
    for (int i=1;i<=n;i++)
    {

        scanf("%d",&a);
        if (a>max)
        {
            max=a;
        }

    }
    printf("%d",max);

    return 0;
}
