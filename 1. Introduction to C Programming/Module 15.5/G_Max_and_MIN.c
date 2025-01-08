#include<stdio.h>
#include<limits.h>

void function(int n)
{

    long long int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    long long int min=LONG_MAX,max=LONG_MIN;
    for (int i=0;i<n;i++)
    {
        if (ar[i]<min)
        {
            min=ar[i];
        }
        if (ar[i]>max)
        {
            max=ar[i];
        }
    }

    printf("%lld %lld",min,max);

}

int main()
{
    
    int n;
    scanf("%d",&n);
    function(n);


    return 0;
}
