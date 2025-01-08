#include<stdio.h>

int main()
{
    int s;
    scanf("%d",&s);
    int b=s/10,c=s%10;
    if (s%10==0 || b%c==0 || c%b==0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}
