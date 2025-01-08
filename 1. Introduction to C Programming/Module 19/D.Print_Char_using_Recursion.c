#include<stdio.h>

void recursion(char n[],int i)
{
    if (n[i]=='\0') return;
    printf("%c ",n[i]);
    recursion(n,i+1);
}

int main()
{
    int test;
    scanf("%d",&test);
    for (int i=0;i<test;i++)
    {
    char n[12];
    scanf("%s",n);
    recursion(n,0);
    printf("\n");
    }

    return 0;
}

        // Input
        // 3
        // 121
        // 39
        // 123456