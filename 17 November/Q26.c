/* Q26: Store and display five students using a structure. */
#include <stdio.h>
 
struct student
{
    char name[50];
    int roll;
    float marks;
};
 
int main()
{
    struct student s[5];
    int i;
 
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);
 
        printf("Enter name (one word): ");
        scanf("%49s", s[i].name);
 
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
 
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
 
    printf("\nStudent Details:\n");
 
    for (i = 0; i < 5; i++)
    {
        printf("\nName: %s", s[i].name);
        printf("\nRoll Number: %d", s[i].roll);
        printf("\nMarks: %.2f\n", s[i].marks);
    }
 
    return 0;
}
