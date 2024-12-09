// WAP that will print a pattern based on the input integer n. Please see the sample input output

//Pattern :
// ZZZZZ
//    Z
//   Z
//  Z
// ZZZZZ

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i == 1 || i == n || j == n - i + 1)
            {
            printf("Z");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    return 0;
}
