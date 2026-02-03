//Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.
#include <stdio.h>

int main() {
    int n, pos, x;
    int a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &x);
    printf("Enter position (1-based): ");
    scanf("%d", &pos);
    for (int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = x;
    n++;
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}