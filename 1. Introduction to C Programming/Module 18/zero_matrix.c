#include<stdio.h>

int main()
{
    
    int row,col;
    scanf("%d %d",&row,&col);
    int eliment=row*col;
    int a[row][col];

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0;
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if (a[i][j]==0)
            {
                cnt++;
            }
        }
    }
    if (eliment==cnt)
    {
        printf("zero metrix");
    }
    else
    {
        printf("not zero metrix");
    }

    return 0;
}

        // input:
        // 5 3
        // 0 0 0
        // 0 0 0
        // 0 0 0
        // 0 0 0
        // 0 0 0

