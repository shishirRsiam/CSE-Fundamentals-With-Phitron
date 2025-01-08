#include<stdio.h>
#include<string.h>

int lenth(char a[],int i)
{
    if (a[i]=='\0') return 0;
    int len=lenth(a,i+1);
    return len+1;
}

int main()
{
    char a[100];
    
    scanf("%s",a);
    int len=lenth(a,0);
    printf("%d",len);

    return 0;
}
