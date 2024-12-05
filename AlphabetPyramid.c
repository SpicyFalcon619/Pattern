// Pattern :
//    A
//   ABC
//  ABCDE
// ABCDEFG

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    int st = 1;
    for (int i = 1; i <= n; i++)
    {
        int a = 65;
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= st; k++)
        {
            printf("%c", a);
            a++;
        }
        st+=2;
        printf("\n");
    }
    return 0;
}