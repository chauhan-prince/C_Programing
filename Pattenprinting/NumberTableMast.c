#include <stdio.h>

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
      
    for (int i = 1; i <= n; i++) {
        // Print the first part of the pattern (numbers increasing)
        for (int k = 1; k <= n - i + 1; k++) {
            printf("%d", k);
        }
        // Print the spaces in the middle
        for (int j = 1; j < 2 * (i - 1); j++) {
            printf(" ");
        }
        // Print the second part of the pattern (numbers decreasing)
        for (int k = n - i + 1; k >= 1; k--) {
            if (k != n) {  // Avoid double-printing the center number when i = 1
                printf("%d", k);
            }
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}
