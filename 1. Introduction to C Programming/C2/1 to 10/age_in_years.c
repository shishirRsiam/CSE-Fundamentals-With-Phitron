#include<stdio.h>

int main()
{
    int age;
    scanf("%d", &age);
    if (age < 2)
    {
        printf("Infant");
    }
    else if (age >= 2 && age < 10)
    {
        printf("Child");
    }
    else if (age >= 10 && age < 20)
    {
        printf("Teenage");
    }
    else if (age >= 20 && age < 30)
    {
        printf("Adult");
    }
    else
    {
        printf("Old");
    }
    return 0;
}
