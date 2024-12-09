// WAP that will print a pattern based on the input integer n. Please see the sample input output

// Pattern :
// 4
// 43
// 432
// 4321

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        int a = n;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            a--;
        }
    printf("\n");
    }
    return 0;
}