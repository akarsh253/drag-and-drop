#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter value of matrix A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);

            printf("Enter value of matrix B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nResultant Matrix C (A + B):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;}