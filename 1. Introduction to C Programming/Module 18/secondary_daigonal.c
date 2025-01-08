#include<stdio.h>

int main()
{
    
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    int flag=0;

    if (row != col)
    {
        flag=1;
    }

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if (i+j==row-1)
            {
                continue;
            }
            if (a[i][j]!=0)
            {
                flag=1;
            }
        }
    }

    if (flag==0)
    {
        printf("Secondary Daigonal");
    }
    else 
    {
        printf("Not Daigonal");
    }

    return 0;
}


        // Input
        // 3 3
        // 0 0 1
        // 0 1 0
        // 1 0 0