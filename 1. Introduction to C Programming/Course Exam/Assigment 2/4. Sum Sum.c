#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int poss = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] >= 0)
        {
            poss = poss + ar[i];
        }
        else
        {
            neg = neg + ar[i];
        }
    }
    printf("%d %d", poss, neg);
    return 0;
}
