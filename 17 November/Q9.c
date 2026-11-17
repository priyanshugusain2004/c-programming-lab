/* Q9: Print Perfect Numbers up to n and count them. */
#include <stdio.h>
 
int main()
{
    int n, i, j, sum, count = 0;
 
    printf("Enter value of n: ");
    scanf("%d", &n);
 
    printf("Perfect numbers are: ");
 
    for (i = 1; i <= n; i++)
    {
        sum = 0;
 
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
                sum = sum + j;
        }
 
        if (sum == i)
        {
            printf("%d ", i);
            count++;
        }
    }
 
    printf("\nTotal count = %d", count);
    return 0;
}
