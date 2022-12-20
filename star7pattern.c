#include<stdio.h>
#include<conio.h>

int main(){
    int rows=5;
    int space;
    for(int i=1;i<=rows;i++){
        for(space=0;space<(i-1);space++){
            printf(" ");
        }
        for(int j=((2*rows)-(i+space));j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}