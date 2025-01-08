// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include <stdio.h>

int main() {
    long long int T;
    scanf("%lld", &T);

    for (int i = 0; i < T; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long sum = 0;
        for (long long j = a; j <= b; j++) {
            sum += j;
        }
        printf("%lld\n", sum);
    }

    return 0;
}
