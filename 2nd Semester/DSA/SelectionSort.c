// Selection Sort
#include <stdio.h>
#include <conio.h>
void SelectionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        //* Assume that the current position holds the minimum element
        int min_idx = i;

        //* Iterate throught the unsorted portion to find actual minimum
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                //* Update min_idx if smaller element found
                min_idx = j;
            }
        }

        //* Move elements to its correct position
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void PointerArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {65, 50, 42, 35, 20, 15, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array : ");
    PointerArray(arr, n);
    SelectionSort(arr, n);
    printf("Sorted Array : ");
    PointerArray(arr, n);
    return 0;
}