#include<stdio.h>
#include<conio.h>
 // here we take number as palindrome 
 
int main(){
    long int n;
    int res=0;
    int rem=0;
    printf("enter the value :");
    scanf("%d",&n);
    int temp=n;

    while(n!=0){
    rem=n%10;
    res= res*10+rem;
    n=n/10;
    }
    printf("%d",res);
    return 0;
}