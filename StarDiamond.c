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
    int st = 1;
    int sp = n/2;
    int ml = n/2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= st; k++)
        {
            printf("*");
        }
        if(i<ml)
        {
            sp--;
            st+=2;
        }
        else
        {
            sp++;
            st-=2;
        }
        printf("\n");
    }
    return 0;
}