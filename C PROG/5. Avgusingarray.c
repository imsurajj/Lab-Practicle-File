// Write 50 Students marks and Find the Average of the marks using an array

#include <stdio.h>
int main()
{
    int marks[50];
    int sum = 0;
    float average;
    printf("Enter the marks of 50 students :\n");
    for (int i = 0; i < 50; i++)
    {
        printf("Student %d : ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum / 50.0;
    printf("The average marks of the class is : %.2f\n", average);
    return 0;
}