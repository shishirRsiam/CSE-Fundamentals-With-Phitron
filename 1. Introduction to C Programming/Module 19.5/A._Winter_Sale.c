#include<stdio.h>

int main()
{
    float x,p;
    scanf("%f %f",&x,&p);

    float discount_percent=100-x; //koto percent discount paichi..
    // printf("%f\n",discount_percent);
    float one_percent_price=p/discount_percent; // 1% er daam koto?
    // printf("%f\n",one_percent_price);
    float main_price=one_percent_price*100; //100% er daam koto..

    printf("%0.2f",main_price);

    return 0;
}
