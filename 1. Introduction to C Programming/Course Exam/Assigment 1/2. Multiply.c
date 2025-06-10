#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int a, b, mul;
    scanf("ll%d %lld",&a, &b);
    
    mul = a * b;
    printf("%lld", mul);
    return 0;
}