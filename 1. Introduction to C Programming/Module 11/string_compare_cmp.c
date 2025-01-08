#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int ab=strcmp(a,b);
    printf("%d\n",ab);
    if (ab<0)
    {
        printf("a choto and b boro.");
    }
    else if (ab>0)
    {
        printf("a boro and b choto.");
    }
    else
    {
        printf("a and b same.");
    }

    return 0;
}
