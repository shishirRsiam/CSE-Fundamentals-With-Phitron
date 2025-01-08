#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d ",&ar[i]);
    }

    for (int i=0;i<n-1;i++)
    {

        for (int j=i+1;j<n;j++)
        {
            if (ar[i]>ar[j])
            {
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
            
        }

    }

    for (int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}
