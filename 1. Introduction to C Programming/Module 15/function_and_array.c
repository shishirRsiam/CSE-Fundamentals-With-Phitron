#include<stdio.h>

void fun(int ar[],int s)
{
    int size=sizeof(ar)/sizeof(int);
    printf("%d\n",size);
    for (int i=0;i<s;i++)
    {
        printf("%d ", ar[i]);
    }

}

int main()
{
    
    int n[5]={10,20,30,40,50};
    int size=sizeof(n)/sizeof(int);
    printf("%d\n",size);
    fun(n,5);


    return 0;
}
