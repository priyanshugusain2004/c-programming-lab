#include <stdio.h>

void enterMarks(float *m1, float *m2, float *m3) {
    printf("Enter marks for Subject 1: ");
    scanf("%f", m1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", m2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", m3);
}

void processResult(float m1, float m2, float m3) {
    float total = m1 + m2 + m3;
    float percentage = total / 3.0;
    char grade;
    int isPass = (m1 >= 40 && m2 >= 40 && m3 >= 40);

    if (percentage >= 85) {
        grade = 'A';
    } else if (percentage >= 70) {
        grade = 'B';
    } else if (percentage >= 50) {
        grade = 'C';
    } else if (percentage >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("\n------ STUDENT RESULT ------\n");
    printf("Marks: %.2f, %.2f, %.2f\n", m1, m2, m3);
    printf("Total Marks: %.2f / 300.00\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Status: %s\n", (isPass && grade != 'F') ? "PASS" : "FAIL");
    printf("Grade: %c\n", (isPass && grade != 'F') ? grade : 'F');
    printf("----------------------------\n");
}

int main() {
    int choice;
    float s1 = 0, s2 = 0, s3 = 0;
    int dataEntered = 0;

    do {
        printf("\n*** Student Result System ***\n");
        printf("1. Enter Student Marks\n");
        printf("2. Generate and Display Result\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enterMarks(&s1, &s2, &s3);
                dataEntered = 1;
                break;
            case 2:
                if (dataEntered) {
                    processResult(s1, s2, s3);
                } else {
                    printf("Please enter marks first (Option 1).\n");
                }
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
