#include<stdio.h>

int main()
{
    
    int row,coll;
    scanf("%d %d",&row,&coll);

    int a[row][coll];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<coll;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<coll;j++)
        {
            printf("a[%d] ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int Row,Coll;
    scanf("%d %d",&Row,&Coll);

    for (int i=0;i<row;i++)
    {
        printf("%d ",a[i][Row]);
    }   

    printf("\n\n");  

    for (int i=0;i<Coll;i++)
    {
        printf("a[%d] ",a[Coll][i]);
    }

    return 0;
}


        // Input::
        // 5 3
        // 2 6 4 
        // 9 8 4
        // 7 8 1
        // 6 5 2
        // 4 8 9
        // 2 3