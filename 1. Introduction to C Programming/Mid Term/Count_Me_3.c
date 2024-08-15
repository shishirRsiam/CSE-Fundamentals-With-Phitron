#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void testcase()
{
    char s[10005]; scanf("%s", &s);

    int i = 0, digit = 0, big = 0, small = 0;
    while(s[i] != NULL)
    {
        if(s[i] >= '0' && s[i] <= '9') digit++;
        else if(s[i] >= 'a' && s[i] <= 'z') small++;
        else big++;
        i++;
    }
    printf("%d %d %d\n", big, small, digit);
}

int main() 
{
    int t; scanf("%d", &t);
    while(t--) testcase();    

    return 0;
}
