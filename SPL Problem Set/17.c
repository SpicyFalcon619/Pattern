// WAP that will print a pattern based on the input integer n. Please see the sample input output

//Pattern :
//    $   
//   $$$  
//  $ $ $ 
// $$$$$$$
//  $ $ $ 
//   $$$  
//    $ 

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int mid = (n / 2) + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == mid || i == mid || i + j == mid + 1 || j - i == mid - 1 || i - j == mid - 1 || i + j == n + mid)
            {
                printf("$");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}