#include<stdio.h>
 
void function(int n)
{
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
}
 
int main()
{
    
    long long int n;
    scanf("%lld",&n);
    function(n);
 
    return 0;
}