// Array Deletion Program using Array
#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos = 2;
 // Array Values Before Deletion
    printf("Array Before Deletion : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d , ", arr[i]);
    }
 // Delete Element at given position
    for (int i = pos; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    if (pos <= n)
        n--;
    printf("\nArray after deletion\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d , ", arr[i]);
    }
}