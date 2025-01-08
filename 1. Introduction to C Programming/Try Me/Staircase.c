#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {

        for (int a=1;a<=n-i;a++)
        {
            printf(" ");
        }
        for (int b=1;b<=i;b++)
        {
            printf("#");
        }
        printf("\n");

    }

    return 0;
}
