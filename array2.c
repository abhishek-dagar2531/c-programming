#include<stdio.h>
#include<conio.h>
   

   // final price of 3 items with 18%gst 
int main(){
 float price[3]={100.0,200.0,300.0};
 printf("total price is: %f\n",price[0]+(0.18*price[0]));
 printf("total price is: %f\n",price[1]+(0.18*price[1]));
 printf("total price is: %f\n",price[2]+(0.18*price[2]));

    return 0;
}