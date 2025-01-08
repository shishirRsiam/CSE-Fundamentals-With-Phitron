#include<stdio.h>

int main()
{
    
    char a[6];
    for (int i=0;i<6;i++)
    {
        scanf("%c",&a[i]);
    }
    printf("%d\n",sizeof(a));
    for (int i=0;i<6;i++)
    {
        printf("%c",a[i]);
    }



    return 0;
}
