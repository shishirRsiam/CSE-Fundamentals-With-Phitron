#include<stdio.h>

    // return type name (prameter)
    // {
    //     code 
    //     return what?
    // }

    int sum(int x,int y)
    {
        int sum=x+y;
        return sum; 
    }

int main()
{
    
    int s=0;
    printf("%d\n",sum(10,20));
    printf("%d\n",sum(100,200));

    return 0;
}
