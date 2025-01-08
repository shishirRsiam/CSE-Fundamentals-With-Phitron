#include <stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
if (a%b || b%a)
{
    printf("Multiples");
}
else 
{
    printf("No Multiples");
}

    return 0;
}