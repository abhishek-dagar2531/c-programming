#include<stdio.h>
#include<conio.h>

float circlearea(float r);
float rectanglearea(float l,float b);
float squarearea(float s);

int main(){
 float r,l,b,s;
 printf("enter the value of r\n");
 scanf("%f",&r);
  printf("enter the value of l\n");
 scanf("%f",&l);
  printf("enter the value of b\n");
 scanf("%f",&b);
  printf("enter the value of s\n");
 scanf("%f",&s);
 

printf("the area of circle is %f\n",circlearea(r));
printf("the arae of rectangle is %f\n",rectanglearea(l,b));
printf("the area of square is %f\n",squarearea(s));

    return 0;
}
float circlearea(float r){
float a;
 a= 3.14*r*r;
 return a;

}
float rectanglearea(float l,float b){
    float a;
    a=l*b;
    return a;

}
float squarearea(float s){
    float a;
    a=s*s;
    return a;
  
}