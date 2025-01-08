//  https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem


#include<stdio.h>

int main()
{
    
    int n,m;
    scanf("%d %d",&n,&m);
    int and=0,or=0,xor=0;
    for (int i=1;i<=n;i++)
    {
        for (int s = i + 1; s <= n; s++)


        {
            int and_re=i&s,or_re=i|s,xor_re=i^s;
            
            if (and_re>and && and_re<m)
            {
                and=and_re;
            }
            if (or_re>or && or_re<m)
            {
                or=or_re;
            }
            if (xor_re>xor && xor_re<m)
            {
                xor=xor_re;
            }
        }
        
    }
    printf("%d\n%d\n%d\n",and,or,xor);
    return 0;
}
