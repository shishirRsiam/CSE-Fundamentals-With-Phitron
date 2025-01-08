#include<stdio.h>

int main()
{
    
    // char a[6]={'S','i','s','h','i','r'};
    char a[7]="Sishir";
    // for(int i=0;i<6;i++)
    // {
    //     printf("%c",a[i]);
    // }


    int size=sizeof(a)/sizeof(char);
    printf("%d\n",size);
    printf("%s",a);
    return 0;
}
