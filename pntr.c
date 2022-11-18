#include <stdio.h>

// pointer is the variable that stores the address og another variable & declaired with(*)

int main()
{
 int age = 22;
 int *ptr = &age;

 printf("%d\n",age);    // value of variable age
 printf("%d\n",&age);   // address of variable age                  & = address of operator
 printf("%d\n",ptr);    //value(address) of inside ptr variable
 printf("%d\n",*ptr);   //value of address stored by the pointer     * = value at address 
 printf("%d\n",&ptr);     //address of pointer variable
 printf("%d",&(*ptr));    //adress of (value of address stored by the pointer)

    return 0;
}