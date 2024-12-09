// WAP that will print a pattern based on the input integer n. Please see the sample input output

//Pattern :
// 1010
// 0101
// 1010
// 0101

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i%2 == 0){
                if(j%2 == 0) printf("1");
                else printf("0");
            }
            else{
                if(j%2 == 0) printf("0");
                else printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}