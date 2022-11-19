#include<stdio.h>
#include<conio.h>


// pointer arithmetic(only increment & decrement operator works )
int main(){
int age= 22;
int *ptr=&age;

printf("%u\n",ptr);
ptr++;
printf("%u\n",ptr);
ptr--;
printf("%u",ptr);

return 0;
}