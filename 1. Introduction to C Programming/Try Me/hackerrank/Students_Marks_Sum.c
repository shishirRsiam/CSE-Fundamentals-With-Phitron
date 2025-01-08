
#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    getchar();
    char c;
    scanf("%c",&c);

    int numb=0,numg=0;

 
    if (c=='b')
    {
        if (n>=3)
        {
            numb=ar[0] + ar[2];
            printf("%d\n",numb);
        }
        
        else
        {
            printf("0\n");
        }
        
    }
    else if (c=='g')
    {
        if (n>=4)
        {
            numg=ar[1]+ar[3];
            printf("%d",numg);
        }
        else
        {
        printf("0\n");
        }
        
    }
    else 
    {
        printf("0\n");
    }

    return 0;
}
