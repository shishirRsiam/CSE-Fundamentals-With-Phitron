#include<stdio.h>
#include<string.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {   
        char a[101];
        scanf("%s",a);
        int len=strlen(a),nlen=len-2;
        char one=a[0],last=a[len-1];
        if(len<=10)
        {
            printf("%s\n",a);
        }
        else
        {
            printf("%c%d%c\n",one,nlen,last);
        }
    }

    return 0;
}
