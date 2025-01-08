#include<stdio.h>

// void recursion(int a[],int n,int i)
// {
//     printf("%d ",a[i]);
//     recursion(a,n,i+1);
// }

int main()
{ 
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // recursion(a,n,0);
    return 0;
}
