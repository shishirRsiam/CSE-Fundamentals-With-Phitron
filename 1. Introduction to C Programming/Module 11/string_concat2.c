#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[200];
    scanf("%s %s",a,b);
    int al=strlen(a),bl=strlen(b);
    for (int i=0;i<4;i++)
    {
        a[al]=b[i];
        al++;
    }
    a[al]='\0';
    printf("%s %s",a,b);
    return 0;
}
