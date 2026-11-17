/* Q8: Check for a Strong Number and find the next greater Strong Number. */
#include <stdio.h>
 
int main()
{
    int n, temp, digit, fact, sum, i, num;
 
    printf("Enter a number: ");
    scanf("%d", &n);
 
    temp = n;
    sum = 0;
 
    for (; temp > 0; temp = temp / 10)
    {
        digit = temp % 10;
        fact = 1;
 
        for (i = 1; i <= digit; i++)
            fact = fact * i;
 
        sum = sum + fact;
    }
 
    if (n == 0)
        sum = 1;
 
    if (sum == n)
        printf("Strong Number");
    else
    {
        printf("Not a Strong Number\n");
 
        for (num = n + 1; ; num++)
        {
            temp = num;
            sum = 0;
 
            for (; temp > 0; temp = temp / 10)
            {
                digit = temp % 10;
                fact = 1;
 
                for (i = 1; i <= digit; i++)
                    fact = fact * i;
 
                sum = sum + fact;
            }
 
            if (num == 0)
                sum = 1;
 
            if (sum == num)
            {
                printf("Nearest greater Strong Number = %d", num);
                break;
            }
        }
    }
 
    return 0;
}
