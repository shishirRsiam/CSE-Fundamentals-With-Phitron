#include<stdio.h>

int main()
{
    
    // declear 2D array
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// input :  // 5 3
            // 2 6 4 
            // 9 8 4
            // 7 8 1
            // 6 5 2
            // 4 8 9
