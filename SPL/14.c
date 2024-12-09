// WAP that will print a pattern based on the input integer n. Please see the sample input output

//Pattern :
// *****
// *   *
// *****
// *   *
// *****

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j == 1 || j == n || i == 1 || i == n || i == (n / 2) + 1)
            {
            printf("*");
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
