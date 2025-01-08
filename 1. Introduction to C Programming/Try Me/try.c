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

    int poss=0,neg=0,zero=0;
    for (int i=0;i<n;i++)
    {
        if (ar[i]==0)
        {
            zero++;
        }
        else if (ar[i]>0)
        {
            poss++;
        }
        else 
        {
            neg++;
        }

    }
    printf("%0.6f\n%0.6f\n%0.6f\n",(float)poss/n,(float)neg/n,(float)zero/n);
    return 0;
}


