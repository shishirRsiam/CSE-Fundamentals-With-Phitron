#include<stdio.h>

int main()
{
    
    int n[5]={10,20,30,40,50};

    // printf("0th n er adress - %p\n",&n[0]);
    // printf("0th n er adress - %p\n",&n);

    // printf("0th n er vallue - %d\n",n[0]);
    // printf("0th n er vallue - %d\n",*n);  

    printf("1th n er vallue - %d\n",n[1]);
    printf("1th n er vallue - %d\n",*(n+1));  
    printf("1th n er vallue - %d\n",1[n]);
    printf("1th n er vallue - %d\n",*(n+1));  

    return 0;
}
