#include<stdio.h>

int main()
{
     
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {

        int m,mm,d;
        {
            scanf("%d %d %d",&m,&mm,&d);
        }

        int md=m*d,mmm=mm+m,mmmd=md/mmm,netd=d-mmmd;
        printf("%d\n",netd);

    }

    return 0;
}

