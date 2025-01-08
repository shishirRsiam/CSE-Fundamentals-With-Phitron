#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n); // iput 5
    int ar[n+1];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int i=0,j=n-1;
    while (i<j)
    {
        int tmp=ar[i];
        ar[i]=ar[j],ar[j]=tmp;
        i++,j--;
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}
