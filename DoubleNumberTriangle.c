//Pattern :
// 1     1
// 12   21
// 123 321
// 1234321

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sp = n+1;
    for (int i = 1; i <= n-1; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            printf(" ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        sp-=2;
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    for (int i = n-1; i >= 1; i--)
    {
        printf("%d", i);
    }
    
    return 0;
}
