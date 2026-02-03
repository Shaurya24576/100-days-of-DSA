//Implement linear search to find key k in an array. Count and display the number of comparisons performed.
#include <stdio.h>

int main() {
    int n, k;
    int a[100];
    int comparisons = 0;
    int found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        comparisons++; 
        if (a[i] == k) {
            printf("Key found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Key not found\n");
    }
    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}