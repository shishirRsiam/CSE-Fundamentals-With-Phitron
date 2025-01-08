// https://www.hackerrank.com/challenges/arrays-ds/problem

#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int a=0;a<n;a++)
    {
        scanf("%d",&ar[a]);
    }
    for (int a=n-1;a>=0;a--)
    {
        printf("%d ",ar[a]);
    }
    

    return 0;
}
