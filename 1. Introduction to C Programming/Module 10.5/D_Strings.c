#include<stdio.h>
#include<string.h>

int main()
{
    
    char a[11],b[11];
    scanf("%s %s",a,b);

    int ln=strlen(a),ln2=strlen(b);
    printf("%d %d\n",ln,ln2);

    printf("%s%s\n",a,b);

    int i=a[0];
    a[0]=b[0],b[0]=i;
    printf("%s %s",a,b);

    return 0;
}
