#include <stdio.h>

void printNumbers(int n) 
{
    char *numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = n; i <= 9; i++) 
    {
        printf("%s\n", numbers[i]);
    }
}

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n <= 9) 
    {
        printNumbers(n);
    }

    if (m > 9) 
    {
        for (int i = 10; i <= m; i++) 
        {
            if (i % 2 == 0) 
            {
                printf("even\n");
            } 
            else 
            {
                printf("odd\n");
            }
        }
    }

    return 0;
}

