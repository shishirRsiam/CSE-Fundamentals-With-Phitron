#include <stdio.h>

void function(int number)
{
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
        printf("%d", result);
        
        if (i<number)
        {
            printf(" ");
        }
        result++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    function(n);

    return 0;
}
