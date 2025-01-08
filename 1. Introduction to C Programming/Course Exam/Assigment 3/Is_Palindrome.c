#include<stdio.h>
#include<string.h>

int is_palindrome(char c[])
{

    int len=strlen(c);
    int cnt=0;

    int i=0;
    int j=len-1;

    while (i<j)
    {
        if (c[i]!=c[j])
        {
            cnt=1;
        }
        i++,j--;
        
    }
    return cnt;

}
int main()
{ 
    char s[1001];
    scanf("%s",&s);

    int ress = is_palindrome(s);
    if (ress==0)
    {
        printf("Palindrome");
    }
    else 
    {
        printf("Not Palindrome");
    }

    return 0;
}
