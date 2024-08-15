#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void testcase() 
{
    int a,b,c; scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", c - ((a*c) / (a+b)));
}

int main() 
{
    int t; scanf("%d", &t);
    while(t--) testcase();    

    return 0;
}
