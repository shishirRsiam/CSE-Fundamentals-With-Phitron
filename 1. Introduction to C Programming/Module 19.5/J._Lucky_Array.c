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
    long long min=LLONG_MAX;
    for (int i=0;i<n;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    long long int cnt=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]==min)
        {
            cnt++;
        }
    }
    if (cnt%2==1)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }
    return 0;
}
