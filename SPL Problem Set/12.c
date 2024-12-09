// WAP that will print a pattern based on the input integer n. Please see the sample input output

// Pattern :
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    int sp = n/2;
    int ml = n/2 + 1;
    int st = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= st; j++)
        {
            printf("*");
        }
        if (i<ml)
        {
            st+=2;
            sp--;
        }
        else
        {
            st-=2;
            sp++;
        }
        printf("\n");
    }
    return 0;
}