#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int min_idx=0,max_idx=0;
    int max=INT_MIN, min=INT_MAX;
    for (int i=0;i<n;i++)
    {
        if (min>ar[i])
        {
            min=min_idx;
        }
    }
    for (int i=0;i<n;i++)
    {
        if (max<ar[i])
        {
            max=max_idx;
        }
    }


    int temp=min_idx;
    ar[min_idx]=max_idx,ar[max_idx]=temp;


    for (int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}
