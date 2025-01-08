#include<stdio.h>

int main()
{

    int a;
    int even=0,odd=0,neg=0,poss=0;
    int s;
    scanf("%d",&s);
    for(a=1;a<=s;a=a+1)
    {
        int  r;
        scanf("%d",&r);
        // kaaj
        if (r%2==0)
        {
            // even
            even++;
        }
        else 
        {
            // odd
            odd++;
        }
        if(r>0)
        {
            // positive
            poss++;
        }

        else if (r<0)
        {
            // negetive
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,poss,neg);
    
    return 0;
}
