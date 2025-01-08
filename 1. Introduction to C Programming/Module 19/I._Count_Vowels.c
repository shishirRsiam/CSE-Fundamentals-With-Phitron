#include <stdio.h>

int recursion(char s[],int len)
{
    if (s[len]=='\0') return 0;
    int cnt=recursion(s,len+1);
    if (s[len]>='A' && s[len]<='Z')
    {
        s[len]=s[len]+'a'-'A';
    }
    if (s[len]=='a' || s[len]=='e' || s[len]=='i' || s[len]=='o' || s[len]=='u')
    {
        cnt=cnt+1;
    }
    else 
    {
        cnt+1;
    }
    
    return cnt;
}

int main() 
{
    char c[201];
    
    fgets(c, sizeof(c), stdin);

    int res=recursion(c,0);
    printf("%d",res);
    return 0;
}
