// Binary Search
#include <stdio.h>
#include <conio.h>
int BinarySearch(int arr[], int left, int right, int key)
{
    //* Loop will run till left>Right, It means there are
    //* No elements to consider in subarray
    while (left <= right)
    {
        //* Calculating Mid Point
        int mid = left + (right - left) / 2;
        //* check if key is present at mid
        if (arr[mid] == key)
            return mid;
        //* If key greater than arr[mid], ignore left half
        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        //* If key is smaller than or equal to arr[mid], Ignore the Right half
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 27, 30, 31, 34, 36, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    //* Element to be searched
    int key = 23;
    int result = BinarySearch(arr, 0, size - 1, key);
    if (result == -1)
    {
        printf("Element is not present in array");
    }
    else
    {
        printf("Element is preset at index %d", result);
    }
    return 0;
}
