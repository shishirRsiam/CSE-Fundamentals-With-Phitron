#include<stdio.h>

int main()
{
    
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0;
    while(1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("a and b same.");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("a choto and b boro.");
            break;
        }
        else if (b[i]=='\0')
        {
            printf("a boro and a choto.");
            break;
        }

        if (a[i]==b[i])
        {
            i++;
        }
        else if (a[i]>b[i])
        {
            printf("a boro and a choto.");
            break;
        }
        else
        {
            printf("a choto and b boro.");
            break;
        }
    }

    return 0;
}
