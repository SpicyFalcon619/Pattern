//Pattern :
// 1
// 01
// 101
// 0101

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    int a;
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            if((i+j)%2 == 0) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}