#include<stdio.h>
#include<math.h>

int main()
{
    
    double x;
    scanf("%lf",&x);

    // int ans=ceil(x);
    // int ans=floor(x);
    int ans=round(x);

    printf("%d",ans);

    return 0;
}
