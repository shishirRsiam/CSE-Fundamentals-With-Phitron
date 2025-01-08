#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int T=0,P=0;
    for (int s=0;s<n;s++)
    {
        int t,b;
        scanf("%d %d",&t,&b);
        if (t>b)
        {
            T++;
        }
        else if (t==b)
        {
            continue;
        }
        else
        {
            P++;
        }
    }
            
        if (P>T)
        {
            printf("Pathan");
        }
        if(T==P)
        {
            printf("Draw");
        }
        else if (T>P)
        {
            printf("Tiger");
        }
    return 0;
}
