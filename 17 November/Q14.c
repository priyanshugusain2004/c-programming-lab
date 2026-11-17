/* Q14: Compare call by value and call by address while swapping values. */
#include <stdio.h>
 
void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
 
    printf("Inside call by value: %d %d\n", a, b);
}
 
void swapAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
    int a = 10, b = 20;
 
    printf("Original values: %d %d\n", a, b);
 
    swapValue(a, b);
    printf("After call by value: %d %d\n", a, b);
 
    swapAddress(&a, &b);
    printf("After call by address: %d %d", a, b);
 
    return 0;
}
