#include<stdio.h>
#include<conio.h>

int main(){
 int n,s,t=0,temp;
 printf("enter the number :");
 scanf("%d",&n);
 temp=n;
  while(n>0){
  s=n%10;
  t=t+(s*s*s);
  n=n/10;
  }  
 if(temp==t){
    printf("thr number is armstrong %d",t);
 }
 else {
    printf("the number is not armstrong number");
 }


    return 0;
}