/* Write a Program to create two files with names Even File and Odd
File. Input 20 numbers from the user and display the details of the
Employee ID given by user. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *evenFile, *oddFile;
    int numbers[20];
    int i;
    evenFile = fopen("Evenfile.txt", "w");
    if (evenFile == NULL)
    {
        printf("Error opening Evenfile.\n");
        exit(1);
    }
    oddFile = fopen("Oddfile.txt", "w");
    if (oddFile == NULL)
    {
        printf("Error opening Oddfile.\n");
        fclose(evenFile);
        exit(1);
    }
    printf("Enter 20 numbers:\n");
    for (i = 0; i < 20; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0)
        {
            fprintf(evenFile, "%d\n", numbers[i]);
        }
        else
        {
            fprintf(oddFile, "%d\n", numbers[i]);
        }
    }
    printf("Numbers saved successfully in Evenfile and Oddfile.\n");
    fclose(evenFile);
    fclose(oddFile);
    return 0;
}