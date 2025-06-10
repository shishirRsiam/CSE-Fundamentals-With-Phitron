#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int s = 0; s < n; s++)
    {
        int t;
        scanf("%d", &t);
        char a[100001];
        scanf("%s", a);
        int ln = strlen(a);
        int Tiger = 0, Pathan = 0;
        for (int i = 0; i < ln; i++)
        {
            if (a[i] == 'T')
            {
                Tiger++;
            }
            if (a[i] == 'P')
            {
                Pathan++;
            }
        }
        if (Tiger == Pathan)
        {
            printf("Draw\n");
        }
        if (Pathan > Tiger)
        {
            printf("Pathaan\n");
        }
        if (Tiger > Pathan)
        {
            printf("Tiger\n");
        }
    }
    return 0;
}
