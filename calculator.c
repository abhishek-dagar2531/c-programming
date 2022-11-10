#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    int choice;
    printf("enter your choice\n 1.add\n 2.subtract\n 3.multiply\n 4.divide\n");
    scanf("%d",&choice);
   

    switch(choice){
        case 1:  printf("enter the value of a and b\n");
                scanf("%d\n%d",&a,&b);
                c = a+b;
                printf("addition is %d" ,c);
                break;
         case 2: printf("enter the value of a and b\n");
                scanf("%d\n%d",&a,&b);
                c = a-b;
                printf("subtraction is %d",c);
                break;
         case 3: printf("enter the value of a and b\n");
                scanf("%d\n%d",&a,&b);
                c = (a*b);
                printf("multiplication  is %d",c);
                break;
        case 4: printf("enter the value of a and b\n");
                scanf("%d\n%d",&a,&b);
                c = a/b;
                printf("divison is %d",c);
                break;       
       
        default: ("you enter invalid choice");
    }
    return 0;
}