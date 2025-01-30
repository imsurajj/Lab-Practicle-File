// Array Insertion Program using Array
#include<stdio.h>
#include<conio.h>
void insert(int arr[],int *n,int pos,int val){
    // Shift Element to Right
    for(int i=*n;i>pos;i--)
        arr[i]=arr[i-1];
    //Insert Val at the Specified Position
    arr[pos]=val;
    //Increase the current size
    (*n)++;
}

int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int pos=3;
    int val=25;
    //Insert the value at the specified position
    insert(arr,&n,pos,val);
    for (int i = 0; i < n; i++)
    {
        printf("%d , ",arr[i]);
    }
    
    return 0;
}