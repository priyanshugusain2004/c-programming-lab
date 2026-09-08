#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    int math, c, co, lab;
    const int MAX = 100;
    int total;
    float percentage, average;
    
    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Mathematics marks: ");
    scanf("%d", &math);

    printf("Enter C Programming marks: ");
    scanf("%d", &c);

    printf("Enter Computer Organization marks: ");
    scanf("%d", &co);

    printf("Enter Mathematics Lab marks: ");
    scanf("%d", &lab);

    total = math + c + co + lab;
    percentage = (float)total / (4 * MAX) * 100;
    average = (float)total / 4;

    printf("\n========================================\n");
    printf("          STUDENT RESULT\n");
    printf("========================================\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n\n", name);

    printf("Mathematics             : %d\n", math);
    printf("C Programming           : %d\n", c);
    printf("Computer Organization   : %d\n", co);
    printf("Mathematics Lab         : %d\n\n", lab);

    printf("Total                   : %d\n", total);
    printf("Percentage              : %.2f\n", percentage);
    printf("Average                 : %.2f\n", average);

    if (math >= 40 && c >= 40 && co >= 40 && lab >= 40 && percentage >= 40)
        printf("Result                  : PASS\n");
    else
        printf("Result                  : FAIL\n");

    if (math >= 40 && c >= 40 && co >= 40 && lab >= 40 && percentage >= 75)
        printf("Distinction             : YES\n");
    else
        printf("Distinction             : NO\n");

    printf("========================================\n");

    return 0;
}
