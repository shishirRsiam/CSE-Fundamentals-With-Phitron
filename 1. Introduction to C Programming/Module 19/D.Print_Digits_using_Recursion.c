#include<stdio.h>

void recursion(int n)
{
    if (n==0) return;
    int dev=n%10;
    recursion(n/10);
    printf("%d ",dev);
}

int main()
{  
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        recursion(n);
        if (n==0)
        {
            printf("%d",n);
        }
        printf("\n");
    }

    return 0;
}

// Input
// 3
// 121
// 39
// 123456