// #include <stdio.h>
// int main()
// {
//     int taka;
//     scanf("%d", &taka);
//     if (taka < 1000)
//     {
//         printf("I will buy Punjabi\n\t");
//         if (taka<=1500)
//         {
//             printf("I will buy new shoes\n");
//         }
//         else 
//         {
//             printf("Back to home.");
//         }
//                 if (taka>=15000)
//         {
//             printf("I will go to Cox's Bazar.\n\t\t\t");
//         }
//          else 
//         {
//             printf("Back to home.");
//         }
//         if (taka >= 20000)
//         {
//             printf("I will go to sentmartine.");
//         }
//         else 
//         {
//             printf("Back to home.");
//         }
//     }
//     else if ( taka >=  2000)
//     {
//         printf("I will go to Rangpur.");
//     }
//         else if ( taka >=  500)
//     {
//         printf("I will go to Sindurmati.");
//     }
//     else
//     {
//         printf("Bad luck!");
//     }
// return 0;
// }








#include <stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka > 1000)
    {
        printf("I will buy Punjabi\n");
        if (taka >= 1500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }

    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}
