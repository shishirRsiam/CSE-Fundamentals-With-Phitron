#include<stdio.h>

int main()
{
    
    int a;
    scanf("%d",&a);
    int ar[a];
    for (int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }

    int b;
    scanf("%d",&b);
    int br[b];
    for (int i=0;i<b;i++)
    {
        scanf("%d",&br[i]);
    }

    int ans[a+b];

    for (int i=0;i<a;i++)
    {
        ans[i]=ar[i];
    }

    int s=a;
    for (int i=0;i<b;i++)
    {
        ans[s]=br[i];
        s++;
    }



    for (int i=0;i<a+b;i++)
    {
        printf("%d ",ans[i]);
    }

    return 0;
}
