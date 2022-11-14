#include<stdio.h>
#include<conio.h>

int sum(int a,int b);

int  main(){
int a,b,c;
printf("enter the value of a\n");
scanf("%d",&a);
printf("enter the value of b\n");
scanf("%d",&b);
c=sum(a,b);
printf("the sum is %d",c);
return 0;
}

int sum(int a, int b){
    return a+b;
}