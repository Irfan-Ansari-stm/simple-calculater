#include<stdio.h>
main(){
int num;
int a, b, c;
printf("enter and process:\n 1.addition \n 2.substraction \n 3.multiplication \n 4.divistion");
printf("\nenter 1 to 4 :");
scanf("%d",&num);

switch(num){
case 1:
    printf("enter your first number :");
    scanf("%d",&a);
    printf("enter your second number :");
    scanf("%d",&b);
    c = a + b;
    printf("%d + %d = %d",a,b,c);


case 2:
    printf("enter your first number :");
    scanf("%d",&a);
    printf("enter your second number :");
    scanf("%d",&b);
    c = a - b;
    printf("%d - %d = %d",a,b,c);

case 3:
    printf("enter your first number :");
    scanf("%%d",&a);
    printf("enter your second number :");
    scanf("%d",&b);
    c = a * b;
    printf("%d * %d = %d",a,b,c);

case 4:
    printf("enter your first number :");
    scanf("%d",&a);
    printf("enter your second second :");
    scanf("%d",&b);
    c = a/b;
    printf("%d / %d = %d",a,b,c);











}

















}
