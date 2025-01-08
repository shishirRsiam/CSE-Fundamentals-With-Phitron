#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    if (n%2==0)
    {
        int min1=n/2-1;
        int mid2=n/2;
        printf("%d %d",a[min1],a[mid2]);
    }
    else 
    {
        int mid=n/2;
        printf("%d",a[mid]);
    }
    return 0;
}
