/* Write a Menu Driven program to perform the following operations:
    (1)Armstrong number
    (2) Prime Numbers
    (3) Reverse The Integer */

#include <stdio.h>
int isArmstrong(int num)
{
    int sum = 0, temp = num, digits = 0, remainder, power;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0)
    {
        remainder = temp % 10;
        power = 1;
        for (int i = 0; i < digits; i++)
        {
            power *= remainder;
        }
        sum += power;
        temp /= 10;
    }
    return sum == num;
}
void printArmstrongNumbers(int n)
{
    printf("Armstrong numbers up to %d:\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void printPrimeNumbers(int n)
{
    printf("Prime numbers from 1 to %d:\n", n);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int reverseInteger(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}
int main()
{
    int choice, n, num;
    printf("1. Print Armstrong numbers up to N\n");
    printf("2. Display prime numbers from 1 to N\n");
    printf("3. Reverse an integer\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter N: ");
        scanf("%d", &n);
        printArmstrongNumbers(n);
    }
    else if (choice == 2)
    {
        printf("Enter N: ");
        scanf("%d", &n);
        printPrimeNumbers(n);
    }
    else if (choice == 3)
    {
        printf("Enter an integer to reverse: ");
        scanf("%d", &num);
        printf("Reversed integer: %d\n", reverseInteger(num));
    }

    else
    {
        printf("Invalid choice. Please try again.\n");
    }
    return 0;
}