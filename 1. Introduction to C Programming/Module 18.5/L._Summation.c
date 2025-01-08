#include <stdio.h>
 
long long int recursion(int a[],int n,int i)
{
    if (i == n) return 0;
    long long int sum = a[i] + recursion(a,n,i+1); 
    return sum;
}
 
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    long long int sum = recursion(a,n,0);
    printf("%lld", sum);
    return 0;
}