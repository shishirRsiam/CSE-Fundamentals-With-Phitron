#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001],b[1001];
    scanf("%s",a);
    strcpy(b,a);
    int i=0;
    int j=strlen(a)-1;
    while (i<j) {
        char tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
        i++,j--;
    } 
    if(strcmp(a,b)!=0) 
    {
        printf("NO");
    } 
    else 
    {
        printf("YES");
    }
    return 0;
}
