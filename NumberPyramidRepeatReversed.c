// Pattern :
//    1
//   212
//  32123
// 4321234

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = i; k >= 1; k--)
        {
            printf("%d", k);
        }
        for (int l = 2; l <= i; l++)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}