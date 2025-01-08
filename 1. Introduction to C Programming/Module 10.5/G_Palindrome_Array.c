#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    scanf("%s",&s);

    int i=0,j=strlen(s)-1;
    int flag=1;
    while (i<j)
    {
        if (s[i]!=s[j])
        {
            flag =0;
            break;
        }
        i++;
        j--;
    } 
    if (flag==1)
    {
        printf("NO");
    }
    else 
    {
        printf("YES");
    }
    
    return 0;
}
