#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[10005]; scanf("%s", &s);

    int i = 0;
    int freq[26] = {0};
    while(s[i] != NULL)
    {
        int idx = s[i] - 'a';
        freq[idx]++;
        i++;
    }

    for(int i=0;i<26;i++)
    {
        if(freq[i] != 0)
        {
            char ch = i + 'a';
            printf("%c - %d\n", ch, freq[i]);
        }
    }

    return 0;
}
