// Pattern :
// ****
//  ***
//   **
//    *

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    int sp = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n-i+1; j++)
        {
            printf("*");
        }
        sp++;
        printf("\n");
    }
    return 0;
}