/* Write a program to calculate the factorial of a number and display
the Fibonacci series up to N terms using recursive functions */

#include <stdio.h>
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    printf("Enter n: ");

    scanf("%d", &n);
    printf("Factorial is: %d\n", fact(n));
    printf("Fibonacci Series:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", fibo(i));
    }
    return 0;
}