#include<stdio.h>
#include<string.h>

int main()
{

    char a[21],b[21];
    scanf("%s %s",a,b);
    int ab=strcmp(a,b);
    if (ab<0)
    {
        printf("%s",a);
    }
    else if (ab>0)
    {
        printf("%s",b);
    }
    else
    {
        printf("%s",a);
    }
    
    return 0;
}
