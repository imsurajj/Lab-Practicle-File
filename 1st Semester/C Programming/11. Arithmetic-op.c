/* Write a Menu Driven program to construct a calculator for Arithmetic
operations addition, subtraction, multiplication, division, average and
percentage. */

#include <stdio.h>
int main()
{
    int choice;
    float num1, num2, result;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Average\n");
        printf("6. Percentage\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            else
            {
                printf("Error: Division by zero\n");
            }
            break;
        case 5:
            result = (num1 + num2) / 2;
            printf("Average: %.2f\n", result);
            break;
        case 6:
            result = (num1 / num2) * 100;
            printf("Percentage: %.2f%%\n", result);
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}