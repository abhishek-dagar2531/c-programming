#include<stdio.h>
#include<conio.h>

int main(){
  int marks[3];
  printf("enter physics marks:\n");
  scanf("%d",&marks[0]);

  printf("enter chemistry marks:\n");
  scanf("%d",&marks[1]);

  printf("enter maths marks:\n");
  scanf("%d",&marks[2]);

  printf("physics=%d\nchemistry=%d\nmaths=%d",marks[0],marks[1],marks[2]);

    return 0;
}