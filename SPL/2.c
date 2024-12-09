// WAP that will print a pattern based on the input integer n. Please see the sample input output

// Pattern :
// 1234
// 2345
// 3456
// 4567

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    int a = 1, b = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", b);
            b++;
        }
        a++;
        b = a;
        printf("\n");
    }
    return 0;
}