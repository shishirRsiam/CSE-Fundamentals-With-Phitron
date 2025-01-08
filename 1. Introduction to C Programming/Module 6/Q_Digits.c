#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    for (int a=1;a<=t;a++)
    {

        int n;
        scanf("%d",&n);
        do
        {
            printf("%d ",n%10);
            n=n/10;
        }
        while (n!=0);
        printf("\n");
    }
    
    return 0;
}