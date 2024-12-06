// Pattern :
// 1      1
// 12    21
// 123  321
// 12344321

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = 1; j <= 2*(n-i); j++)
        {
                printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}