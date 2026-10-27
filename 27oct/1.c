#include <stdio.h>
int main ()
{
    int num=200;

    int *ptr;

    ptr = &num;
    printf("val \t : %d\n",num);
    printf("ptr\t: %p\n",ptr);

    printf("ptr\t: %p\n",&num);

    printf("ptr\t: %d\n",*ptr);

    printf("ptr\t: %p\n",ptr);
    return 0;
}