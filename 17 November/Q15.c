/* Q15: Run a repeated arithmetic menu using while and switch. */
#include <stdio.h>
 
int main()
{
    int a, b, choice;
 
    while (1)
    {
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication");
        printf("\n4. Division\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
 
        if (choice == 5)
            break;
 
        if (choice < 1 || choice > 5)
        {
            printf("Invalid choice");
            continue;
        }
 
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
 
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
                    printf("Cannot divide by zero");
                break;
        }
    }
 
    return 0;
}
