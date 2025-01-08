#include <stdio.h>

int main() 
{
    char s;
    scanf("%c",&s);
    // if (s>=48 && s<=57)
    if (s>='0' && s<='9') 
    {
        printf("IS DIGIT");
    }
 
    else
    {
        printf("ALPHA\n");
        if(s>='a' && s<='z')
        {
        printf("IS SMALL\n");
        }
        else
        {
        printf("IS CAPITAL\n");
        }
    } 

    return 0;
}
