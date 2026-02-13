#include <stdio.h>

int main() {

    int m, n;
    int i;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    // Input matrix
    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    printf("Spiral order:\n");

    while (top <= bottom && left <= right) {

        // 1. Left to Right
        for (i = left; i <= right; i++) {
            printf("%d ", a[top][i]);
        }
        top++;

        // 2. Top to Bottom
        for (i = top; i <= bottom; i++) {
            printf("%d ", a[i][right]);
        }
        right--;

        // 3. Right to Left
        if (top <= bottom) {
            for (i = right; i >= left; i--) {
                printf("%d ", a[bottom][i]);
            }
            bottom--;
        }

        // 4. Bottom to Top
        if (left <= right) {
            for (i = bottom; i >= top; i--) {
                printf("%d ", a[i][left]);
            }
            left++;
        }
    }

    return 0;
}