#include<stdio.h>
#include<string.h>

int main()
{
    
    char a[1000001];
    // scanf("%s",a);
    fgets(a,1000001,stdin);
    int ln=strlen(a);
    for (int i=0;i<=ln;i++)
    {
        if (a[i]==',')
        {
            a[i]=' ';
        }
        if (a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else if (a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
    return 0;
}
