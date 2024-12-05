// Pattern :
//    1
//   123
//  12345
// 1234567

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    int st = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= st; k++)
        {
            printf("%d", k);
        }
        st+=2;
        printf("\n");
    }
    return 0;
}