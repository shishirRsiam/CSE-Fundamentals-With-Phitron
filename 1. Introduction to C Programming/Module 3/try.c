// #include <stdio.h> 
// int main ()
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         printf("I,m Sorry %d\n",i);
//     }

// return 0;

// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i < 3) {
//         i++;
//     }
//    printf("%d",i);
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0, i;
//     for (i = 0;i < 5; i++)
//     {
//         printf("%d",i);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0, i;
//     for (i = 0;i < 5; i++)
//     {
//         a++;
//         continue;
//     }
//     printf("%d %d",i,a);
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main() {

//     int i;
//     int n;
//     scanf("%d",&n);
//     for (i=1;i<=n;i++)
//     {
//         if (i%5==0)
//         {
//             printf("%d Yes\n",i);
//         }
//         else 
//         {
//             printf("%d No\n",i);
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int a;
    long long int b;
    double d;
    char c;
    scanf("%d lld% %lf %c",&a,&b,&d,&c);
    printf("%d\n%lld\n%0.2lf\n%c",a,b,c,d);
    return 0;
}