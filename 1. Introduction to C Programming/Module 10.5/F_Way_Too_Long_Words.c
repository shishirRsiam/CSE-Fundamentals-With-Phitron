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
        int net_len=strlen(a),len=net_len-2;
        char one=a[0],last=a[net_len-1];
        if (net_len<=10)
        {
            printf("%s\n",a);
        }
        else
        {
            printf("%c%d%c\n",one,len,last);
        }


    }

    return 0;
}
