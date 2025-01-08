#include<stdio.h>

void funtion(int* a,int* b,int* c)
{
    int ar[]={*a,*b,*c};
    for (int i=0;i<2;i++)
    {
        for (int j=i+1;j<3;j++)
        {
            if (ar[i]>ar[j])
            {
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
    }

    *a=ar[0];
    *b=ar[1];
    *c=ar[2];
    printf("%d\n%d\n%d\n",*a,*b,*c); 
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=a,y=b,z=c;
    funtion(&a,&b,&c);
    printf("\n%d\n%d\n%d\n",x,y,z);

    return 0;
}
