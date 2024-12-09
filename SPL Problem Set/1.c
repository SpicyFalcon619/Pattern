// WAP that will print a pattern based on the input integer n. Please see the sample input output

// Pattern :
// 1234
// 1234
// 1234
// 1234

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}