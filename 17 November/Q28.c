/* Q28: Write student records to a file and read them back. */
#include <stdio.h>
 
struct student
{
    char name[50];
    int roll;
};
 
int main()
{
    struct student s;
    FILE *fp;
    int i;
 
    fp = fopen("student.txt", "w");
 
    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 0;
    }
 
    for (i = 0; i < 5; i++)
    {
        printf("Enter student name (one word): ");
        scanf("%49s", s.name);
 
        printf("Enter roll number: ");
        scanf("%d", &s.roll);
 
        fprintf(fp, "%s %d\n", s.name, s.roll);
    }
 
    fclose(fp);
 
    fp = fopen("student.txt", "r");
 
    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 0;
    }
 
    printf("\nStudent Records:\n");
 
    while (fscanf(fp, "%49s %d", s.name, &s.roll) == 2)
    {
        printf("\nName: %s", s.name);
        printf("\nRoll Number: %d\n", s.roll);
    }
 
    fclose(fp);
    return 0;
}
