#include<stdio.h>
#include<conio.h>
 

 // traversing  a array with pointer & array
int main(){
int aadhar[5];
int *ptr=&aadhar[0];

// for input
for(int i=0;i<5;i++){
    printf("enter the value at %d index:\n",i);
    scanf("%d",ptr+i); // pointer
//  scanf("%d",aadhar[i]); // array
}
// for output 

for(int i=0;i<5;i++)
{
    printf("%d index:=%d\n",i,*(ptr+i));//pointer
    printf("%d index=%d\n",i,aadhar[i]);// array
}

return 0;
} 