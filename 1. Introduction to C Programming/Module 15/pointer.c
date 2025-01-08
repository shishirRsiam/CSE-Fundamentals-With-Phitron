#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);

    int * pnt = &n;
    
    printf("n pointer is - %p\n",pnt);
    printf("n pointer is - %p\n",&n);
    printf("pointer ptr Vallue is - %d\n",*pnt);

    *pnt=1500;
    printf("n pointer is - %p\n",pnt);
    printf("pointer ptr Vallue is - %d\n",*pnt);
    printf("pointer size is - %d\n",sizeof(pnt));

    return 0;
}
