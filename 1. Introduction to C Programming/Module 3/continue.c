#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i+=1)
{
    if(i==5)
        {
            continue;
        }
    printf("%d\n",i);
}

    return 0;
}