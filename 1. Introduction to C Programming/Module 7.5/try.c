#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Replace positive with 1 and negative with 2
    for (int i = 0; i < N; i++) 
    {
        if (A[i] > 0) 
        {
            A[i] = 1;
        } else if (A[i] < 0) 
        {
            A[i] = 2;
        }
    }

    // Output the modified array
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", A[i]);
    }

    return 0;
}
