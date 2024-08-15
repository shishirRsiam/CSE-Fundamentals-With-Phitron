#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int isVowel(char ch) 
{
    ch = tolower(ch);
    if (ch == NULL || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 0;
    else return 1;
}

int main() 
{
    char s[100005]; scanf("%s", &s);

    int i = 0, ans = 0;
    while(s[i] != NULL)
    {
        if(isVowel(s[i])==1) ans++;
        i++;
    }
    printf("%d", ans);

    return 0;
}
