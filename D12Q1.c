#include <stdio.h>

int main() {

    int n, i, j;
    int symmetric = 1;

    // Input size (square matrix)
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetric condition
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    // Output result
    if (symmetric == 1)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is Not Symmetric\n");

    return 0;
}