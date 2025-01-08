#include<stdio.h>

int main()
{

    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (ar[i]<0)
        {
            ar[i]=2;
        }
        else if (ar[i]>0)
        {
            ar[i]=1;
        }
        else
        {
            ar[i]=0;
        }
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
