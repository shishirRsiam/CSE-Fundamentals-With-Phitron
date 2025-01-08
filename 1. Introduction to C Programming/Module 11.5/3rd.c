#include<stdio.h>

int main()
{
    char b;
    int cnt[26]={0};
    while(scanf("%c",&b)!= EOF)
    {
        cnt[b - 'a']++;
    }
    for (int i=0;i<26;i++)
    {
        if (cnt[i]>0)
        {
            printf("%c : %d\n",i+'a',cnt[i]);
        }
    }
    return 0;
}
