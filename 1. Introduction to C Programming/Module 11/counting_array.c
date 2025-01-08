#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int one=0,two=0,three=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]==1)
        {
            one++;
        }
        else if (a[i]==2)
        {
            two++;
        }
        else if (a[i]=3)
        {
            three++;
        }
    }

    
    printf("one - %d\n",one);
    printf("two - %d\n",two);
    printf("three - %d\n",three);


    return 0;
}
