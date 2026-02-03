//cProblem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left
#include <stdio.h>

int main() {
    int n, pos;
    int a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);
    for (int i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;   // reduce array size

    // Print updated array
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;