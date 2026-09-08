#include <stdio.h>

int main()
{
    int a, b, c;
    int E1, E2, E3, E5, E6, E7;
    float E4;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    E1 = a + b * c;
    E2 = (a + b) * c;
    E3 = a / b;
    E4 = (float)a / b;
    E5 = a % b;
    E6 = a > b && b > c;
    E7 = a > b ? a : b;

    printf("\nE1 = a + b * c       = %d\n", E1);
    printf("E2 = (a + b) * c     = %d\n", E2);
    printf("E3 = a / b            = %d\n", E3);
    printf("E4 = (float)a / b     = %.2f\n", E4);
    printf("E5 = a %% b             = %d\n", E5);
    printf("E6 = a > b && b > c   = %d\n", E6);
    printf("E7 = a > b ? a : b    = %d\n", E7);

    return 0;
}
