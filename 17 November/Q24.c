/* Q24: Concatenate two strings without strcat(). */
#include <stdio.h>
 
int main()
{
    char str1[200], str2[100];
    int i, j;
 
    printf("Enter first string (one word): ");
    scanf("%99s", str1);
 
    printf("Enter second string (one word): ");
    scanf("%99s", str2);
 
    for (i = 0; str1[i] != '\0'; i++)
        ;
 
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }
 
    str1[i] = '\0';
 
    printf("Concatenated string = %s", str1);
    return 0;
}
