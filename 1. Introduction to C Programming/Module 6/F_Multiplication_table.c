#include<stdio.h>

int main()
{
    int s;
    scanf("%d",&s);
    for(int i=1;i<=12;i++)
    {
        printf("%d * %d = %d\n",s,i,s*i);
    }

    return 0;
}
