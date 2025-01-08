#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 5000)
    {
        printf("I will go to Dhaka.\n\t");
        if (taka>=10000)
        {
            printf("I will go to Ranggamati.\n\t\t");
        }
        else 
        {
            printf("Back to home.");
        }
                if (taka>=15000)
        {
            printf("I will go to Cox's Bazar.\n\t\t\t");
        }
         else 
        {
            printf("Back to home.");
        }
        if (taka >= 20000)
        {
            printf("I will go to sentmartine.");
        }
        else 
        {
            printf("Back to home.");
        }
    }
    else if ( taka >=  2000)
    {
        printf("I will go to Rangpur.");
    }
        else if ( taka >=  500)
    {
        printf("I will go to Sindurmati.");
    }
    else
    {
        printf("I don't go any where.");
    }
return 0;
}