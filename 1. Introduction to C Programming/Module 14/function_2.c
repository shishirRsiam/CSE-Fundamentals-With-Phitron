#include<stdio.h>

int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}

int main()
{
    
    // printf("%d\n",sum());
    int s=sum();
    printf("%d\n",s);
    

    return 0;
}
