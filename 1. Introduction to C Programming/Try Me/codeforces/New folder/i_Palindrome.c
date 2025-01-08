#include<stdio.h>
#include<string.h>

int main()
{
    int n[1000001];
    scanf("%s",n);
    int a=0,b=strlen(n)-1,cnt=0;

    for(int i=b;i>=0;i--)
    {
        if (n[i]!='0')
        { 
        printf("%c",n[i]);
        }
    }

    while (a<b)
    {
        if (n[a]!=n[b])
        {
            cnt++;
            break;
        }
        a++,b--;
        
    }

    if (cnt == 0)
    {
        printf("\nYES");
    }
    else 
    {
        printf("\nNO");
    }



    return 0;
}
