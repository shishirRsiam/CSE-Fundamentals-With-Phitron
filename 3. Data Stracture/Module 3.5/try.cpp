#include <stdio.h>

int main()
{
    int i, j, N;
    int count;

    scanf("%d", &N);

    count = N * 2 - 1;

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= count; j++)
        {
            if (i==N || j == i || (j == count - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}