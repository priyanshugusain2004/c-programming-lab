/* Q25: Allocate and release array memory using malloc() and free(). */
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int *a, n, i;
 
    printf("Enter array size: ");
    scanf("%d", &n);
 
    if (n <= 0)
    {
        printf("Invalid array size");
        return 0;
    }
 
    a = (int *)malloc(n * sizeof(int));
 
    if (a == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
 
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
 
    printf("Array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
 
    free(a);
    printf("\nMemory released");
 
    return 0;
}
