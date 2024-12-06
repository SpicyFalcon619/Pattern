//Pattern :
// 1  2  3  4  
// 5  6  7  8  
// 9  10  11  12  
// 13  14  15  16 

#include <stdio.h>

int main(){
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d  ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}