#include<stdio.h>

void palindrome(int arr[], int s) {
    int i = 0;
    int j = s - 1;
    int isPalindrome = 1;  // Assume it's a palindrome unless proven otherwise

    while (i < j) {
        if (arr[i] != arr[j]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    palindrome(arr, n);

    return 0;
}
