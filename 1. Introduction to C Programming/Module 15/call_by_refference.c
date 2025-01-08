#include<stdio.h>

void fun (int *p)
{
    printf("p er vallue - %d\n",*p);
    printf("p er adress - %p\n\n",p);
    int x;
    scanf("%d",&x);
    *p=x;
    printf("p er vallue - %d\n",*p);
    printf("p er adress - %p\n\n",p);
}

int main()
{
    
    int n=10;
    printf("n er vallue - %d\n",n);
    printf("n er adress - %p\n\n",&n);
    
    fun(&n);
    printf("n er vallue - %d\n",n);
    printf("n er adress - %p\n\n",&n);

    fun(&n);
    printf("n er vallue - %d\n",n);
    printf("n er adress - %p\n\n",&n);

    return 0;
}
