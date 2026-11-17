/* Q27: Compare the sizes of a structure and a union. */
#include <stdio.h>
 
struct student
{
    int roll;
    float marks;
    char grade;
};
 
union data
{
    int roll;
    float marks;
    char grade;
};
 
int main()
{
    printf("Size of structure = %lu bytes\n",
           (unsigned long)sizeof(struct student));
 
    printf("Size of union = %lu bytes\n",
           (unsigned long)sizeof(union data));
 
    return 0;
}
