#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("-1\n");
    }
    else 
    {
        for(int s=1;s<=n;s=s+1)
        {
            if(s%2==0)
            {
                printf("%d\n",s);
            }
        }
    }
    return 0;
}