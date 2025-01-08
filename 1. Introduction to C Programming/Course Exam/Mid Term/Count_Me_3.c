#include<stdio.h>
#include<string.h>

int main()
{

    int n;
    scanf("%d",&n);
    for (int m=0;m<n;m++)
    {
        char s[10001];
        scanf("%s",s);
        int sl=strlen(s), A=0,a=0,num=0;
        for (int i=0;i<sl;i++)
        {
            char si=s[i];
            if (si>='A' && si<='Z')
            {
                A++;
            }
            else if (si>='a' && si<='z')
            {
                a++;
            }
            else
            {
                num++;
            }
        }
        printf("%d %d %d\n",A,a,num);
    }

    return 0;
}
