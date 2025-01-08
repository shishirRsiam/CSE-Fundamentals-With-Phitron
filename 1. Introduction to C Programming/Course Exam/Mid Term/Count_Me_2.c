#include<stdio.h>
#include<string.h>

int main()
{
    
    char a[100001];
    scanf("%s",a);
    int al=strlen(a),cnt=0;
    for (int i=0;i<al;i++)
    {
        char ai=a[i];
        if (ai!='a' && ai!='e' && ai!='i' && ai!='o' && ai!='u')
        {
            // printf("Not Voule: %c\n",ai);
            cnt++;
        }
        // else 
        // {
        //     printf("Voule :%c\n",ai);
        // }
    }

    printf("%d",cnt);

    return 0;
}
