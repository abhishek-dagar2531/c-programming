#include<stdio.h>
#include<conio.h>

//swapping of two numbers without using third variable
int main(){
  int a= 10;
  int b= 20;
  printf("values before swapping a=%d b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("values after swapping a=%d b=%d",a,b);
  
    return 0;
}