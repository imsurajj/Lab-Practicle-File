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
        if (arr[mid[] == key])
            return mid;
    }
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

int main(){

    
}