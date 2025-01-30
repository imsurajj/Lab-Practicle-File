// Array Traverse Program using Array
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, arr[] = {1, 2, 3, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);
    // Traverse and Print Elements using a for loop
    printf("Array Elements : ");
    for (i = 0; i < N; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n");
    return 0;
}