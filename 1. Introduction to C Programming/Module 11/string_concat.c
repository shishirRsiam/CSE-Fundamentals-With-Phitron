#include<stdio.h>
#include<string.h>
int main()
{
    
    char a[200],b[100];
    scanf("%s %s",a,b);
    int al=strlen(a),bl=strlen(b);


    // for (int i=0;i<=bl;i++)
    // {
    //     a[al]=b[i];
    //     al++;
    // }

    strcat(a,b);

    printf("%s %s",a,b);
    return 0;
}
