#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int k=1;
    int line=6;
    int dev=n/2;
    int newline=line+dev;
    for (int i=0;i<newline;i++)
    {
        for (int j=0;j<line+dev-1;j++)
        {
            printf(" ");
        }
        for (int j=0;j<k;j++)
        {
            printf("*");
        }
        printf("\n");
        k=k+2;
        line=line-1;
    }
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
