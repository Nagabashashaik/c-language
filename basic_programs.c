//writing hello world program in C

/*#include<stdio.h>
void main(){
printf("Hello World !!\n");
}*/

//Adding two numbers in C:

/*#include<stdio.h>
void main(){
int a=10,b=20,c;
c=a+b;
printf("The sum of %d and %d = %d \n",a,b,c);
}*/

//Adding two numbers by taking user input:
/*#include<stdio.h>
void main(){
int a,b,c;
printf("Enter the value1:");
scanf("%d",&a);
printf("Enter the value2:");
scanf("%d",&b);
c=a+b;
printf("The sum of %d and %d = %d \n",a,b,c);
}*/

//printing the string values:
/*#include<stdio.h>
void main(){
char* x="Srikanth";
printf("The Name is %s \n",x);
}*/


//performing arthematic operations in c:
/*#include<stdio.h>
void main(){
int x,y,z;
printf("Enter value1:");
scanf("%d",&x);
printf("Enter value2:");
scanf("%d",&y);
z=x+y;
printf("The addition of %d and %d = %d \n",x,y,z);
z=x-y;
printf("The subtraction of %d and %d = %d \n",x,y,z);
z=x*y;
printf("The multiplication of %d and %d = %d \n",x,y,z);
z=x/y;
printf("The dicision of %d and %d = %d \n",x,y,z);
}*/

//printing 'n' natural numbers using while loop in c:
/*#include<stdio.h>
void main(){
int i=0,n=10;
while(i<=n)
{
printf("%d \n",i);
i=i+1;
}
}*/


//print sum of 'n' natural numbers b/w user given value:
/*#include<stdio.h>
void main(){
int i=0,n,sum;
printf("Enter the n value:");
scanf("%d",&n);
while(i<=n)
{
printf("%d \n",i);
sum=sum+i;
i=i+1;
}
printf("The sum of %d natural numbers is = %d",n,sum);
}*/


//if-else statements in c:(finf greatest among two numbers)
/*#include<stdio.h>
void main(){
int x,y;
printf("Enter x value:");
scanf("%d",&x);
printf("Enter y value:");
scanf("%d",&y);
if(x>=y)
{printf("%d is Greater than %d \n",x,y);
}
else
{printf("%d is greater than %d \n",y,x);
}
}*/

//else-if ladder:
/*#include<stdio.h>
void main(){
int x,y;
printf("Enter x value:");
scanf("%d",&x);
printf("Enter y value:");
scanf("%d",&y);
if(x>y)
{printf("%d is greater than %d \n",x,y);
}
else if(x==y)
{printf("%d is equal to %d \n",x,y);
}
else
{printf("%d is greater than %d \n",y,x);
}
}*/


//switch statement in c:
/*#include<stdio.h>
void main()
{
int x;
printf("Enter the x value:");
scanf("%d",&x);
switch(x)
{
case 1:
printf("x value is 1\n");
break;
case 2:
printf("x value is 2\n");
break;
default:
printf("Enter values between 1-5 only/-\n");
}
}*/


//switch statement example:
/*#include<stdio.h>
void main(){
int x;
printf("Enter the x value:");
scanf("%d",&x);
switch(x)
{
case 1:
printf("The day is Monday \n");
break;
case 2:
printf("The day is Tuesday \n");
break;
case 3:
printf("The day is Wednesday \n");
break;
case 4:
printf("The day is Thursday \n");
break;
case 5:
printf("The day is Friday \n");
break;
case 6:
printf("The day is Saturday \n");
break;
case 7:
printf("The day is Sunday \n");
break;
default:
printf("enter the values between 1-7 only/-");
}
}*/


//01)write a program to calculate the area of circle:
/*#include<stdio.h>
void main(){
float pi=3.14,radius,area;
printf("Enter the radius of a circle:");
scanf("%f",&radius);
area=pi*radius*radius;
printf("the area of a circle of radius %f is %f \n",radius,area);
}*/

//02)Find the ASCII value of a given charecter:
/*#include<stdio.h>
void main(){
char charecter;
printf("Enter a charecter:");
scanf("%c",&charecter);
printf("The Ascii value of %cis %d \n",charecter,charecter);
}*/


//03)Find the charecter of a given ASCII value:
/*#include<stdio.h>
void main(){
int ascii_value;
printf("Enter a ascii value:");
scanf("%d",&ascii_value);
printf("The Ascii value of %d is %c \n",ascii_value,ascii_value);
}*/


//04)convert uppercase to lowercase:
/*#include<stdio.h>
void main(){
char upper;
printf("Enter upper case charecter:");
scanf("%c",&upper);
printf("The lower case char for %c is %c \n",upper,upper+32);
}*/


//05)write a program to swap two numbers using temporary variable:
/*#include<stdio.h>
void main(){
int first,second,temp;
printf("Enter first num:");
scanf("%d",&first);
printf("Enter second num:");
scanf("%d",&second);
temp=first;
first=second;
second=temp;
printf("The first value is %d \n",first);
printf("The second value is %d \n",second);
}*/


//05)write a program to swap two numbers without using temporary variable:
/*#include<stdio.h>
void main(){
int first,second;
printf("Enter the first num:");
scanf("%d",&first);
printf("Enter the second num:");
scanf("%d",&second);
first=first+second;
second=first-second;
first=first-second;
printf("The first value is %d \n",first);
printf("The second value is %d \n",second);
}*/


//write a program to find the given number is prime num or not:
/*#include<stdio.h>
void main(){
int i=1,x,sum=0;
printf("Enter x value:");
scanf("%d",&x);

while(i<=x){
if(x%i==0)
sum=sum+1;
i=i+1;
}
if (sum==2){
printf("The %d is a Prime number \n",x);
}
else{
printf("The %d is not a  Prime number \n",x);
}
}*/

//program to find the factorial of a number:
/*#include<stdio.h>
void main(){
int i=1,x,y=1;
printf("Enter x value:");
scanf("%d",&x);
while(i<=x){
y*=i;
i=i+1;
}
printf("The factorial of %d is %d \n",x,y);
}*/

//program to print the prime numers b/w given range:


/*#include <stdio.h>
int main()
{
float radius;
double area,circumference;
printf("\n Enter the radius of circle:");
scanf("%f",&radius);
area=3.14*radius*radius;
circumference=2*3.14*radius;
printf("Area=%.21e",area);
printf("\n CIRCUMFERENCE=%.2e \n",circumference);
return 0;
}*/






































































