#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int A[10][10];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Find principal diagonal sum
    for(i = 0; i < n; i++) {
        sum += A[i][i];
    }

    printf("Sum of principal diagonal elements = %d\n", sum);

    return 0;
}