/*
	Q1
	*/

#include<stdio.h>

add(){
int x,y,z = 0;
	printf("  Enter first number :-");
	scanf("%d",&x);
	printf("  Enter second number :-");
	scanf("%d",&y);
z = x + y;
	printf("  Addition of %d and %d is %d\n",x,y,z);}
sub(){
int y,e,f = 0;
	printf("  Enter first number :-");
	scanf("%d",&y);
	printf("  Enter second number :-");
	scanf("%d",&e);
f = y - e;
	printf("  Subtraction of %d and %d is %d\n",y,e,f);}

mul(){
int g,h,j = 0;
	printf("  Enter first number :-");
	scanf("%d",&g);
	printf("  Enter second number :-");
	scanf("%d",&h);
j = g * h;
	printf("  Multiplication of %d and %d is %d\n",g,h,j);}
div(){
int m,n;
	printf("  Enter first number :-");
	scanf("%d",&m);
	printf("  Enter second number :-");
	scanf("%d",&n);
if (n == 0) {
printf("  Error: Cannot divide by zero\n");
} else {
printf("  Division of %d and %d is %d\n", m,n,m/n);
}
}
mod(){
int p,q,r = 0;
	printf("  Enter first number :-");
	scanf("%d",&p);
	printf("  Enter second number :-");
	scanf("%d",&q);
r = p % q;
    printf("  Modulo of %d and %d is %d\n",p,q,r);
}def()
{
	printf("  Enter right choice...\n");
}
main(){
int i;
int choice;
printf("  Progtam to do many mathamatical calculation....\n");
do{
    printf("\n");
	printf("  Press 1 for +\n");
	printf("  press 2 for -\n");
	printf("  press 3 for *\n");
	printf("  press 4 for /\n");
	printf("  press 5 for %\n");
	printf("  press 0 for exit\n");
	printf("  Enter your choice :- ");
    scanf("%d",&choice);
if (choice == 0) {
break;}
switch(choice){
case 1:
    add();
	break;
case 2:
	sub();
	break;
case 3:
	mul();
	break;
case 4:
	div();
	break;
case 5:
    mod();
	break;
default:
def();}
}while(9);


}
