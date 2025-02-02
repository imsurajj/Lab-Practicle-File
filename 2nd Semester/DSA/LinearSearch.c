// Linear Search 
#include<stdio.h>
#include<conio.h>
int linearSearch(int *arr,int n,int key){
    for(int i=0; i<n;i++){                 // In TURBOC use (i=0) and declare int i;
        //* If key is found , return key
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,30,50,40,60,80,90,100,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=100;
    int i=linearSearch(arr,n,key);
    if(i==-1)
        printf("Key not found");
    
    else
        printf("Key found at index : %d",i);    
    
    return 0;
}