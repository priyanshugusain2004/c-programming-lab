/* Q7: Calculate the digit sum and check whether a number is a palindrome. */
#include <stdio.h>
 
int main()
{
    int n, temp, digit, sum = 0, reverse = 0;
 
    printf("Enter a number: ");
    scanf("%d", &n);
 
    temp = n;
 
    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }
 
    printf("Sum of digits = %d\n", sum);
 
    if (n == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
 
    return 0;
}
