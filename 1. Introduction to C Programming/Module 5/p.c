#include <stdio.h>
int main()

{

    int s;
    scanf("%d",&s);
    int num=s/1000;
    if (num%2==0)
    {
    printf("EVEN\n");
    }
    else
    {
    printf("ODD\n");
    }
    return 0;
}