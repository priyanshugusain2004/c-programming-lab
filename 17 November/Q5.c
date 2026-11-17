/* Q5: Perform arithmetic operations using a switch statement. */
#include <stdio.h>
 
int main()
{
    int a, b, choice;
 
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
 
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division");
    printf("\nEnter choice: ");
    scanf("%d", &choice);
 
    switch (choice)
    {
        case 1:
            printf("Result = %d", a + b);
            break;
        case 2:
            printf("Result = %d", a - b);
            break;
        case 3:
            printf("Result = %d", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result = %.2f", (float)a / b);
            else
                printf("Division by zero is not possible");
            break;
        default:
            printf("Invalid choice");
    }
 
    return 0;
}
