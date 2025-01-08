#include<stdio.h>
 
int main()
{
    
    int rc;
    scanf("%d",&rc);
 
    int a[rc][rc];
    for (int i=0;i<rc;i++)
    {
        for (int j=0;j<rc;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int primary_sum=0;
    int secondary_sum=0;
    for (int i=0;i<rc;i++)
    {
        for (int j=0;j<rc;j++)
        {
            if (i==j)
            {
                primary_sum=primary_sum+a[i][j];
            }
            if(i+j==rc-1)
            {
                secondary_sum=secondary_sum+a[i][j];
            }
        }
    }

    printf("%d",abs(primary_sum-secondary_sum));
 
    return 0;
}