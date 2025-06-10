
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 3 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

// int main()
// {
//     int n;
//     scanf("%d",&n);

//         if(n%3==0) printf("YES\n");
//         else printf("NO\n");

//     return 0;
// }