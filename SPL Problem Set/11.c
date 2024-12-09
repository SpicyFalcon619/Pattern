// WAP that will print a pattern based on the input integer n. Please see the sample input output

// Pattern :
//    *
//   ***
//  *****
// *******

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
        for (int j = 1; j <= st; j++)
        {
            printf("*");
        }
        st+=2;
        printf("\n");
    }
    return 0;
}