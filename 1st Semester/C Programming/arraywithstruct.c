/* Write a program to make use of arrays with Structures in the following ways:
    (1)Use an array as a structure data number
    (2)Create an array of structure variables
*/

#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int marks[5];
};
int main()
{
    struct Student students[3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for 5 subjects for %s:\n", students[i].name);
        for (j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }
    printf("\nStudent Information:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nName: %s\n", students[i].name);

        printf("Marks: ");
        for (j = 0; j < 5; j++)
        {
            printf("%d ", students[i].marks[j]);
        }
        printf("\n");
    }
    return 0;
}