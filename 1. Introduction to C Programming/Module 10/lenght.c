#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%s",&a);
    printf("%s\n",a);


    // int ln=0;

    // for (int i=0;a[i]!='\0';i++)
    // {
    //     ln++;
    // }

    // int i=0;
    // while(a[i]!='\0')
    // {
    //     ln++;
    //     i++;
    // }

    int ln=strlen(a);
    printf("%d",ln);
    return 0;
}
