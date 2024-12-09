//Pattern :
// *******
// *** ***
// **   **
// *     *

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    int sp = 1;
    int st = n-1;
    for (int i = 1; i <= n*2 - 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= n-1; i++)
    {
        for (int q = 1; q <= st; q++)
        {
            printf("*");
        }
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= st; k++)
        {
            printf("*");
        }
        st--;
        sp+=2;
        printf("\n");
    }
    return 0;
}