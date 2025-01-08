#include<stdio.h>
#include<string.h>

int main()
{
    
    char s[1001];
    scanf("%s",s);
    char t[1001];
    scanf("%s",t);
    int lns=strlen(s),lnt=strlen(t);
    printf("%d %d\n%s %s",lns,lnt,s,t);

    return 0;
}
