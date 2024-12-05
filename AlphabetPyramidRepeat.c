// Pattern :
//    A
//   ABA
//  ABCBA
// ABCDCBA

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 65;
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c", a);
            a++;
        }
        a-=2;
        for (int l = i-1; l >= 1; l--)
        {
            printf("%c", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}