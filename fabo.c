#include<stdio.h>
#include<conio.h>

int main(){
 int f=0,s=1,n,i,fn;
 printf("enter the number:");
 scanf("%d",&n);
 printf("%d %d", f, s);
 for(i=0;i<n;i++){
     fn=f+s;
     printf(" %d",fn);
     f=s;
     s=fn;
 }

}
