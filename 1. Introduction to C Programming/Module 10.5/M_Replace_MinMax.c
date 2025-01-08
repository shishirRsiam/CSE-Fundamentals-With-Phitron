#include<stdio.h>
#include<limits.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int mn=INT_MAX,mx=INT_MIN;
    int min=0,max=0;
    for (int i=0;i<n;i++)
    {
        if (mn>a[i])
        {
            mn=a[i];
            min=i;
        }
    }
    for (int i=0;i<n;i++)
    {
        if (mx<a[i])
        {
            mx=a[i];
            max=i;
        }
    }

    int tmp=a[min];
    a[min]=a[max],a[max]=tmp;

    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
