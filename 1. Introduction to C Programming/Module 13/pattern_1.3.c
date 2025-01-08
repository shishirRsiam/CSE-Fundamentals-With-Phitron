#include<stdio.h>
#include<string.h>

int main()
{
    
    int n,m=1;
    scanf("%d\n",&n);
    // getchar();
    char a[100];
    fgets(a,sizeof(a),stdin);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            printf("*");
        }
        // printf(" ");
        // for (int j=0;j<strlen(a)-1;j++)
        // {
        //     printf("%c",a[j]);
        // }
        // printf(" ");
        printf(" %s ",a);
        for (int k=n;k>=m;k--)
        {
            printf("*");
        }
        printf("\n");
        m++;
    }

    return 0;
}
