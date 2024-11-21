// Write a program to Add ,Subtract ,Multiply & Divide Two Numbers using Pointers.

#include <stdio.h>
void add(int *a, int *b)
{
    float result = *a + *b;
    printf("Your result is: %.2f\n", result);
}
void subtract(int *a, int *b)
{
    float result = *a - *b;
    printf("Your result is: %.2f\n", result);
}
void multiply(int *a, int *b)
{
    float result = (*a) * (*b);
    printf("Your result is: %.2f\n", result);
}
void divide(int *a, int *b)
{
    if (*b != 0)
    {
        float result = (float)(*a) / (*b);
        printf("Your result is: %.2f\n", result);
    }
    else
    {
     printf("Division by zero is not allowed.\n");
    }
}
int main()
{
    int num1, num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    add(ptr1, ptr2);
    subtract(ptr1, ptr2);
    multiply(ptr1, ptr2);
    divide(ptr1, ptr2);
    return 0;
}