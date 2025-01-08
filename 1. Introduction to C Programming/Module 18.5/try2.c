#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    // Read the matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate the sum of the primary diagonal and secondary diagonal
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    // Calculate the absolute difference
    int absoluteDifference = abs(primaryDiagonalSum - secondaryDiagonalSum);

    // Print the result
    printf("%d\n", absoluteDifference);

    return 0;
}
