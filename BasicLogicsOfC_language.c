//write a program calculate the area of circle?
/*#include<stdio.h>
int main()
{
float radius;
double area,circumference;
printf("\n Enter the radius of circle:");
scanf("%f",&radius);
area=3.14*radius*radius;
circumference=2*3.14*radius;
printf(" Area=%.21e",area);
printf("\n CIRCUMFERENCE=%.2e \n",circumference);
return 0;
}*/


//write a program to print the ASCII value of a character.
/*#include <stdio.h>
int main ()
{
char ch;
printf("\n Enter any character:");
scanf("%c",&ch);
printf("\n The ASCII value of %c is: %d \n",ch ,ch);
return 0;
}*/

//write a program to read a character in upper case and then print it in Lower case.
/*#include<stdio.h>
int main()
{
char ch;
printf("\n Enter any character in upper case: ");
scanf("%c",&ch);
printf("\n The character in lower case is : %c \n",ch +32);
return 0;
}*/

//4. write a program to print the digit at ones place of a number.
/*#include <stdio.h>
int main()
{
int num ,digit_at_ones_place;
printf("\n Enter any number:");
scanf("%d",&num);
digit_at_ones_place =num%10;
printf("\n The digit at ones place of %d is %d",num,digit_at_ones_place );
return 0;
}*/

//5.Write a program to swap two numbers using a temporary variable
/*#include<stdio.h>
int main( )
{
int num1,num2,temp;
printf("\n Enter the first number :");
scanf("%d",&num1);
printf("\n Enter the second number :");
scanf("%d",&num2);
temp=num1;
num1=num2;
num2=temp;
printf("\n The first number is %d",num1);
printf("\n The second number is %d \n",num2);
return 0;
}*/

//6.write a program to swap two numbers without using a temporary variable.
/*#include <stdio.h>
int main( )
{
int num1,num2;
printf("\n Enter the first number:");
scanf("%d",&num1);

printf("\n Enter the second number:");
scanf("%d",&num2);

num1=num1+num2;
num2=num1-num2;
num1=num1-num2;

printf("\n The first number is %d",num1);
printf("\n The second number is %d \n" ,num2);
return 0;
}*/

//7.write a program to convert degrees fahrenheit into degrees celsius.
/*#include <stdio.h>
int main( )
{
float fahrenheit, celsius;
printf("\n Enter the temperature in fahrenheit:");
scanf("%f", &fahrenheit);
celsius=(0.56)*(fahrenheit-32);
printf("\n Temperature in degree celsius =%f \n" , celsius);
return 0;
}*/

//8.write a program that displays the size of every data type.
/*
#include <stdio.h>
int main( )
{
printf("\n The size of short integer is :%d", sizeof (short int ));
printf("\n The size of unsigned integer is :%d", sizeof (unsigned int ));
printf("\n The size of signed integer is :%d", sizeof (signed int ));
printf("\n The size of integer is :%d", sizeof (int ));
printf("\n The size of long integer is :%d", sizeof (long int ));
printf("\n The size of chracter is :%d", sizeof (char));
printf("\n The size of unsigned charater is :%d", sizeof (unsigned char));
printf("\n The size of signed chracter is :%d", sizeof (signed
char));
printf("\n The size of floating point number is :%d", sizeof
(float));
printf("\n The size of double number is :%d \n", sizeof (double));
return 0;
}
*/

