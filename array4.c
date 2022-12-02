#include<stdio.h>
#include<conio.h>

void printNumbers(int arr[],int n);//void printNumber(int *arr,int n); == with array as a pointer 

int main(){
 int arr[]={10,20,30,40,50};
 printNumbers(arr,5);
return 0;
}

void printNumbers(int arr[],int n){   // void printNumber(int *arr,int n)== with array as a pointer 
   for(int i=0;i<n;i++){
    printf("%d\t", arr[i]);      // printf("%d\t",arr)
   }
   printf("\n");
}