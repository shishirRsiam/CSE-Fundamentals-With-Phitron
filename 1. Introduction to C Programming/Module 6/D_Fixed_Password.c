#include<stdio.h>

int main()
{

    int a;
    while (scanf("%d",&a) != EOF)
    {
        // kaaj
        if (a==1999)
        {
            printf("Correct\n");
            break;
        }
        else 
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
