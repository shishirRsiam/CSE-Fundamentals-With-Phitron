#include<stdio.h>

int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for (int i=0;i<n-1;i++)
    {
       for (int j=i+1;j<n;j++)
       {
            if (a[i]<a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
       }
    }
    long long int ans=0;
    for (int i=0;i<m;i++)
    {
        if (a[i]>=0)
        {
            ans+=a[i];
            continue;
        }
    }
    printf("%lld",ans);
    return 0;
}
