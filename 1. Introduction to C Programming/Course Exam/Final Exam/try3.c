#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int s=5;
    for (int i=0;i<s;i++)
    {
        for (int j=0;j<s;j++)
        {
            printf(" ");
        }
        for (int j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
