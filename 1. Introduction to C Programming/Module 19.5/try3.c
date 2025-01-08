#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int ar=a[i];
                a[i]=a[j];
                a[j]=ar;
            }
        }
    }
    long long int ans=0;
    for(int i=0;i<k;i++)
    {
         if(a[i]>=0)
         {
            ans=ans + a[i];
            continue;
         }

    }
    printf("%lld\n",ans);
    return 0;
}