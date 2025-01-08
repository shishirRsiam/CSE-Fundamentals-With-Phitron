// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int cnt=0;
    for (int i=2;i<n;i++)
    { 
        if (n%i==0)
        {
            cnt++;
            break;
        }
    }

    if (cnt==0)
    {
            printf("YES");
    }
    else 
    {
            printf("NO");
    }

    return 0;
}
