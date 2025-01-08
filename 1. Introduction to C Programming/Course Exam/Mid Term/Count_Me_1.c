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
    int vall2=0,vall3=0;
    for (int i=0;i<n;i++)
    {
        if(ar[i]%2==0 && ar[i]%3==0)
        {
            vall2++;
        }
        else if (ar[i]%2==0)
        {
            vall2++;
        }
        else if (ar[i]%3==0)
        {
            vall3++;
        }
    }
    printf("%d %d",vall2,vall3);

    return 0;
}
