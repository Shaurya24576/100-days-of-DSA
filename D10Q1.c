#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int left, right, length, isPalindrome = 1;
     printf("Enter a string: ");
    scanf("%s", s);
    length = strlen(s);
    left = 0;
    right = length - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}