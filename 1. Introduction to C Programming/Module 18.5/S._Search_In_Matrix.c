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

    int scr;
    scanf("%d",&scr);

    int flag=0;

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if (scr == a[i][j])
            {
                flag=1;
            }
        }
    }

    if (flag==0)
    {
        printf("will take number");
    }
    else 
    {
        printf("will not take number");
    }

    return 0;
}
