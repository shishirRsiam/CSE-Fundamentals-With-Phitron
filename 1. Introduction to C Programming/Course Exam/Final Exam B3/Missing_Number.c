#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        int net_sum,a,b,c;
        scanf("%d %d %d %d",&net_sum,&a,&b,&c);
        int three_num_sum=a+b+c;
        int ans=net_sum-three_num_sum;
        printf("%d\n",ans);
    }
    return 0;
}
