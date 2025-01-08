#include<stdio.h>

void fun (int n)
{
    printf("fun n er adress - %p\n",&n);
    n=200; // if n=200 na dei, tahole n er maan main n theke nibe..
    printf("fun n er vallue - %d\n",n);
}

int main()
{
    
    int n=10;
    printf("main n er adress - %p\n",&n);
    printf("main n er vallue - %d\n",n);
    fun(n);

    return 0;
}
