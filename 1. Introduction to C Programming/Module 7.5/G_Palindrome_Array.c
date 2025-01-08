#include<stdio.h>

int main()
{
    
    int n;
    long long int ss;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        ss=ar[i];
    }
    long long int s;
    for (int i=n-1;i>=0;i--)
    {
        scanf("%d ",&ar[i]);
        s=ar[i];
    }
    if (s==ss)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}
