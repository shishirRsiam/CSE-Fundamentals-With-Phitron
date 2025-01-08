#include<stdio.h>
#include<string.h>

int main()
{
    
    char a[1001];
    scanf("%s",a);

    int i=0;
    int j=strlen(a)-1;

    int flag=0;

    while (i<j)
    {
        if (a[i] != a[j])
        {
            flag=1;
        }
        i++,j--;
    }
    if (flag==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
