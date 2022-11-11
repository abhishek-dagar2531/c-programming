#include<conio.h>
#include<stdio.h>

// area of the circle
int main(){
    int r;   //r= radius of the circle
    float area;
    printf("enter the radius of the circle:\n");
    scanf("%d",&r);
    area=3.14*(r*r);
    printf("the area of the circle is %f",area);
}