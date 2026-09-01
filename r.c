#include <stdio.h>

#define MAX_MARKS 100.0f
#define SUBJECTS 4

int main()
{
    int rollno, i;
    char name[50];
    float scores[SUBJECTS];
    float total = 0.0f, percentage, average;

    printf("____________________\n");
    printf("       RESULT\n");
    printf("____________________\n");

    printf("Enter Roll No: ");
    scanf("%d", &rollno);

    printf("Enter Name: ");
    scanf("%49s", name);

    printf("\nEnter marks:\n");

    printf("Maths: ");
    scanf("%f", &scores[0]);

    printf("C: ");
    scanf("%f", &scores[1]);

    printf("Computer: ");
    scanf("%f", &scores[2]);

    printf("Maths Lab: ");
    scanf("%f", &scores[3]);

    for (i = 0; i < SUBJECTS; i++)
    {
        total += scores[i];
    }

    average = total / SUBJECTS;
    percentage = (total / (SUBJECTS * MAX_MARKS)) * 100.0f;

    printf("\n____________________\n");
    printf("       RESULT\n");
    printf("____________________\n");

    printf("Roll No: %d\n", rollno);
    printf("Name: %s\n", name);

    printf("\nSubject Marks:\n");
    printf("Maths      : %.2f\n", scores[0]);
    printf("C          : %.2f\n", scores[1]);
    printf("Computer   : %.2f\n", scores[2]);
    printf("Maths Lab  : %.2f\n", scores[3]);

    printf("\nTotal Marks: %.2f / %.2f\n", total, SUBJECTS * MAX_MARKS);
    printf("Average    : %.2f\n", average);
    printf("Percentage : %.2f%%\n", percentage);

    if (scores[0] >= 40 && scores[1] >= 40 &&
        scores[2] >= 40 && scores[3] >= 40)
    {
        printf("Result     : PASS\n");

        if (percentage > 75.0f)
            printf("Distinction: YES\n");
        else
            printf("Distinction: NO\n");
    }
    else
    {
        printf("Result     : FAIL\n");
        printf("Distinction: NO\n");
    }

    return 0;
}
