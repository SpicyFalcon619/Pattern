//Pattern :
// *     *
// **   **
// *** ***
// *******

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    int sp = n+1;
    int st = n-1;
    printf("\n");
    for (int i = 1; i <= n-1; i++)
    {
        for (int q = 1; q <= i; q++)
        {
            printf("*");
        }
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        
        st--;
        sp-=2;
        printf("\n");
    }
    for (int i = 1; i <= n*2 - 1; i++)
    {
        printf("*");
    }
    return 0;
}