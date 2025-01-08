

#include <stdio.h>

int main() 
{

    int n,k;
    scanf("%d %d",&n,&k);
    
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int a = 1; a <= n; a++) 
    {
        for (int b = a + 1; b <= n; b++) {
            int and_result = a & b;
            int or_result = a | b;
            int xor_result = a ^ b;

            if (and_result > max_and && and_result < k) 
            {
                max_and = and_result;
            }
            if (or_result > max_or && or_result < k) 
            {
                max_or = or_result;
            }
            if (xor_result > max_xor && xor_result < k) 
            {
                max_xor = xor_result;
            }
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);



    return 0;
}

