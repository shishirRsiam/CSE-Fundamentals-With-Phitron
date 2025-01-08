#include<stdio.h>
#include<string.h>

int main()
{

    char a[100];
    scanf("%s",a);
    int cnt[26]={0};
    int al=strlen(a);
    for (int i=0;i<al;i++)
    {
        int vall=a[i]-'a';
        cnt[vall]++;
    }


    // for (int i=0;i<26;i++)
    // {
    //     if (cnt[i]!=0)
    //     {
    //         printf("%c : %d\n",i+'a',cnt[i]);
    //     }
    // }

    for (int i=0;i<al;i++)
    {
        int vall=a[i]-'a';
        if (cnt[vall]!=0)
        {
            printf("%c - %d\n",vall+'a',cnt[vall]);
        }
        cnt[vall]=0;
    }

    return 0;
}
