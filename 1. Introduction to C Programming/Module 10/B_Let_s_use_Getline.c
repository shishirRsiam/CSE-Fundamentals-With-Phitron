#include<stdio.h>

int main()
{
    
    char s[1000001];
    fgets(s,50,stdin);
    for (int i=0;s[i]!='\\';i++)
    {
        printf("%c",s[i]);
    }

    return 0;
}
