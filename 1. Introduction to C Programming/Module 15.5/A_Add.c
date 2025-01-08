#include<stdio.h>

int function(int a, int b)
{

    int sum=a+b;
    // printf("%d\n",sum);
    return sum;

}

int main()
{
    
    int a,b;
    scanf("%d %d",&a,&b);

    int sum = function(a,b);

    printf("%d",sum);

    return 0;
}
