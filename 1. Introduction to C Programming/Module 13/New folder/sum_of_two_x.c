#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x,y;
    scanf("%d",&x,&y);
    int flag=0;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (x==ar[i]+ar[j] || y==ar[i]+ar[j])
            {
                flag = 1;
            }
        }
    }
    
    if (flag == 1)
    {
        printf("YES\n");
        
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}


// input 
// 5
// 9 8 4 1 5
// 100 9
// 8+1=9
// NO print hocche. YES print houyar kotha! 
