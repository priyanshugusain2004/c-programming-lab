/* Q13: Check whether a number is an Armstrong number using functions. */
#include <stdio.h>
 
int power(int base, int exp)
{
    int result = 1, i;
 
    for (i = 1; i <= exp; i++)
        result = result * base;
 
    return result;
}
 
int isArmstrong(int n)
{
    int temp = n, digits = 0, digit, sum = 0;
 
    if (n == 0)
        digits = 1;
 
    for (temp = n; temp > 0; temp = temp / 10)
        digits++;
 
    temp = n;
 
    for (; temp > 0; temp = temp / 10)
    {
        digit = temp % 10;
        sum = sum + power(digit, digits);
    }
 
    return sum == n;
}
 
int main()
{
    int n;
 
    printf("Enter a number: ");
    scanf("%d", &n);
 
    if (n >= 0 && isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
 
    return 0;
}
