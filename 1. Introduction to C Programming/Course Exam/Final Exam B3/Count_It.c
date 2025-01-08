#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001];
    fgets(a,sizeof(a),stdin);
    scanf("%s",a);
    int Capital=0,Small=0,Spaces=0;
    int len=strlen(a);
    for (int i=0;i<len;i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            Small++;
        }
        if (a[i]>='A' && a[i]<='Z')
        {
            Capital++;
        }
        if (a[i]==' ')
        {
            Spaces++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",Capital,Small,Spaces);
    return 0;
}
