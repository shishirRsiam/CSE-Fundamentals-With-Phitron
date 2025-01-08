#include<stdio.h>

int fanction(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
    }
    else if (n<0)
    {
        n=n*-1;
        printf("%d",n);
    }
}

int main()
{
    
    int n;
    scanf("%d",&n);
    fanction(n);

    return 0;
}
