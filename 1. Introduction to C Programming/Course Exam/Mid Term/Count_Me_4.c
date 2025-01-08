#include<stdio.h>
#include<string.h>

int main()
{
    
    char a[10001];
    scanf("%s",a);

    int al=strlen(a),cnt[26]={0};
    for (int i=0;i<al;i++)
    {
       int vall=a[i]-'a';
       cnt[vall]++;
    }
    for (int i=0;i<26;i++)
    {
        if (cnt[i]!=0)
        {
            printf("%c - %d\n",i+'a',cnt[i]);
        }
    }

    return 0;
}
