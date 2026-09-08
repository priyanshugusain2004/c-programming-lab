#include <stdio.h>

int main()
{
    int num1, num2;
    int sum;
    float average;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    average = (float)sum / 2;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    if (num1 == num2)
        printf("Both numbers are equal\n");
    else
        printf("Numbers are different\n");

    return 0;
}
