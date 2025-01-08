#include <stdio.h> 
int main()

{
    int taka;
    scanf("%d",&taka);

    if (taka >= 100)
    {
        printf("I will go to your home.");
    }

    else if (taka >= 80)
    {
        printf("I'm trying to go.");
    }

    else if (taka >= 50)
    {
        printf("Give me some money. Then I will go.");
    }
    
    else 
    {
        printf("I don't go. Thank  you.");
    }

    return 0;

}