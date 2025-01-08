#include <stdio.h>

int main() 
{
    char s;
    scanf("%c",&s);

    if (s>='a'&&s<='z') 
    {
        if (s=='z') 
        {
            printf("a\n");
        } 
        else 
        {
            int ans=s+1;
            printf("%c\n",ans);
        }
    }
    else
    {
        printf("\n");
    }
    
    return 0;
}