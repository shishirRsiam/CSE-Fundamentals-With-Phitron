#include<stdio.h>

void function(int n)
{
    int cnt=1;
    for (int i=2;i<n;i++)
    { 
        if (n%i==0)
        {
            cnt++;
            break;
        }
    }
 
    if (cnt==0)
    {
            printf("YES\n");
    }
    else 
    {
            printf("NO\n");
    }
}

int main()
{
    
    int n;
    scanf("%d",&n);
    if (n%2==1)
    {
        printf("YES\n");
        for (int i=1;i<n;i++)
        function(n);
    }
    

    return 0;
}
