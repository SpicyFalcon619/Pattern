// WAP that will print a pattern based on the input integer n. Please see the sample input output

//Pattern :
// H   H
// H   H
// HHHHH
// H   H
// H   H

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j == 1 || j == n || i == (n/2) + 1)
            {
            printf("H");
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
