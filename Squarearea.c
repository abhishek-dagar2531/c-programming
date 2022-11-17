#include<conio.h>
#include<stdio.h>

// area of the square
int main(){
    int side,area;
    printf("enter the side of the square:\n");
    scanf("%d",&side);
    area=side*side;
    printf("the area of the square is %d\n",area);
    return 0;
}