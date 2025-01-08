#include <stdio.h>

int main() 
{
    char s;
    scanf("%c",&s);
    // if (s>=97 && s<=112)
    if (s>='a' && s<='z') 
    {
        int ans=s-32;
        printf("%c\n",ans);
    } 
    else
    {
        int ans=s+32;
        printf("%c\n",ans);
    } 

    return 0;
}
