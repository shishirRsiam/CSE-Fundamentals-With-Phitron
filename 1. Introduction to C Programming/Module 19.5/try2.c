#include<stdio.h>

int main()
{
    
    int age;
    scanf("%d",&age);
    if (age<=0)
    {
        printf("Age is not valid, setting age to 0");
    }
    if (age<=13)
    {
        printf("You are young\n");
    }
    if (age >= 13)
    {
        printf("You are a teenager\n");
    }
    if (age>=18)
    {
        printf("You are old\n");
    }

    return 0;
}
