// https://www.hackerrank.com/challenges/too-high-boxes/problem?isFullScreen=true

#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int len,wid,hig;
    for (int i=0;i<n;i++)
    {
        scanf("%d %d %d",&len,&wid,&hig);
        if (hig<41)
        {
            printf("%d\n",len*wid*hig);
        }

    }

    return 0;
}
