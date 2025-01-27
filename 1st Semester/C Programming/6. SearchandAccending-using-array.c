// : Write a program to search for a number entered by the user in a given array and display the array in the Ascending Order

#include <stdio.h>
int sortArray(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}
int searchNumber(int arr[], int size, int number)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10], number, position, i;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &number);
    position = searchNumber(arr, 10, number);
    if (position != -1)
    {
        printf("Number %d found at position %d\n", number, position + 1);
    }
    else
    {
        printf("Number %d not found in the array\n", number);
    }
    sortArray(arr, 10);
    printf("Array in ascending order:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Add newline after printing the array
    return 0;
}