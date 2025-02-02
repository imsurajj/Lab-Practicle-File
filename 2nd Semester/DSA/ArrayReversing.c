// Array Reversing Using C 
 #include<stdio.h>
 #include<conio.h>
void rev(int arr[],int n){
    int temp,l=0,r=n-1;
    while (l<r)
    {
        temp=arr[1];
        arr[1]=arr[r];
        arr[r]=temp;
        // Move Pointers towards Middle
        l++;
        r--;
    }  
 }
 int main(){
    int i,n,arr[]={1,2,3,4,5};
    n=sizeof(arr)/sizeof(arr[0]);
    // Reverse Array 
    rev(arr,n);
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
 }