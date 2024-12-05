// Pattern :
// 1234
// 123
// 12
// 1

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}