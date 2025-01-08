#include<stdio.h>
#include<string.h>

int main()
{ 
    char s[1001];
    scanf("%s",s);
    int flag=0;
    for (int i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        if (s[i] != s[j])
        {
            flag=1;
        }
    }
    if (flag==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
