#include<stdio.h>

int main()
{
    
    int n=10;
    printf("%p\n",&n);
    int* adress=&n;
    printf("%p\n",adress);
    printf("%d\n",*adress);
    printf("%d\n",n);

    *adress=500;
    printf("%d\n",n);


    return 0;
}
