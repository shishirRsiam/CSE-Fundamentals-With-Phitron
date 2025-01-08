#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int cnt[m+1];

    for (int i=0;i<=m;i++)
    {
        cnt[i]=0;
    }

    for (int i=0;i<n;i++)
    {
        int vall;
        scanf("%d",&vall);
        cnt[vall]++;
    }

    for (int i=1;i<=m;i++)
    {
        printf("%d\n",cnt[i]);
    }

    return 0;
}
