/* Q10: Print prime numbers up to n, their count and their sum. */
#include <stdio.h>
 
int main()
{
    int n, i, j, flag, count = 0, sum = 0;
 
    printf("Enter value of n: ");
    scanf("%d", &n);
 
    printf("Prime numbers are: ");
 
    for (i = 2; i <= n; i++)
    {
        flag = 1;
 
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
 
        if (flag == 1)
        {
            printf("%d ", i);
            count++;
            sum = sum + i;
        }
    }
 
    printf("\nCount = %d", count);
    printf("\nSum = %d", sum);
    return 0;
}
