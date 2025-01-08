#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1) {
                printf("X");
            } else if (i == j || i + j == n + 1) {
                printf("X");
            } else if (i == n / 2 + 1 || j == n / 2 + 1) {
                printf("X");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
