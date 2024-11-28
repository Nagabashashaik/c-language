//given number is even or odd:

/*
#include<stdio.h>
void main(){
int x;
printf("Enter x value:");
scanf("%d",&x);
if(x%2==0){
printf("%d is a even number\n",x);
}
else{
printf("%d is a odd number\n",x);
}  
}

*/

//Arthematic operators:
/*
#include<stdio.h>
#include<math.h>
void main(){
int x,y;
char operation;
printf("Enter the operation:");
scanf("%c",&operation);
printf("Enter a and b value:");
scanf("%d%d",&x,&y);
switch(operation){
case '+':printf("%d+%d=%d",x,y,x+y);
break;

case '-':printf("%d-%d=%d",x,y,x-y);
break;

case '*':printf("%d*%d=%d",x,y,x*y);
break;

case '/':printf("%d/%d=%d",x,y,x/y);
break;
case '%':printf("%d %% %d=%d",x,y,x%y);
break;

case '^':printf("%d^%d=%f",x,y,pow(x,y));
break;

default:printf("enter + - * %% / ^ only/---");cl
}
}
*/


//swap two numbers using extra variable:
/*
#include<stdio.h>
void main(){
int x,y,z;
printf("Enter x & y values:");
scanf("%d%d",&x,&y);
printf("Before swapping:-a=%d,b=%d \n",x,y);
z=x;
x=y;
y=z;
printf("After swapping:-a=%d,b=%d \n",x,y);
}
*/

//swap two numbers without-using extra variable:
/*
#include<stdio.h>
void main(){
int x,y;
printf("Enter x & y values:");
scanf("%d%d",&x,&y);
printf("Before swapping:-a=%d,b=%d \n",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("After swapping:-a=%d,b=%d \n",x,y);
}
*/

//check the given number is a perfect square or not:
/*
#include<stdio.h>
void main(){
int x,i;
char z;
printf("Enter x value:");
scanf("%d",&x);

for(i=1;i<=x;i+=1){
if(i*i==x){
z='p';
}
}
if(z=='p'){
printf("%d is a perfect square number\n",x);
}
else{
printf("%d is not a perfect square number\n",x);
}
}
*/

//Write a program to find out whether the given number is positive, negative or zero value.
/*
#include<stdio.h>
void main(){
int x;
printf("enter x value:");
scanf("%d",&x);
if(x>0){
printf("%d is a positive number\n",x);
}
else if(x<0){
printf("%d is a negative number\n",x);
}
else{
printf("%d is a zero\n",x);
}
}
*/


/*
#include <stdio.h>
void main(){
const int a=10;//This is a decimal value constant
printf("%d\n",a);
const int b=0123;//This is a octal value constant preceeded by zero
printf("%d\n",b);
const int c=0x123;//this is a hexadecimal value constant which is preceeded by 0x
printf("%d\n",c);
}
*/

//square:
/*
#include<stdio.h>
void main(){
char x='*';
int i,j;
for(i=1;i<=5;i++){
for(j=1;j<=5;j++){
printf(" %c",x);
}
printf("\n");
}
}
*/


//printing a square pattern:
/*
#include<stdio.h>
void main(){
int n=6,i,j;
char x='*';
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
printf(" %c",x);
}
printf("\n");
}
}
*/

//assignment:2  INcreasing Triangle pattern:
/*
#include<stdio.h>
void main(){
int i,j,n=5;
char x='*';
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
printf(" %c",x);
}
printf("\n");
}
}
*/

//assignment-2:  Decreasing Triangle pattern:
/*
#include<stdio.h>
void main(){
int i,j,n=5;
char x='*';
for(i=1;i<=n;i++){
for(j=i;6-j;j++){
printf(" %c",x);
}
printf("\n");
}
}
*/


//Right Triangle:
/*
#include<stdio.h>
void main(){
int i,j,k,n=5;
char x='*';

for(i=1;i<=n;i++){
for(j=i;6-j;j++){
printf(" ");
}
for(k=1;k<=i;k++){
printf("%c",x);
}
printf("\n");
}
}
*/

//Right-Sided Triangle:
/*
#include<stdio.h>
void main(){
int i,j,k,n=5;
char x='*';
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
printf(" ");
}
for(k=i;6-k;k++){
printf("%c",x);
}
printf("\n");
}
}
*/

//Hill pattern:
/*
#include<stdio.h>
void main(){
int i,j,k,l,n=5;
char x='*';
for(i=1;i<=n;i++){
for(j=i;6-j;j++){
printf("  ");
}
for(k=1;k<=i;k++){
printf(" %c",x);
}
for(l=1;l<i;l++){
printf(" %c",x);
}
printf("\n");
}
}
*/


//assignment-2:  printing same numbers in a row
/*
#include<stdio.h>
void main(){
int i,j,n=5;
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
printf("%d",i);
}
printf("\n");
}
}
*/


//assignment-2:  printing different numbers in a row or same num in a column:
/*
#include<stdio.h>
void main(){
int i,j,n=5;
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
printf(" %d",j);
}
printf("\n");
}
}
*/


//assignment-2:  printing different numbers in a row or same num in a column:
/*
#include<stdio.h>
void main(){
int i,j,n=5;
for(i=1;i<=n;i++){
for(j=5;j>=i;j--){
printf(" %d",j);
}
printf("\n");
}
}
*/


//program to print factors of a given number:
/*
#include<stdio.h>
void main(){
int num,i;
printf("Enter any number:");
scanf("%d",&num);
for(i=1;i<=num;i++){
if(num%i==0){
printf("%d\n",i);
}
}
}
*/


//program to find the given number is palindrome num or not:
/*
#include<stdio.h>
void main(){
int num,rev,last,temp;
printf("enter a num:");
scanf("%d",&num);
temp=num;
while(num>0){
last=num%10;
rev=rev*10+last;
num=num/10;
}
if(temp==rev){
printf("%d is a palindrome number\n",temp);
}
else{
printf("%d is not a palindrome number\n",temp);
}
}
*/

//program to print fabinocci series:
/*
#include<stdio.h>
void main(){
int a=0,b=1,sum,num,i;
printf("Enter a num:");
scanf("%d",&num);
for(i=1;i<=num;i++){
printf("%d ",sum);
a=b;
b=sum;
sum=a+b;
}
}
*/

/*printf_1:
	printf("1\n");
	goto print_2;
print_2:
	printf("2\n");
	goto print_3;
print_3:
	printf("3\n");
	goto print_4;
print_4:
	printf("4\n");
	goto print_5;
print_5:
	printf("5\n");
	goto print_6;
print_6:
	printf("6\n");
	goto print_7;
print_7:
	printf("7\n");
	goto print_8;
print_8:
	printf("8\n");
	goto print_9;
print_9:
	printf("9\n");
	goto print_10;
print_10:
	printf("10\n");
	goto end;
end:
	printf("\n");




}
*/
/*
#include<stdio.h>
void main(){
int i,j;
char x[]="RGUKT";
for(i=0;i<=5;i++){
for(j=0;j<=i;j++){
printf("%c",x[i]);
}
printf("\n");
}
}*/


/*
#include<stdio.h>
void main(){
int i,j;
char x[]="RGUKT";
for(i=0;i<=5;i++){
for(j=0;j<=i;j++){
printf("%c",x[j]);
}
printf("\n");
}
}*/

/*
#include<stdio.h>
void main(){
int i,j,n=5;
for(i=1;i<=5;i++){
for(j=1;j<=i;j++){
printf("%d",j);
}
printf("\n");
}
}*/

//Assignment-2: tables from 1-10;
/*
#include<stdio.h>
void main(){
int n=10,i,j;
for(i=1;i<=n;i++){
printf("%2d ",i);
for(j=1;j<=n;j++){
printf("%2d ",i*j);
}
printf("\n");
}
}
*/




/*
#include<stdio.h>
void main(){
int n=5,i,i1,j,j1,k,k1,l,l1,m,m1;
for(i=0;i<=n;i++){
for(j=i;j<=n;j++){
printf(" ");
}
printf("*");
for(k=1;k<=i;k++){
printf(" ");
}
for(l=1;l<=i;l++){
printf(" ");
}
printf("*");
printf("\n");
}

for(i1=0;i1<=n;i1++){
for(j1=1;j1<=i1;j1++){
printf(" ");
}
printf("*");
for(k1=i1;k1<=n-1;k1++){
printf(" ");
}
for(l1=i1;l1<=n;l1++){
printf(" ");
}
printf("*");
printf("\n");
}
}*/

/*
//arrays:assigning values to an array
#include<stdio.h>
void main(){
int x[10]={10,20,30,40,50,60,70,80,90,100};
printf("x[0]=%d\n",x[0]);
printf("x[1]=%d\n",x[1]);
printf("x[2]=%d\n",x[2]);
printf("x[3]=%d\n",x[3]);
printf("x[4]=%d\n",x[4]);
printf("x[5]=%d\n",x[5]);
printf("x[6]=%d\n",x[6]);
printf("x[7]=%d\n",x[7]);
printf("x[8]=%d\n",x[8]);
printf("x[9]=%d\n",x[9]);
}*/

/*
//accessing an array values using index values:
#include<stdio.h>
void main(){
int x[5];
x[0]=10;
x[1]=20;
x[2]=30;
x[3]=40;
x[4]=50;
printf("x[0]=%d\n",x[0]);
printf("x[1]=%d\n",x[1]);
}
*/

/*
//printing the memeory location of an each element in an array:
#include<stdio.h>
void main(){
int x[5]={1,2,3,4,5};
printf("x[0]=%p\n",&x[0]);
printf("x[1]=%p\n",&x[1]);
printf("x[2]=%p\n",&x[2]);
printf("x[3]=%p\n",&x[3]);
printf("x[4]=%p\n",&x[4]);
}
*/


/*
//checking about this condition:
#include<stdio.h>
void main(){
int x[5]={5,6};
printf("x[0]=%d\n",x[0]);
printf("x[1]=%d\n",x[1]);
printf("x[2]=%d\n",x[2]);
printf("x[3]=%d\n",x[3]);
printf("x[4]=%d\n",x[4]);
}
*/

/*
#include<stdio.h>
void main(){
int x[]={5,6};
printf("x[0]=%d\n",x[0]);
printf("x[1]=%d\n",x[1]);
printf("x[2]=%d\n",x[2]);
printf("x[3]=%d\n",x[3]);
printf("x[4]=%d\n",x[4]);
}
*/

//updating an array:
/*
#include<stdio.h>
void main(){
int x[5]={5,4,6,2,1};
x[0]=100;
x[3]=200;
printf("x[0]=%d\n",x[0]);
printf("x[1]=%d\n",x[1]);
printf("x[2]=%d\n",x[2]);
printf("x[3]=%d\n",x[3]);
printf("x[4]=%d\n",x[4]);
}
*/

//arrays using loops:
/*
#include<stdio.h>
void main(){
int x[5]={5,4,6,2,1};
int i;
for(i=0;i<5;i++){
printf("x[i]=%d\n",x[i]);
}
}
*/


//arrays:dealing with charecters
/*
#include<stdio.h>
void main(){
int x[4]={'n','a','g','a'};
printf("%c\n",x[0]);
printf("%c\n",x[1]);
printf("%c\n",x[2]);
printf("%c\n",x[3]);
}
*/

/*
//printing an array by taking from the user:
#include<stdio.h>
void main(){
int n,i,j,k;
printf("enter the value of n:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("enter %d value:",i);
scanf("%d",&k);
a[i]=k;
}
for(j=0;j<n;j++){
printf("a[%d]=%d\n",j,a[j]);
}
}
*/

/*
//sum of two arrays:
#include<stdio.h>
void main(){
int a[5]={1,2,3,4,5};
int b[5]={1,2,3,4,5};
int sum[5];
int i,j;
for(i=0;i<5;i++){
int num=a[i]+b[i];
sum[i]=num;
}
for(j=0;j<5;j++){
printf("%d\n",sum[j]);
}
}
*/


//pattern:
/*
#include<stdio.h>
void main(){
int i,j,k,l=1,m,n=1,o=1,p=1;
for(i=1;i<=5;i++){
for(j=i;j<=5;j++){
printf(" ");
}
for(k=1;k<=i;k++){
printf("%d",k);
}
if(i>1){
while(l<=k-2){
printf("%d",l);
l++;
}
}
if(i>2){
while(n<=k-3){
printf("%d",n);
n++;
}
}
if(i>3){
while(o<=k-4){
printf("%d",o);
o++;
}
}
if(i>4){
while(p<=k-5){
printf("%d",p);
p++;
}
}
printf("\n");
}
}
*/


//arrays:reversing an array
/*
#include<stdio.h>
void main(){
int n,i,j,k,l,m=0;
printf("enter n value:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("Enter value %d :",i);
scanf("%d",&a[i]);
}
printf("The array is\n");
for(j=0;j<5;j++){
printf("x[%d]=%d\n",j,a[j]);
}
}
*/

//single dimensional arrays:for char data-type
/*
#include<stdio.h>
void main(){
char a[5]={'r','g','u','k','t'};
printf("%c\n",a[0]);
printf("%c\n",a[1]);
printf("%c\n",a[2]);
printf("%c\n",a[3]);
printf("%c\n",a[4]);
}*/


//Two dimensional arrays:for char data-type:
/*
#include<stdio.h>
void main(){
char a[2][2]={'n','a','g','a'};
printf("%c\n",a[0][0]);
printf("%c\n",a[0][1]);
printf("%c\n",a[1][0]);
printf("%c\n",a[1][1]);
}
*/


//assigning values in another way:
/*
#include<stdio.h>
void main(){
int x[2][3]={{10,20,30},{40,50,60}};
printf("x[0][0]=%d",x[0][0]);
printf("x[0][1]=%d",x[0][1]);
}
*/


//creating and printing strings in an array:
/*
#include<stdio.h>
void main(){
char x[3][20]={"computer","science","engineering"};
int i;
for(i=0;i<=3;i++){
printf("%s\n",x[i]);
}
}
*/


//another way of declaring and initializing strings in an array
/*
#include<stdio.h>
void main(){
char *x[]={"computer","science","emgineering"};
printf("x[0]=%s\n",x[0]);
printf("x[1]=%s\n",x[1]);
printf("x[2]=%s\n",x[2]);
}
*/


//Assignment given by sir:using pointers
/*
#include<stdio.h>
void main(){
int i,roll;
char *x[]={
"please enter roll no from 1 to 90 only/-\n",
"ID:O211064\nNAME:Mala Sreeram\nMARKS:64\n",
"ID:O220010\nNAME:Kondapavuluri Yasaswini\nMARKS:100\n",
"ID:O220013\nNAME:Shaik Rijvana\nMARKS:73\n",
"ID:O220015\nNAME:PVN Madhu Hemanth\nMARKS:75\n",
"ID:O220027\nNAME:P.Rushitha\nMARKS:87\n",
"ID:O220070\nNAME:K.Narasimha Reddy\nMARKS:70\n",
"ID:O220082\nNAME:MS.Sudeep\nMARKS:82\n",
"ID:O220101\nNAME:T.Shivaleela\nMARKS:81\n",
"ID:O220109\nNAME:K.Lakshmi Prasanna\nMARKS:89\n",
"ID:O220118\nNAME:N.BhavyaShree\nMARKS:88\n",
"ID:O220121\nNAME:K.LakshmiPrasanna\nMARKS:71\n",
"ID:O220142\nNAME:E.Asritha\nMARKS:58\n",
"ID:O220151\nNAME:MV.Brahmendra Kumar\nMARKS:49\n",
"ID:O220160\nNAME:Y.Naga Mallishwara Reddy\nMARKS:40\n",
"ID:O220172\nNAME:M.Akshila\nMARKS:72\n",
"ID:O220184\nNAME:B.Akhilandeswari\nMARKS:84\n",
"ID:O220190\nNAME:D.Deepika\nMARKS:90\n",
"ID:O220193\nNAME:N.Keerthi\nMARKS:93\n",
"ID:O220226\nNAME:A.Anitha\nMARKS:74\n",
"ID:O220256\nNAME:P.Rahul\nMARKS:56\n",
"ID:O220276\nNAME:J.Uma MAheswari Bai\nMARKS:76\n",
"ID:O220285\nNAME:S.jyothi\nMARKS:85\n",
"ID:O220290\nNAME:P.Shanmuka Lakshmi\nMARKS:90\n",
"ID:O220309\nNAME:M.Bilqueen\nMARKS:91\n",
"ID:O220310\nNAME:J.Manisharma\nMARKS:FAIL\n",
"ID:O220321\nNAME:G.Sneha\nMARKS:79\n",
"ID:O220330\nNAME:D.Raghavi\nMARKS:70\n",
"ID:O220348\nNAME:J.Srilakshmi\nMARKS:FAIL\n",
"ID:O220401\nNAME:J.Teja\nMARKS:99\n",
"ID:O220407\nNAME:D.Sowmya\nMARKS:93\n",
"ID:O220415\nNAME:K.Ramakrishna\nMARKS:85\n",
"ID:O220830\nNAME:M.NagaLakshmi\nMARKS:70\n",
"ID:O220431\nNAME:K.DurgaBhavani\nMARKS:69\n",
"ID:O220436\nNAME:M.Sreenivasulu\nMARKS:64\n",
"ID:O220451\nNAME:K.Charishma\nMARKS:51\n",
"ID:O220456\nNAME:A.SivaKumar\nMARKS:56\n",
"ID:O220458\nNAME:D.Reshma\nMARKS:92\n",
"ID:O220459\nNAME:K.Gopichandu\nMARKS:59\n",
"ID:O220468\nNAME:M.Lakshmi Pavani\nMARKS:68\n",
"ID:O220486\nNAME:G.Yamini Naga Durga\nMARKS:86\n",
"ID:O220505\nNAME:P.Pavani\nMARKS:95\n",
"ID:O220518\nNAME:Shaik Nagabasha\nMARKS:81\n",
"ID:O220519\nNAME:T.Venkata Vasavi\nMARKS:81\n",
"ID:O220546\nNAME:SD.Iman\nMARKS:54\n",
"ID:O220547\nNAME:SK.Sameera\nMARKS:53\n",
"ID:O220557\nNAME:k.Ashwitha\nMARKS:57\n",
"ID:O220559\nNAME:L.Pujitha\nMARKS:59\n",
"ID:O220564\nNAME:y.Sumanjali\nMARKS:64\n",
"ID:O220581\nNAME:T.Kulayappa\nMARKS:81\n",
"ID:O220597\nNAME:KY.Priyadarshini\nMARKS:97\n",
"ID:O220608\nNAME:Sk.Arifa Kausar\nMARKS:92\n",
"ID:O220615\nNAME:G.Niharika\nMARKS:85\n",
"ID:O220627\nNAME:P.Sharuk Kahan\nMARKS:73\n",
"ID:O220643\nNAME:K.Sowmya\nMARKS:100\n",
"ID:O220651\nNAME:N.Yaswanth\nMARKS:51\n",
"ID:O220684\nNAME:T.Kalyani\nMARKS:84\n",
"ID:O220712\nNAME:MVL.Sai Nikitha\nMARKS:88\n",
"ID:O220727\nNAME:K.Kavya\nMARKS:73\n",
"ID:O220729\nNAME:K.DurgaSree\nMARKS:71\n",
"ID:O220756\nNAME:R.Charan Raj\nMARKS:56\n",
"ID:O220771\nNAME:B>Pravalika\nMARKS:71\n",
"ID:O220814\nNAME:M.Rakshitha\nMARKS:86\n",
"ID:O220818\nNAME:K.Mariyamma\nMARKS:82\n",
"ID:O220849\nNAME:N.Mouvya Sri\nMARKS:51\n",
"ID:O220879\nNAME:Sk.Sabeeha\nMARKS:79\n",
"ID:O220885\nNAME:K.Siddhartha\nMARKS:85\n",
"ID:O220931\nNAME:MV.Naga NAvya\nMARKS:69\n",
"ID:O220956\nNAME:S.Shanuka Sasi\nMARKS:56\n",
"ID:O220958\nNAME:Y.Eswari Kavitha\nMARKS:58\n",
"ID:O220961\nNAME:P.Navya Sree\nMARKS:61\n",
"ID:O221002\nNAME:C.Raju Mohan\nMARKS:98\n",
"ID:O221009\nNAME:A.Navven Naidu\nMARKS:91\n",
"ID:O221031\nNAME:K.Kavya Prasanna\nMARKS:69\n",
"ID:O221055\nNAME:C.Harshitha\nMARKS:55\n",
"ID:O221088\nNAME:B.Bhavana\nMARKS:88\n",
"ID:O221099\nNAME:B.Sai Pujitha\nMARKS:99\n",
"ID:O221148\nNAME:M.Sivani\nMARKS:52\n",
"ID:S220011\nNAME:B.Pujitha\nMARKS:89\n",
"ID:S220109\nNAME:D.Akanksha\nMARKS:91\n",
"ID:S220231\nNAME:T.Naga Venkata Pujitha\nMARKS:69\n",
"ID:S22040\nNAME:Y.Jyoshitha\nMARKS:100\n",
"ID:S220586\nNAME:A.Amuktha Malyada\nMARKS:86\n",
"ID:S220834\nNAME:SD.Khasim Shahid\nMARKS:66\n",
"ID:O220032\nNAME:Y.Madhavi\nMARKS:68\n",
"ID:O220680\nNAME:G.Baby\nMARKS:80\n",
"ID:O220839\nNAME:C.Sumanth Raj Peter\nMARKS:61\n",
"ID:O220202\nNAME:G.Jahnavi\nMARKS:98\n",
"ID:O220485\nNAME:S.Akshitha\nMARKS:85\n",
"ID:O220340\nNAME:K.Jahnavi\nMARKS:60\n",
"ID:O211077\nNAME:B.Vyshnavi\nMARKS:77\n",
"ID:O220102\nNAME:CH.Divya Sri\nMARKS:98\n",
};
printf("Enter any roll no:");
scanf("%d",&roll);
if(roll>91 && roll<=0){
printf("please enter roll numbers upto 1-91 only/-");
}
else{
printf("%s\n",x[roll]);
}
}
*/


//assignement given by sir:using two dimensional arrays
/*
#include<stdio.h>
void main(){
int roll;
char x[100][150]={"please enter roll no from 1 to 90 only/-\n",
"ID:O211064\nNAME:Mala Sreeram\nMARKS:64\n",
"ID:O220010\nNAME:Kondapavuluri Yasaswini\nMARKS:100\n",
"ID:O220013\nNAME:Shaik Rijvana\nMARKS:73\n",
"ID:O220015\nNAME:PVN Madhu Hemanth\nMARKS:75\n",
"ID:O220027\nNAME:P.Rushitha\nMARKS:87\n",
"ID:O220070\nNAME:K.Narasimha Reddy\nMARKS:70\n",
"ID:O220082\nNAME:MS.Sudeep\nMARKS:82\n",
"ID:O220101\nNAME:T.Shivaleela\nMARKS:81\n",
"ID:O220109\nNAME:K.Lakshmi Prasanna\nMARKS:89\n",
"ID:O220118\nNAME:N.BhavyaShree\nMARKS:88\n",
"ID:O220121\nNAME:K.LakshmiPrasanna\nMARKS:71\n",
"ID:O220142\nNAME:E.Asritha\nMARKS:58\n",
"ID:O220151\nNAME:MV.Brahmendra Kumar\nMARKS:49\n",
"ID:O220160\nNAME:Y.Naga Mallishwara Reddy\nMARKS:40\n",
"ID:O220172\nNAME:M.Akshila\nMARKS:72\n",
"ID:O220184\nNAME:B.Akhilandeswari\nMARKS:84\n",
"ID:O220190\nNAME:D.Deepika\nMARKS:90\n",
"ID:O220193\nNAME:N.Keerthi\nMARKS:93\n",
"ID:O220226\nNAME:A.Anitha\nMARKS:74\n",
"ID:O220256\nNAME:P.Rahul\nMARKS:56\n",
"ID:O220276\nNAME:J.Uma MAheswari Bai\nMARKS:76\n",
"ID:O220285\nNAME:S.jyothi\nMARKS:85\n",
"ID:O220290\nNAME:P.Shanmuka Lakshmi\nMARKS:90\n",
"ID:O220309\nNAME:M.Bilqueen\nMARKS:91\n",
"ID:O220310\nNAME:J.Manisharma\nMARKS:FAIL\n",
"ID:O220321\nNAME:G.Sneha\nMARKS:79\n",
"ID:O220330\nNAME:D.Raghavi\nMARKS:70\n",
"ID:O220348\nNAME:J.Srilakshmi\nMARKS:FAIL\n",
"ID:O220401\nNAME:J.Teja\nMARKS:99\n",
"ID:O220407\nNAME:D.Sowmya\nMARKS:93\n",
"ID:O220415\nNAME:K.Ramakrishna\nMARKS:85\n",
"ID:O220830\nNAME:M.NagaLakshmi\nMARKS:70\n",
"ID:O220431\nNAME:K.DurgaBhavani\nMARKS:69\n",
"ID:O220436\nNAME:M.Sreenivasulu\nMARKS:64\n",
"ID:O220451\nNAME:K.Charishma\nMARKS:51\n",
"ID:O220456\nNAME:A.SivaKumar\nMARKS:56\n",
"ID:O220458\nNAME:D.Reshma\nMARKS:92\n",
"ID:O220459\nNAME:K.Gopichandu\nMARKS:59\n",
"ID:O220468\nNAME:M.Lakshmi Pavani\nMARKS:68\n",
"ID:O220486\nNAME:G.Yamini Naga Durga\nMARKS:86\n",
"ID:O220505\nNAME:P.Pavani\nMARKS:95\n",
"ID:O220518\nNAME:Shaik Nagabasha\nMARKS:81\n",
"ID:O220519\nNAME:T.Venkata Vasavi\nMARKS:81\n",
"ID:O220546\nNAME:SD.Iman\nMARKS:54\n",
"ID:O220547\nNAME:SK.Sameera\nMARKS:53\n",
"ID:O220557\nNAME:k.Ashwitha\nMARKS:57\n",
"ID:O220559\nNAME:L.Pujitha\nMARKS:59\n",
"ID:O220564\nNAME:y.Sumanjali\nMARKS:64\n",
"ID:O220581\nNAME:T.Kulayappa\nMARKS:81\n",
"ID:O220597\nNAME:KY.Priyadarshini\nMARKS:97\n",
"ID:O220608\nNAME:Sk.Arifa Kausar\nMARKS:92\n",
"ID:O220615\nNAME:G.Niharika\nMARKS:85\n",
"ID:O220627\nNAME:P.Sharuk Kahan\nMARKS:73\n",
"ID:O220643\nNAME:K.Sowmya\nMARKS:100\n ",
"ID:O220651\nNAME:N.Yaswanth\nMARKS:51\n",
"ID:O220684\nNAME:T.Kalyani\nMARKS:84\n",
"ID:O220712\nNAME:MVL.Sai Nikitha\nMARKS:88\n",
"ID:O220727\nNAME:K.Kavya\nMARKS:73\n",
"ID:O220729\nNAME:K.DurgaSree\nMARKS:71\n",
"ID:O220756\nNAME:R.Charan Raj\nMARKS:56\n",
"ID:O220771\nNAME:B.Pravalika\nMARKS:71\n",
"ID:O220814\nNAME:M.Rakshitha\nMARKS:86\n",
"ID:O220818\nNAME:K.Mariyamma\nMARKS:82\n",
"ID:O220849\nNAME:N.Mouvya Sri\nMARKS:51\n",
"ID:O220879\nNAME:Sk.Sabeeha\nMARKS:79\n",
"ID:O220885\nNAME:K.Siddhartha\nMARKS:85\n",
"ID:O220931\nNAME:MV.Naga NAvya\nMARKS:69\n",
"ID:O220956\nNAME:S.Shanuka Sasi\nMARKS:56\n",
"ID:O220958\nNAME:Y.Eswari Kavitha\nMARKS:58\n",
"ID:O220961\nNAME:P.Navya Sree\nMARKS:61\n",
"ID:O221002\nNAME:C.Raju Mohan\nMARKS:98\n",
"ID:O221009\nNAME:A.Navven Naidu\nMARKS:91\n",
"ID:O221031\nNAME:K.Kavya Prasanna\nMARKS:69\n",
"ID:O221055\nNAME:C.Harshitha\nMARKS:55\n",
"ID:O221088\nNAME:B.Bhavana\nMARKS:88\n",
"ID:O221099\nNAME:B.Sai Pujitha\nMARKS:99\n",
"ID:O221148\nNAME:M.Sivani\nMARKS:52\n",
"ID:S220011\nNAME:B.Pujitha\nMARKS:89\n",
"ID:S220109\nNAME:D.Akanksha\nMARKS:91\n",
"ID:S220231\nNAME:T.Naga Venkata Pujitha\nMARKS:69\n",
"ID:S22040\nNAME:Y.Jyoshitha\nMARKS:100\n",
"ID:S220586\nNAME:A.Amuktha Malyada\nMARKS:86\n",
"ID:S220834\nNAME:SD.Khasim Shahid\nMARKS:66\n",
"ID:O220032\nNAME:Y.Madhavi\nMARKS:68\n",
"ID:O220680\nNAME:G.Baby\nMARKS:80\n",
"ID:O220839\nNAME:C.Sumanth Raj Peter\nMARKS:61\n",
"ID:O220202\nNAME:G.Jahnavi\nMARKS:98\n",
"ID:O220485\nNAME:S.Akshitha\nMARKS:85\n",
"ID:O220340\nNAME:K.Jahnavi\nMARKS:60\n",
"ID:O211077\nNAME:B.Vyshnavi\nMARKS:77\n",
"ID:O220102\nNAME:CH.Divya Sri\nMARKS:98\n",
};
printf("Enter any roll no:");
scanf("%d",&roll);
if(roll>91 && roll<=0){
printf("Enter roll no upto 1-91 only/-");
}
else{
printf("%s",x[roll]);
}
}
*/


/*
#include<stdio.h>
void main(){
int i,j,m,n,l,k;
printf("Enter n value:");
scanf("%d%d",&m,&n);
int x[m][n];
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("Enter [%d][%d] value:",i,j);
scanf("%d",&x[i][j]);
}
}
for(l=0;l<m;l++){
for(k=0;k<n;k++){
printf("[%d][%d]=%d\n",l,k,x[l][k]);
}
}
}
*/

/*taking 3-dimensional array values
#include<stdio.h>
void main(){
int i,j,k;
int x[2][2][2]={1,2,3,4,5,6,7,8};
for(i=0;i<2;i++){
for(j=0;j<2;j++){
for(k=0;k<2;k++){
printf("x[%d][%d][%d]=%d\n",i+1,j,k,x[i][j][k]);
}
}
}
}
*/

//3-dimensional arrays:taking array values from the user and printing those values:
/*
#include<stdio.h>
void main(){
int d,m,n,i,j,k,p,q,r;
printf("Enter i,j,k values:");
scanf("%d%d%d",&d,&m,&n);
int x[d][m][n];
for(i=0;i<d;i++){
for(j=0;j<m;j++){
for(k=0;k<n;k++){
printf("enter values of [%d][%d][%d]=",i,j,k);
scanf("%d",&x[i][j][k]);
}
}
}
for(p=0;p<d;p++){
for(q=0;q<m;q++){
for(r=0;r<n;r++){
printf("x[%d][%d][%d]=%d\n",p+1,q,r,x[p][q][r]);
}
}
}
}
*/



/*inserting an element in an array:
#include<stdio.h>
void main(){
int x[4]={10,20,30,40};
int pos,element,n,i;
printf("enter the element:");
scanf("%d",&element);
printf("enter the position:");
scanf("%d",&pos);
if(pos>=0 && pos<=4){
for(i=4;i>pos;i--){
x[i]=x[i-1];
}
x[pos]=element;
}
else{
printf("invalid index");
}
printf("x[1]=%d\n",x[1]);
printf("x[2]=%d\n",x[2]);
printf("x[3]=%d\n",x[3]);
printf("x[4]=%d\n",x[4]);
printf("x[5]=%d\n",x[5]);
}
*/




//Assignment given by sir:using 2-dimensional arrays
/*
#include<stdio.h>
void main(){
int i,j,day=1,week=1;
float x[15][2]={
32.33,
33.23,
33.32,
31.44,
34.90,
33.11,
32.88,
33.23,
33.32,
31.44,
34.90,
32.33,
33.23,
33.32,
31.44,
34.90,
33.11,
32.88,
33.23,
33.32,
32.33,
33.23,
33.32,
31.44,
34.90,
32.33,
33.23,
33.32,
31.44,
34.90,
};
for(i=0;i<15;i++){
for(j=0;j<2;j++){
printf("day %d week %d Temp is %.2f\n",day,week,x[i][j]);
day+=1;
if(day==8 || day==15 || day==22 || day==29){
week+=1;
}
}
}
}

*/


//Assignment given by sir:using 3-dimensional arrays
/*
#include<stdio.h>
void main(){
int i,j,k,day=1,week=1;
float x[2][5][3]={
32.33,
33.23,
33.32,
31.44,
34.90,
33.11,
32.88,
33.23,
33.32,
31.44,
34.90,
32.33,
33.23,
33.32,
31.44,
34.90,
33.11,
32.88,
33.23,
33.32,
32.33,
33.23,
33.32,
31.44,
34.90,
32.33,
33.23,
33.32,
31.44,
34.90,
};
for(i=0;i<2;i++){
for(j=0;j<5;j++){
for(k=0;k<3;k++){
printf("day %d week %d Temp is %.2f\n",day,week,x[i][j][k]);
day+=1;
if(day==8 || day==15 || day==22 || day==29){
week+=1;
}
}
}
}
}
*/



//inserting an element in a particuular position:
/*
#include<stdio.h>
void main(){
int x[11]={1,2,3,4,5,6,7,8,9,10};
int pos,element,i,j,k;
printf("enter the number you want to insert:");
scanf(\\"%d",&element);
printf("Enter the position:");
scanf("%d",&pos);
printf("The array before insertion is:\n");
for(i=0;i<10;i++){
printf("x[%d]=%d\n",i,x[i]);
}

if(pos>=0 && pos<=10){
for(k=10;k>=pos;k--){
x[k+1]=x[k];
}
}
else{
printf("invalid position\n");
}

x[pos]=element;
printf("The array after the insertion of an element is:\n");
for(j=0;j<=10;j++){
printf("x[%d]=%d\n",j,x[j]);
}
}
*/



//deleting an element from an array:
/*
#include<stdio.h>
void main(){
int x[10]={1,2,3,4,5,6,7,8,9,10};
int pos,i;
printf("enter the position that you want to delete:");
scanf("%d",&pos);

for(i=pos;i<10;i++){
x[i]=x[i+1];
}
printf("The array after deletion is:\n");
for(i=0;i<10;i++){
printf("x[%d]=%d\n",i,x[i]);
}
}
*/

/*
//Finding an element from an array:
#include<stdio.h>
void main(){
int x[10]={1,2,3,4,5,6,7,8,9,10};
int n,pos,found=0,i;
printf("Enter n value to search:");
scanf("%d",&n);
for(i=0;i<10;i++){
if(x[i]==n){
found=1;
pos=i;
printf("%d is found in array at %d position\n",n,pos);
break;
}
}
if(found==0){
printf("Element is not found in the array\n");
}
}
*/

//sum of two matrices:
/*
#include<stdio.h>
#include<stdlib.h>
void main(){
int rows1,cols1,rows2,cols2,sum_rows,sum_cols,i,j;
printf("Enter no.of rows and coloumns of matrix-1:");
scanf("%d%d",&rows1,&cols1);
int matrix1[rows1][cols1];
printf("Enter no.of rows and coloumns of matrix-2:");
scanf("%d%d",&rows2,&cols2);
int matrix2[rows2][cols2];
if(rows1!=rows2 || cols1!=cols2){
printf("no.of rows or cols of two matrices is not equal\n");
exit(0);
}
else{
sum_rows=rows1;
sum_cols=cols1;
}
int sum_matrix[sum_rows][sum_cols];

for(i=0;i<rows1;i++){
for(j=0;j<cols1;j++){
printf("Enter matrxix-1 of x[%d][%d]=",i,j);
scanf("%d",&matrix1[i][j]);
}
}

for(i=0;i<rows2;i++){
for(j=0;j<cols2;j++){
printf("Enter matrix-2 of x[%d][%d]=",i,j);
scanf("%d",&matrix2[i][j]);
}
}

printf("matrix-1 is:\n");
for(i=0;i<rows1;i++){
for(j=0;j<cols1;j++){
printf("%3d",matrix1[i][j]);
}
printf("\n");
}

printf("matrix-2 is:\n");
for(i=0;i<rows2;i++){
for(j=0;j<cols2;j++){
printf("%3d",matrix2[i][j]);
}
printf("\n");
}

for(i=0;i<rows2;i++){
for(j=0;j<cols2;j++){
sum_matrix[i][j]=matrix1[i][j]+matrix2[i][j];
}
}

printf("The resultant matrix is:\n");
for(i=0;i<sum_rows;i++){
for(j=0;j<sum_cols;j++){
printf("%3d",sum_matrix[i][j]);
}
printf("\n");
}

}

*/


//arrays:input taking in strings using scanf():

/*
#include<stdio.h>
void main(){
char x[10];
printf("Enter any str:");
scanf("%s",x);
printf("%s\n",x);
}
*/

//arrays:reading a line of text:
/*
#include<stdio.h>
void main(){
char x[20];
printf("Enter any line:");
scanf("%[^\n]",x);
printf("%s\n",x);
}
*/



//multiplication of two  arrays:{no.of cols in matrix-1 == no.of rows in matrix-2}
/*
#include<stdio.h>
#include<stdlib.h>
void main(){
int rows1,cols1,rows2,cols2,mul_rows,mul_cols;
int i,j,k;
printf("Enter no.of rows and cols of matrix-1:");
scanf("%d%d",&rows1,&cols1);
int matrix1[rows1][cols1];
printf("Enter no.of rows and cols of matrix-2:");
scanf("%d%d",&rows2,&cols2);
int matrix2[rows2][cols2];


if(cols1!=rows2){
printf("rows of matrix-1 and cols of matrix-2 are not equal or vice-versa" );
exit(0);
}
else{
mul_rows=rows1;
mul_cols=cols2;
}
int mul_matrix[mul_rows][mul_cols];

for(i=0;i<rows1;i++){
for(j=0;j<cols1;j++){
printf("enter x[%d][%d]=",i,j);
scanf("%d",&matrix1[i][j]);
}
}


for(i=0;i<rows2;i++){
for(j=0;j<cols2;j++){
printf("enter x[%d][%d]=",i,j);
scanf("%d",&matrix2[i][j]);
}
}


printf("matrix-1 is:\n");
for(i=0;i<rows1;i++){
for(j=0;j<cols1;j++){
printf("%d  ",matrix1[i][j]);
}
printf("\n");
}

printf("matrix-2 is:\n");
for(i=0;i<rows2;i++){
for(j=0;j<cols2;j++){
printf("%d  ",matrix2[i][j]);
}
printf("\n");
}


for(i=0;i<mul_rows;i++){
for(j=0;j<mul_cols;j++){
mul_matrix[i][j]=0;
for(k=0;k<mul_cols;k++){
mul_matrix[i][j]=mul_matrix[i][j]+matrix1[i][k]*matrix2[k][j];
}
}
}


printf("multiplication of two matrices is:\n");
for(i=0;i<mul_rows;i++){
for(j=0;j<mul_cols;j++){
printf("%d  ",mul_matrix[i][j]);
}
printf("\n");
}
}

*/



//strings with size and without size worked:
/*
#include<stdio.h>
void main(){
char x[]="RGUKT ONGOLE CAMPUS";
printf("%s\n",x);
}
*/


//char by char WORKED WITH SIZE AND WITHOUT SIZE:
/*
#include<stdio.h>
void main(){
char x[10]={'R','G','U','K','T',' ','O','N','G','O','L','E',' ','C','A','M','P','U','S'};
printf("%s\n",x);
}
*/



//Transpose of a matrix:
/*
#include<stdio.h>
void main(){
int rows,cols;
printf("enter no.of rows and cols:");
scanf("%d%d",&rows,&cols);
int matrix[rows][cols];
int res[rows][cols];
int i,j;


for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
printf("Enter x[%d][%d]=",i,j);
scanf("%d",&matrix[i][j]); 
}
}


printf("The matrix is:\n");
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
printf("%d  ",matrix[i][j]);
}
printf("\n");
}


for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
res[i][j]=matrix[j][i];
}
}


printf("Resultant matrix is:\n");
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
printf("%d  ",res[i][j]);
}
printf("\n");
}
}
*/


//strlen()
/*
#include<stdio.h>
#include<string.h>
void main(){
char x[]="RGUKT";
char y[]={'r','g','u','k','t','\0'};
int i;
i=strlen(x);
printf("str1 lenghth=%d\n",i);
int j;
j=strlen(x);
printf("st2 lenghth=%d\n",j);
}
*/

//strcpy()----1
/*
#include<stdio.h>
#include<string.h>
void main(){
char x[6]="RGUKT";
char y[10];
strcpy(y,x);
printf("str x=%s\n",y);
printf("str y=%s\n",y);
}
*/


//strcpy()----2(assigning value to string using strcpy())
/*
#include<stdio.h>
#include<string.h>
void main(){
char x[6];
strcpy(x,"RGUKT");
printf("str x=%s\n",x);
}
*/


//differnt way of using strcpy() function:
/*
#include<stdio.h>
#include<string.h>
void main(){
char x[6]="RGUKT";
char y[10];
strcpy(y,x);
printf("x string is=%s\n",x);
printf("y string is=%s\n",y);
char z[10]="ONGOLE";
strcpy(z,strcpy(x,y));
printf("z string is=%s\n",z);
}
*/




//taking string input from the user and printing the string using scanf() and printf() statements:

/*
#include<stdio.h>
void main()
{
char x[10];
printf("enter a string:");
scanf("%s",x);
printf("entered string is:-%s\n",x);

}

*/


//taking string input by char by char using scanf() and printing it:
//in one-dimensional arrays whenever you are using the loop it also counts the \n when you press enter i.e:becz scanf() has a drawback that it terminates the string when it found a delimeter charecter like newline(\n),spaces,etc...............

//so thats why it doesnt work properly to take char by char as a input:
/*
#include<stdio.h>
void main()
{
char x[5];
int i;
for(i=0;i<5;i++)
{
	scanf("%c",&x[i]);
}
printf("entered string is:-%s\n",x);
}
*/



//reading a line of text using edit set conversion code:
//whatever the charecter you are giving after the ^ charecter, if compiler find that charecter then it terminates the string:

/*
#include<stdio.h>
void main()
{
char x[50];
printf("enter a line of string:");
scanf("%[^\n]",x);
printf("entered line is:-%s\n",x);
}

*/

//printing the string using the puts() function:
/*
#include<stdio.h>
void main()
{
char x[10]="nagabasha";
puts("string is:");
puts(x);
}

*/


//single dimensioanal arrays using putchar and puts functions:
/*
#include<stdio.h>
void main()
{
char x[10]="rgukt";
putchar(x[0]);
puts("\n");
putchar(x[1]);
puts("\n");
putchar(x[2]);
puts("\n");
putchar(x[3]);
puts("\n");
putchar(x[4]);
puts("\n");
}
*/


//program for random number generator:
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
srand(time(0));
int randomNumber=rand()%10;
printf("random number=%d\n",randomNumber);
}
*/
//----------------------------------------------------------------
//                     ***FUNCTIONS IN C***
//----------------------------------------------------------------


//Addition function:
/*
#include<stdio.h>
int sum(int,int);//function prototype

void main(){
int x=10,y=20;
int x1=100,y1=200;

int sum(int a, int b){
printf("sum of %d and %d is %d\n",a,b,a+b);
}
sum(x,y);
sum(x1,y1);
}
*/



//addition function using the return statement:
/* 
#include<stdio.h>
int sum(int,int);//function prototype
void main(){
int x=10,y=20;
int sum(int a, int b){
return a+b;
}
int s=sum(x,y);
printf("%d\n",s);
}
*/


//void display() function:
/*
#include<stdio.h>
void display();
void main(){
void display(){
printf("Hello world! This is a display function\n");
}
display();
}
*/


 
//address operators:  %p and
//whenever you use %p it shows the address in hexadecimal form
/*
#include<stdio.h>
void main(){
int x=10;
printf("address of %d is %p\n",x,&x);
}
*/



//storing a particular variable's  address in another variable:

//in this example j is just storing the i variable's address only.but.j has another address
/*

#include<stdio.h>
void main(){
int i=20;
int* j=&i;
printf("i address=%p\n",&i);//printing the i variabe address
printf("j value=%p\n",j);//printing j value by using %p format specifier becz, j stored address of i thats why we used %p
printf("j address=%p\n",&j);//printing j variable address
}

*/


//printing the values using variable addresses:
/*
#include<stdio.h>
void main(){
int i=10;
printf("The value at i variable's address is %d\n",*(&i));//here I didn't print the value of i directly, I used the address of i variable to print thr i value
}
*/



//printing the values of a variable whoose address  is already stored in another variable:
/*
#include<stdio.h>
void main(){
int i=10;
int* j=&i;
printf("the value of i whose address is stored in j is %d\n",*j);
}
*/

//pointer concept for char and float:
/*
#include<stdio.h>
void main(){
char x='b';
float pi=3.14;
char* y=&x; 
float* z=&pi;
printf("the values of x by using its address is %c\n",*(&x));
printf("the values of pi by using its address is %.2f\n",*(&pi));
printf("the values of x which stores its address in y variable is %c\n",*y);
printf("the values of pi which stores its address in z variable is %.2f\n",*z);
}

*/



//addition function
//this is also calles call by values. 
/*
#include<stdio.h>
int sum(int,int);

int sum(int a,int b){ 
return a+b;
}
void main(){
int x=10,y=20;
printf("the sum of %d and %d is %d\n",x,y,sum(x,y));
}
*/



//can functions change inital value of a variable:
//actually how functions work is it takes the copy of the original variable's value as a parametrs and then it perform the defined operations.
//in the below example,x value is not changed.when the copy the x values goes to the function it is just updated as 100 and then addition function is performed the operation and returned the final answer as 100+20 as 120
/*
#include<stdio.h>
int sum(int, int);

int sum(int a, int b){
a=100;
return a+b;
}

void main(){
int x=10,y=20;
printf("sum of %d and %d is %d\n",x,y,sum(x,y));
printf("x value=%d\n",x);
}
*/




//changing the original value of a variable using functions:
//we cannot change the vales directly as we seen in the above example,But whenevr we use the addresses of the variable it may be possible.
//in the below example,//int* a and int*b take the addreesses of x and y and *a changes the values of which variable's address is stored in a.
//this is also called as call by reference
/*
#include<stdio.h>
int sum(int*,int*);

int sum(int* a ,int* b){
*a=100;//changing the value of which variable address is stored in a 
return *a+*b;
}
void main(){
int x=10,y=20;
printf("%d\n",sum(&x,&y));
printf("x value=%d\n",x);
}

*/


//practice:write a program to get and address of an variables and use that address to print the value:
/*
#include<stdio.h>
void main(){
int x=100;
printf("address of x is %p\n",&x);
//one way:
printf("value at x using its address is %d\n",*(&x)); 
//another way:
int* y=&x;
printf("value at x is %d\n",*y);
}
*/

//agian pointer to pointer concept:
/*
#include<stdio.h>
void main(){
int x=10;
int* y=&x;//stores the address of x
int** z=&y;//stores the address of y
printf("values of x is %d\n",*y);//printing x value using y var
printf("values of x is %d\n",**z);//
printing x value using z var
}
*/ 


//------------------ARRAYS----------------------
//program to show values AND ADDRESS:
/*
#include<stdio.h>
void main(){
int x[]={1,2,3,4,5};
int i;
for(i=0;i<5;i++){
printf("value=%d,address=%p\n",x[i],&x[i]);
}
}
*/

//printing array values using pointers for integer type:
/*
#include<stdio.h>
void main(){
int x[]={10,20,30,40,50};
int* y=&x[0];
printf("%d\n",*y);
y++;//it increases upto one address to the another address 
printf("%d\n",*y);
y++;
printf("%d\n",*y);
y++;
printf("%d\n",*y);
y++;
printf("%d\n",*y);
}
*/

//printing array values using pointers for charecter type:
/*
#include<stdio.h>
void main(){
char x[]={'r','g','u','k','t'};
char* y=&x[0];
printf("%c\n",*y);
y++;
printf("%c\n",*y);
y++;
printf("%c\n",*y);
y++;
printf("%c\n",*y);
y++;
printf("%c\n",*y);
y++;
}

*/


//passing an array to a function and reverse all the array elements:
//important
/*
#include<stdio.h>
void print_array(int *,int);
void reverse_array(int *,int);


void print_array(int a[],int size){
int i;                       //function to print all array elements
for(i=0;i<size;i++){
printf("%d ",a[i]);
}
printf("\n");
}
 
 
 
 void reverse_array(int a[],int size){
 int i,temp;
 for(i=0;i<size/2;i++){
 temp=a[i];
 a[i]=a[size-i-1];
 a[size-i-1]=temp;
 }
 
 }


void main(){
int array[]={1,2,3,4,5};
print_array(array,5);
reverse_array(array,5);
print_array(array,5);
}
*/ 



//----------------strings-------------------------

//types of string assignments
/*
#include<stdio.h>
void main(){
char x[]={'n','a','g','a','\0'};
char y[6]={'r','g','u','k','t','\0'};
char z[]="nagabasha";    //whenever we use strings in double quotes we need not to put null charecter(\0)compiler automatically adds it

char b[10]="nagabasha";
printf("%s\n",x);
printf("%s\n",y);
printf("%s\n",z);
printf("%s\n",b);
}
*/


//taking string input from the user:using scanf()
//drawback:it terminates the string when it finds the spaces,newlines,deliminated charecters etc......
/*
#include<stdio.h>
void main(){
char x[10];
printf("enter any string:");
scanf("%s",x);
printf("entered string is:%s\n",x);
}
*/

//taking the user input using gets():
/*
#include<stdio.h>
void main(){
char x[10];
gets(x);//not working in this systems:
puts(x);
}
*/


//puts() and printf() differences ***important
//whenever you use printf() after it terminates/ completion of printing, the cursor is being placed in the same line

//but whenever you use puts() after it terminates/completion of printing, the cursor is being placed in the newline


/*
#include<stdio.h>
void main(){
printf("hello world");//after printing this, cursor places in same line and then it prints the next statement in the same line:
// OUTPUT: hello worldI am Basha
printf("I am Basha");
printf("\n");


puts("hello world");//after printing this, cursor places to the next line and then it prints the next statement in the next line:
//OUTPUT:  hello world 
//	   I am Basha
	 
puts("i am Basha");
}

*/ 




//Changing Strings:
//Basically changing string values after assining values is not possible/modifying 
///But whenever we use pointers concepts on strings, changing/modifyng the strings may be possible

//changing string values using indexes:
/*
#include<stdio.h>
void main(){
char x[10]="nagabasha";
char y[]={'r','g','u','k','t','\0'};
y[0]='o';
x[0]='b';
x[5]='u';
x[2]='n';
printf("%s\n",x);
printf("%s\n",y);
}
*/


//string functions:01)strlen()
/*
#include<stdio.h>
#include<string.h>
void main(){
char x[]="Nagabasha";
printf("%s\n",x); 		//prints the string
printf("%ld\n",strlen(x));	//returns the length of the string
int length;
length=strlen(x); 		//assigning to a variable
printf("length of the string is %d\n",length);
}

*/


//string functions:strcpy():
//syntax:strcpy(target_var,source_var)

/*
#include<stdio.h>
#include<string.h>
void main(){
char x[]="Nagabasha";
char y[15];
strcpy(y,x);			//copying x string to y 
printf("x=%s\n",x);
printf("y=%s\n",y);
char z[10];
strcpy(z,"RGUKT");//updating or adding a string is also possible with this method
printf("z=%s\n",z);
}

*/



//string functions:strcat()
//it is used to concatenate two strings:
/*
#include<stdio.h>
#include<string.h>
void main(){
char x[20]="iiit";
char y[10]="college";
printf("%s\n",strcat(x,y));  	//printing normally
printf("x=%s\n",x);		//y is concatinated to x and x becomes iiitcollege
printf("y=%s\n",y);		//printig y
}
*/



//string functions:strcmp()
//it compares the two strings
//it returns zero when string are matched/same otherwise it returns some value based on both string ascii values.
//it returns -ve value if the fisrt letter of a first string's ascii value is found first than other string's first letter  
//it returns +ve value if the first letter of a second string's ascii value is found first than other string's first letter  
//if first letter is it check the ascii value of seconf letter and then it is also same it goes to the next letter and check the next
/*
#include<stdio.h>
#include<string.h>
void main(){
char x[]="rgukt";
char y[]="|rgukt";
printf("%d\n",strcmp(x,y));
printf("%d\n",strcmp("appple","banana"));//here in apple 'a' is first letter and in banana 'b' is first letter,now compiler checks the two ascii values a has low ascii value so,it returns -1(because it is in first position)
printf("%d\n",strcmp("banana","apple"));//here in banana 'b' is first letter and in apple 'a' is first letter,now compiler checks the two ascii values a has low ascii value so,it returns 1(becz it is in second position)
}
*/




//taking the user string input as a charecter by charecter:
// in this program while we are taking the charecters we are pressing enter and this is why we didnt take proper input from the user
//why:it is the drwback of the scanf() function: when scanf() finds the deliminated charecters like \n,spaces,etc.....it terminates the string over there so,thats why we can't take proper input from the user using this program.....

/*
#include<stdio.h>
void main(){
char x[5];
int i;
for(i=0;i<5;i++){
scanf("%c",&x[i]);
}
printf("entered string is:%s\n",x);
} 
*/


//solution for above problem:it is not working in this terminal but,working in other softwares like vs code,sublime text,or other compilers
/*
#include<stdio.h>
void main(){
char x[5];
int i;
for(i=0;i<5;i++){
scanf("%c",&x[i]);
fflush(stdin);
}
x[5]='\0';
printf("entered string is:%s\n",x);
} 
*/


//write a program to find the length of the string without using the strlen() function:
/*
#include<stdio.h>
void main(){
char x[]="RGUKT-ONGOLE";
int i=0;
char c=x[i];
while(c!='\0'){
c=x[i];
i++;
}
printf("%d\n",i-1);
}
*/

//string slicing by taking inputs from the user
/*
#include<stdio.h>
void main(){
char x[]="nagabasha shaik";
int first,last,i;
printf("enter first and last indexes");
scanf("%d%d",&first,&last);
for(i=first;i<=last;i++){
printf("%c",x[i]);
}
printf("\n");
}

*/



//-----------------STRUCTURES--------------------------------


//basic structure:
/*
#include<stdio.h>
#include<string.h>
struct employee
{
int id;
char name[10];
float salary;
};

void main(){
struct employee e1,e2;
e1.id=220518;
strcpy(e1.name,"Rakesh");
e1.salary=55000;
printf("Employee-1 details:\n");
printf("ID=%d\tNAME=%s\tSALARY=%f\n",e1.id,e1.name,e1.salary);

e2.id=220523;
strcpy(e2.name,"Avinash");
e2.salary=55000;
printf("Employee-2 details:\n");
printf("ID=%d\tNAME=%s\tSALARY=%f\n",e2.id,e2.name,e2.salary);
}

*/




//write a program to print the details of 3 employees and the details are to be taken from the user:
/*
#include<stdio.h>
#include<string.h>
struct employees
{
char name[10];
int id;
float salary;
};

void main(){
struct employees e1,e2,e3;
printf("enter emp1 name:");
scanf("%s",e1.name);
printf("enter emp1 id:");
scanf("%d",&e1.id);
printf("enter emp1 salary:");
scanf("%f",&e1.salary);

printf("enter emp2 name:");
scanf("%s",e2.name);
printf("enter emp2 id:");
scanf("%d",&e2.id);
printf("enter emp2 salary:");
scanf("%f",&e2.salary);

printf("enter emp3 name:");
scanf("%s",e3.name);
printf("enter emp3 id:");
scanf("%d",&e3.id);
printf("enter emp3 salary:");
scanf("%f",&e3.salary);

printf("Employee-1 Details:\n");
printf("NAME:%s\tID:%d\tSALARY:%f\n",e1.name,e1.id,e1.salary);

printf("Employee-2 Details:\n");
printf("NAME:%s\tID:%d\tSALARY:%f\n",e2.name,e2.id,e2.salary);

printf("Employee-3 Details:\n");
printf("NAME:%s\tID:%d\tSALARY:%f\n",e3.name,e3.id,e3.salary);
}
*/



//initializing structutres in another way:
/*
#include<stdio.h>
struct employee
{
char name[10];
int id;
float salary;
};

void main(){
struct employee e1={"Harish",92282,78900};
struct employee e2={"Krish",63526,75000};
struct employee e3={"Murali",45377,90000};

printf("Employee-1 Details:\n");
printf("%s\t%d\t%.2f\n",e1.name,e1.id,e1.salary);

printf("Employee-2 Details:\n");
printf("%s\t%d\t%.2f\n",e2.name,e2.id,e2.salary);

printf("Employee-1 Details:\n");
printf("%s\t%d\t%.2f\n",e3.name,e3.id,e3.salary);
}
*/


//pointer to structures:
/*
#include<stdio.h>
struct employee
{
char name[10];
int id;
float salary;
};

void main(){
struct employee e1;
e1.salary=38000;
struct employee *ptr;
ptr=&e1;
printf("salary=%.2f\n",(*ptr).salary);
printf("salary=%.2f\n",ptr->salary);//  -> this is called arrow operator it prints the same as above pointer
}
*/



//passing structure to a function:using the first type of declartion of a structure
/*
#include<stdio.h>
#include<string.h>
struct employee
{
char name[10];
int id;
float salary;
};


void show_info(struct employee e);	   //function prototype

void show_info(struct employee e){
printf("Employee-1 Details:\n");
printf("Name:%s\tID:%d\tSALARY:%.2f\n",e.name,e.id,e.salary);
}

void main(){
struct employee e1;
strcpy(e1.name,"Rakesh");
e1.salary=75000;
e1.id=35533;


show_info(e1);				//calling a function
}
*/





//passing structure to a function by using second type of declaration of a structure
/*
#include<stdio.h>
#include<string.h>
struct employee
{
char name[10];
int id;
float salary;
};


void show_info(struct employee e);	   //function prototype

void show_info(struct employee e){
printf("Employee-1 Details:\n");
printf("Name:%s\tID:%d\tSALARY:%.2f\n",e.name,e.id,e.salary);
}

void main(){
struct employee e1={"Abhishek",224424,50000};
show_info(e1);				//calling a function
}

*/





//typedef use:it modifies the data-type to our own custom dat-type
// in the below program i have formatted int data-type as naga and used it in the y variable and it works perfectly as int data-type.
/* 
#include<stdio.h>
void main(){
typedef int naga;
int x=100;
naga y=200;
printf("x=%d\n",x);
printf("y=%d\n",y);
}
*/



//typedef use in structures;
/*
#include<stdio.h>
#include<string.h>
typedef struct employee
{
char name[10];
int id;
float salary;
}emp;

void main(){
emp e1;
strcpy(e1.name,"Harish");
e1.id=224424;
e1.salary=50000;

printf("NAME:%s\tID:%d\tSALARY:%f\n",e1.name,e1.id,e1.salary);
}
*/





//Arrays:One-Dimension arrays:just practice
/*
#include<stdio.h>
void main(){
int x[10];
char y[10];
float z[10];

int i;
for(i=0;i<10;i++){
printf("enter element:");
scanf("%d",&x[i]);
}

for(i=0;i<10;i++){
printf("x[%d]=%d\n",i,x[i]);
}

for(i=0;i<10;i++){
printf("enter element:");
scanf("%f",&z[i]);
}

for(i=0;i<10;i++){
printf("x[%d]=%.2f\n",i,z[i]);
}
}
*/


//Reversing all elements in an array:
/*
#include<stdio.h>
void main(){
int x[10]={1,2,3,4,5,6,7,8,9,10};
int i,temp;
printf("The Array before reversing:\n");
for(i=0;i<10;i++){
printf("%d ",x[i]);
}
printf("\n");
for(i=0;i<10/2;i++){
temp=x[i];
x[i]=x[10-i-1];
x[10-i-1]=temp;
}
printf("The Array after reversing:\n");
for(i=0;i<10;i++){
printf("%d ",x[i]);
}
printf("\n");
}
*/

//Reversing particular elements in an array:
/*
#include<stdio.h>
void main(){
int x[8]={1,4,5,2,4,7,9,0};
int elem,pos=0,i,not;
printf("enter the element:");
scanf("%d",&elem);

for(i=0;i<7;i++){
if(x[i]==elem){
goto loop_2;
}
else{
not+=1;
break;
}
}
if(not!=0){
printf("Oooooops.!No element is found.....\n");
}


loop_2:
for(i=0;i<7;i++){
if(x[i]==elem){
pos+=1;
printf("position=%d\n",pos-1);
break;
}
else{
pos+=1;
}
}
}
*/


//merging two arrays by taking from the user:
/*
#include<stdio.h>
void main(){
int n1,n2,i;
printf("enter n1 and n2:");
scanf("%d%d",&n1,&n2);
int a[n1];
int b[n2];
int n3=n1+n2;
int x[n3];
for(i=0;i<n1;i++){
printf("enter element of array1 of a[%d]=",i);
scanf("%d",&a[i]);
}

for(i=0;i<n2;i++){
printf("enter element of array1 of b[%d]=",i);
scanf("%d",&b[i]);
}

printf("ARRAY-1 is:\n");
for(i=0;i<n1;i++){
printf("%d  ",a[i]);
}
printf("\n");

printf("ARRAY-2 is:\n");
for(i=0;i<n2;i++){
printf("%d  ",b[i]);
}
printf("\n");

for(i=0;i<n3;i++){
if(i<n1){
x[i]=a[i];
}
else{
x[i]=b[i-n1];
}
}

printf("AFTER MERGING ARRAY is:\n");
for(i=0;i<n3;i++){
printf("%d  ",x[i]);
}
printf("\n");
}
*/




//passing an array to a function:
/*
#include<stdio.h>
int array(int*,int);//prototype
int print_array(int*,int n){
int y[n];
int i;
for(i=0;i<n;i++){
scanf("%d",&y[i]);
}
for(i=0;i<n;i++){
printf("%d  ",y[i]);
}
printf("\n");

}
void main(){
int size=10;
int array[size];
print_array(array,size);
}
*/



//sorting of an array:
/*
#include<stdio.h>
void main(){
int size,i,j,k;
printf("enter size:");
scanf("%d",&size);
int x[size];
for(i=0;i<size;i++){
printf("enter x[%d]=",i);
scanf("%d",&x[i]);
}
printf("enter marix is:-\n");
for(i=0;i<size;i++){
printf("%d  ",x[i]);
}
printf("\n");
for(i=0;i<size;i++){
for(j=i+1;j<size;j++){
if(x[i]>x[j]){
k=x[i];
x[i]=x[j];
x[j]=k;
}
}
}
printf("Ascending orderd marix is:-\n");
for(i=0;i<size;i++){
printf("%d  ",x[i]);
}
printf("\n");

printf("Desending orderd marix is:-\n");
for(i=size-1;i>=0;i--){
printf("%d  ",x[i]);
}
printf("\n");
}
*/


//inserting an elemnt in an array at particular position:
/*
#include<stdio.h>
void main(){
int element,pos,size,i,j;
printf("enter size of an array:");
scanf("%d",&size);
int x[size];

for(i=0;i<size;i++){
printf("enter x[%d]=",i);
scanf("%d",&x[i]);
}

printf("Before insertion:-\n");
for(i=0;i<size;i++){
printf("%d  ",x[i]);
}
printf("\n");

printf("enter element:");
scanf("%d",&element);
printf("enter position:");
scanf("%d",&pos);

if(pos>=0 && pos<=size){
for(i=size;i>pos;i--){
x[i]=x[i-1];
}
x[pos]=element;


printf("After insertion:-\n");
for(i=0;i<=size;i++){
printf("%d  ",x[i]);
}
printf("\n");
}
else{
printf("invalid position\n");
}
}
*/


//Deletiing an particular element from an array by takiing its position:
/*
#include<stdio.h>
void main(){
int pos,size,i,j;
printf("enter size:");
scanf("%d",&size);
int x[size];

for(i=0;i<size;i++){
printf("enter x[%d]=",i);
scanf("%d",&x[i]);
}

printf("Before deletion:-\n");
for(i=0;i<size;i++){
printf("%d  ",x[i]);
}
printf("\n");

printf("enter position:");
scanf("%d",&pos);

for(i=pos;i<size;i++){
x[i]=x[i+1];
}

printf("After deletion:-\n");
for(i=0;i<size-1;i++){
printf("%d  ",x[i]);
}
printf("\n");
}
*/


//find largest and greatest element of an array:
/*
#include<stdio.h>
void main(){
int size,i,j,k;
printf("enter size:");
scanf("%d",&size);
int x[size];

for(i=0;i<size;i++){
printf("enter x[%d]=",i);
scanf("%d",&x[i]);
}

printf("entered array is:-\n");
for(i=0;i<size;i++){
printf("%d  ",x[i]);
}
printf("\n");

k=x[0];
for(i=0;i<size;i++){
if(k<x[i]){
k=x[i];
}
}
printf("largest element is:%d\n",k);

k=x[0];
for(i=0;i<size;i++){
if(k>x[i]){
k=x[i];
}
}
printf("smallest element is:%d\n",k);
}
*/


//second smallest and second largest element:
/*
#include<stdio.h>
void main(){
int size,i,j,k,count1=0,count2=0;
printf("enter size:");
scanf("%d",&size);
int x[size];
int z=size-2;
for(i=0;i<size;i++){
printf("enter x[%d]=",i);
scanf("%d",&x[i]);
}


for(i=0;i<size;i++){
for(j=i+1;j<size;j++){
if(x[i]>x[j]){
k=x[i];
x[i]=x[j];
x[j]=k;
}
}
}

  
printf("Ascending orderd marix is:-\n");
for(i=0;i<size;i++){
printf("%d  ",x[i]);
}
printf("\n");
//upto above ascending order code:


for(i=0;i<size;i++){          //for second smallest
if(x[1]==x[i]){
count1+=1;
}
}

for(i=0;i<size;i++){         //for second greatest
if(x[z]==x[i]){ 
count2+=1;
}
}


if(count1<=1){
printf("second smallest number is %d\n",x[1]);
}
if(count2<=1){
printf("second largest number is %d\n",x[size-2]);
}

if(count1>1){
printf("second smallest number is %d\n",x[count1]);
}

if(count2>1){
printf("second largest number is %d\n",x[size-count2-1]);
}
}
*/





//functions to print the sum of a matrix:
/*
#include<stdio.h>
int print_array(int x[10][10],int rows,int cols);
int sum_array(int a[10][10],int b[10][10],int c[10][10],int m3,int n3);

void main(){
int matrix1[10][10],matrix2[10][10],matrix3[10][10];
int m1,n1,m2,n2,m3,n3;

printf("enter no.of rows and cols of matrix-1:\n");
scanf("%d%d",&m1,&n1);
print_array(matrix1,m1,n1);

printf("enter no.of rows and cols of matrix-2:\n");
scanf("%d%d",&m2,&n2);
print_array(matrix2,m2,n2);

if(m1==m2 && n1==n2){
m3=m2;
n3=n2;
sum_array(matrix1,matrix2,matrix3,m3,n3);
}


}

int print_array(int x[10][10],int rows,int cols){
int i,j;
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
printf("x[%d][%d]=",i,j);
scanf("%d",&x[i][j]);
}
}

for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
printf("%d  ",x[i][j]);
}
printf("\n");
}

}




int sum_array(int a[10][10],int b[10][10],int c[10][10],int m3,int n3){

int i,j;
for(i=0;i<m3;i++){
for(j=0;j<n3;j++){
c[i][j]=a[i][j]+b[i][j];
}
}
printf("Sum matrix is:-\n");
for(i=0;i<m3;i++){
for(j=0;j<n3;j++){
printf("%d  ",c[i][j]);
}
printf("\n");
}
}
*/



//write a program to take n number of student names from your class and print them:
/*
#include<stdio.h>
void main(){
int numof_students,i;
printf("enter no.of stdudents:");
scanf("%d",&numof_students);
char students[numof_students][20];
for(i=0;i<numof_students;i++){
printf("student %d:-",i);
scanf("%s",students[i]);
}
printf("student names are:-\n");
for(i=0;i<numof_students;i++){
printf("%s\n",students[i]);
}
}
*/


//program to find the length of a string without using built-in functions like strlen():
/*
#include<stdio.h>
void main(){
char x[]="naveen";
int len=0,i=0;
while(x[i]!='\0'){
len+=1;
i++;
}
printf("len of string is %d\n",len);
}
*/


//reverese a string:
/*
#include<stdio.h>
#include<string.h>
void main(){
char x[10];
printf("enter string:");
scanf("%s",x);
int len=strlen(x),i;
char temp;
printf("string is:-\n");
printf("%s\n",x);

for(i=0;i<len/2;i++){
temp=x[i];
x[i]=x[len-i-1];
x[len-i-1]=temp;
}
printf("reversed string is:-\n");
printf("%s\n",x);
}

*/


//write a program to find the given string is palindrome string or not (note:dont use str functions);
/*
#include<stdio.h>
void main(){
char x[100];
printf("enter string:");
scanf("%s",x);
int len=0,i,temp,count=0;
while(x[len]!='\0'){
len++;
}
char y[100];
for(i=0;i<len;i++){
y[i]=x[len-i-1];
}
printf("normal x=%s\n",x);
printf("reversed y=%s\n",y);


for(i=0;i<len;i++){
if(x[i]==y[i]){
count++;
}
}

if(count==len){
printf("it is a palindrome string\n");
}
else{
printf("it is not a palindrome string\n");
}
}
*/



//write a c program to take the line of string input from the user and count how many vowels,consonants,digits,spaces,words and special charecters are present:
/*
#include<stdio.h>
#include<string.h>
void main(){
char x[100];
int i=0,vowels=0,cons=0,digits=0,spaces=0,words=0,special=0;
printf("enter line:");
scanf("%[^\n]",x);
printf("line=%s\n",x);

while(x[i]!='\0'){
if(x[i]=='a' || x[i]=='e'|| x[i]=='i' || x[i]=='o' || x[i]=='u'){
vowels+=1;
}
else if(x[i]=='A' || x[i]=='E'|| x[i]=='I' || x[i]=='O' || x[i]=='U'){
vowels+=1;
}
else if(x[i]>='0' && x[i]<='9'){
digits+=1;
}
else if(x[i]>='a' && x[i]<='z'){
cons+=1;
}
else if(x[i]>='A' && x[i]<='Z'){
cons+=1;
}
else if(x[i]==' '){
spaces+=1;
}
words=spaces+1;
i++;
}
printf("vowels=%d\n",vowels);
printf("consonants=%d\n",cons);
printf("digits=%d\n",digits);
printf("spaces=%d\n",spaces);
printf("words=%d\n",words);
}
*/




//write a program to print the sum,product,and mean of the array:
/*
#include<stdio.h>
void main(){
int n,sum=0,product=1,mean,len,i;
printf("enter no.of elements:");
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++){
printf("x[%d]=",i);
scanf("%d",&x[i]);
}

for(i=0;i<n;i++){
sum+=x[i];
}
printf("sum=%d\n",sum);
for(i=0;i<n;i++){
product*=x[i];
}
printf("product=%d\n",product);
printf("mean=%d\n",sum/n);
}
*/


//INDIRECT CALLING:
/*
#include<stdio.h>
int sum1(int);
int sum2(int);
int sum3(int);

void main(){
int x=100;
sum1(x);
}

int sum1(int x1){
if(x1<1000){
x1+=100;
sum2(x1);
}
else{
printf("%d\n",x1);
printf("%d\n",i);
}
}

int sum2(int x2){
x2+=100;
sum3(x2);
}

int sum3(int x3){
x3+=100;
sum1(x3);
}
*/


//calling a row by using call by reference:
/*
#include<stdio.h>
int show(int (*x)[]); 

void main(){
int x[2][3]={1,2,3,4,5,6};
show(&x[1]);
}

int show(int (*x)[1]){
int i;
for(i=0;i<3;i++){
printf("%d  ",(*x)[i]);
}
printf("\n");
}
*/



//calling entire array by using call by value:
/*
#include<stdio.h>
int show(int x[2][3]); 

void main(){
int x[2][3]={1,2,3,4,5,6};
show(x);
}

int show(int x[2][3]){
int i,j;
for(i=0;i<2;i++){
for(j=0;j<3;j++){
printf("%d  ",x[i][j]);
}
printf("\n");
}
}
*/


//calling entire array by using call by reference:
/*
#include<stdio.h>
int show(int (*x)[2][3]); 
void main(){
int x[2][3]={1,2,3,4,5,6};
show(&x);
}
int show(int (*x)[2][3]){
int i,j;
for(i=0;i<2;i++){
for(j=0;j<3;j++){
printf("%d  ",(*x)[i][j]);
}
printf("\n");
}
}

*/


//calling an element from the 3-D array by using call by value method:
/*
#include<stdio.h>
int show(int n); 
void main(){
int x[2][2][3]={{1,2,3,4,5,6},{7,8,9,10,11,12}};
show(x[1][1][1]);
}

int show(int n){
printf("%d\n",n);
}

*/



//calling an element from the 3-D array by using call by reference method:
/*

#include<stdio.h>
int show(int *n); 
void main(){
int x[2][2][3]={{1,2,3,4,5,6},{7,8,9,10,11,12}};
show(&x[1][1][1]);
}

int show(int *n){
printf("%d\n",*n);
}

*/


//time project:
/*
#include<unistd.h>
#include<stdio.h>
void main(){
int i=0,seconds,minuits,hours;
while(i!=0){

if(seconds==60){
minuits+=1
}

if(minuits==60){
hours+=1;
}

if(hours==12){
seconds=0;
minuits=0;
hours=0;
}

}
}
*/


/*
#include <stdio.h>
void main()
{
    printf("--------------------------------------\n");
    printf("WELCOME TO FORWARD BANK OF INDIA\n");
    printf("--------------------------------------\n\n");
    printf("01)ACCOUNT MANAGEMENT\t02)MONEY TRANSFER\t03)DEPOSIT\n04)CHECK BALANCE\t\t05)WITHDRAWL\t\t06)EXIT\n");



    //account-1
    char acc1_name='B',acc1_fname='M',acc1_mname='K',acc1_occupation='S',acc1_education='B',acc1_business='N',acc1_businesstype='N',acc1_address='I',acc1_type='S';
    long int acc1_num=99220518,acc1_aadhar=111122223333,acc1_phone=9390647974,acc1_voter=0,acc1_pin=1111,acc1_years=2;
    int acc1_balance=10000;
    //account-2
    char acc2_name='A',acc2_fname='M',acc2_mname='M',acc2_occupation='S',acc2_education='B',acc2_business='N',acc2_businesstype='N',acc2_address='K',acc2_type='C';
    long int acc2_num=99220310,acc2_aadhar=222233334444,acc2_phone=9581293176,acc2_voter=0,acc2_pin=2222,acc2_years=3;
    int acc2_balance=100000;
    //account-3
    char acc3_name='R',acc3_fname='M',acc3_mname='K',acc3_occupation='S',acc3_education='B',acc3_business='N',acc3_businesstype='N',acc3_address='I',acc3_type='F';
    long int acc3_num=99220671,acc3_aadhar=111122223333,acc3_phone=9390647974,acc3_voter=0,acc3_pin=1111,acc3_years=7,acc3_interest=1.5;
    int acc3_balance=1000000;
    //account-4
    char acc4_name,acc4_fname,acc4_mname,acc4_occupation,acc4_education,acc4_business,acc4_businesstype,acc4_address,acc4_type;
    long int acc4_num=99220194,acc4_aadhar=0,acc4_phone=0,acc4_voter=0,acc4_pin=0,acc4_passport=0,acc4_visa=0,acc4_interest=0;
    int acc4_balance=0;
    //account-5
    char acc5_name,acc5_fname,acc5_mname,acc5_occupation,acc5_education,acc5_business,acc5_businesstype,acc5_address,acc5_type;
    long int acc5_num=99220806,acc5_aadhar=0,acc5_phone=0,acc5_voter=0,acc5_pin=0,acc5_passport=0,acc5_visa=0,acc5_interest=0;
    int acc5_balance=0;

    
    int input1,input2,input3,minimum_ammount,del_account,transfer_money,transfer_account1,transfer_account2;
    char del_acctype;


    printf("enter:\n");
    scanf("%d",&input1);


    if(input1==1 || input1==01)
    {   printf(">>>ACCOUNT MANAGEMENT\n\n");
        printf("01)ACCOUNT CREATION\t02)ACCOUNT DELETION\t03)TRANSACTION HISTORY\n");
        printf("-------------\n");
        printf("enter");
        scanf("%d",&input2);
        if(input2==1 || input2==01)
        {
            if(acc4_num==0)
            {
            printf(">>>ACCOUNT MANAGEMENT>>>ACCOUNT CREATION:\n\n");
            printf("01)SAVINGS ACCOUNT\t02)CURRENT ACCOUNT\n03)FIXED DEPOSIT(FD)ACCOUNT\t04)NRI ACCOUNT\n\n");
            printf("-------------\n");
            printf("enter");
            scanf("%d",&input3);

                if(input3==1||input3==01)
                {
                   printf(">>>ACCOUNT MANAGEMENT>>>ACCOUNT CREATION>>>SAVINGS ACCOUNT:\n\n");
                   printf("Please fill the below details:\n");
                   printf("VOTER ID:");
                   scanf("%ld",&acc4_voter);
                   printf("NAME:");
                   scanf("%c",&acc4_name);
                   printf("FATHER NAME:");
                   scanf("%c",&acc4_fname);
                   printf("AADHAAR:");
                   scanf("%ld",&acc4_aadhar);
                   printf("MOTHER NAME:");
                   scanf("%c",&acc4_mname);
                   printf("PHONE NUMBER");
                   scanf("%ld",&acc4_phone);
                   printf("ADDRESS:");
                   scanf("%c",&acc4_address);
                   printf("EDUCATION:");
                   scanf("%c",&acc4_education);
                   printf("OCCUPATION");
                   scanf("%c",&acc4_occupation);
                   printf("BUSINESS:");
                   scanf("%c",&acc4_business);
                   printf("BUSINESS TYPE");
                   scanf("%c",&acc4_businesstype);
                   printf("Your account is VERIFIED successfully.....\n\n" );
                   printf("please pay the minimum account(>=1000) to active your account...\n\n");
                   printf("enter");
                   scanf("%d",&minimum_ammount);
                   if(minimum_ammount>=1000)
                   {
                       printf("YOUR SAVINGS-ACCOUNT IS ACTIVATED SUCCESFULLY...\nNOW,YOU CAN TRANSFER,WITHDRAW OR DEPOSIT MONEY IN YOUR ACCOUNT\n");
                       acc4_balance=minimum_ammount;
                   }
                   else
                   {
                       printf("YOUR ACCOUNT IS NOT ACTIVATED SUCCESFULLY\nPLEASE PROVIDE THE REQUIRED INFORMATION PROPERLY...");
                       char acc4_name,acc4_fname,acc4_mname,acc4_occupation,acc4_education,acc4_business,acc4_businesstype,acc4_address,acc4_type;
                       int acc4_num=0,acc4_aadhar=0,acc4_phone=0,acc4_voter=0,acc4_pin=0,acc4_passport,acc4_visa;
                       float acc4_balance=0;
                    }
                }
                else if(input3==2||input3==02)
                {
                   printf(">>>ACCOUNT MANAGEMENT>>>ACCOUNT CREATION>>>CURRENT ACCOUNT:\n\n");
                   printf("Please fill the below details:\n");
                   printf("NAME:");
                   scanf("%c",&acc4_name);
                   printf("FATHER NAME:");
                   scanf("%c",&acc4_fname);
                   printf("MOTHER NAME:");
                   scanf("%c",&acc4_mname);
                   printf("ADDRESS:");
                   scanf("%c",&acc4_address);
                   printf("EDUCATION:");
                   scanf("%c",&acc4_education);
                   printf("OCCUPATION");
                   scanf("%c",&acc4_occupation);
                   printf("VOTER ID:");
                   scanf("%ld",&acc4_voter);
                   printf("PHONE NUMBER");
                   scanf("%ld",&acc4_phone);
                   printf("AADHAAR:");
                   scanf("%ld",&acc4_aadhar);
                   printf("BUSINESS:");
                   scanf("%c",&acc4_business);
                   printf("BUSINESS TYPE");
                   scanf("%c",&acc4_businesstype);
                   printf("Your account is VERIFIED successfully.....\n" );
                   printf("please pay the minimum account(>=1000) to active your account...");
                   printf("enter");
                   scanf("%d",&minimum_ammount);
                   if(minimum_ammount>=1000)
                   {
                       printf("YOUR CURRENT-ACCOUNT IS ACTIVATED SUCCEsSSFULLY...\nNOW,YOU CAN TRANSFER,WITHDRAW OR DEPOSIT MONEY IN YOUR ACCOUNT\n");
                       acc4_balance=minimum_ammount;
                   }
                   else
                   {
                       printf("YOUR ACCOUNT IS NOT ACTIVATED SUCCESFULLY\nPLEASE PROVIDE THE REQUIRED INFORMATION PROPERLY...");
                       char acc4_name,acc4_fname,acc4_mname,acc4_occupation,acc4_education,acc4_business,acc4_businesstype,acc4_address,acc4_type;
                       int acc4_num=0,acc4_aadhar=0,acc4_phone=0,acc4_voter=0,acc4_pin=0,acc4_passport,acc4_visa;
                       float acc4_balance=0;
                   }

                } 

                else if(input3==3||input3==03)
                {
                   printf(">>>ACCOUNT MANAGEMENT>>>ACCOUNT CREATION>>>FIXED-DEPOSIT ACCOUNT:\n\n");
                   printf("Please fill the below details:\n");
                   printf("NAME:");
                   scanf("%c",&acc4_name);
                   printf("FATHER NAME:");
                   scanf("%c",&acc4_fname);
                   printf("MOTHER NAME:");
                   scanf("%c",&acc4_mname);
                   printf("ADDRESS:");
                   scanf("%c",&acc4_address);
                   printf("EDUCATION:");
                   scanf("%c",&acc4_education);
                   printf("OCCUPATION");
                   scanf("%c",&acc4_occupation);
                   printf("VOTER ID:");
                   scanf("%ld",&acc4_voter);
                   printf("PHONE NUMBER");
                   scanf("%ld",&acc4_phone);
                   printf("AADHAAR:");
                   scanf("%ld",&acc4_aadhar);
                   printf("BUSINESS:");
                   scanf("%c",&acc4_business);
                   printf("BUSINESS TYPE");
                   scanf("%c",&acc4_businesstype);
                   printf("Your account is VERIFIED successfully.....\n" );
                   printf("please pay the minimum account(>=1000) to active your account...");
                   printf("enter");
                   scanf("%d",&minimum_ammount);
                   if(minimum_ammount>=1000)
                   {
                    printf("YOUR FIXED DEPOSIT-ACCOUNT IS ACTIVATED SUCCESFULLY...\nNOW,YOU CAN TRANSFER,WITHDRAW OR DEPOSIT MONEY IN YOUR ACCOUNT\n");
                       acc4_balance=minimum_ammount;
                   }
                   else
                   {
                    printf("YOUR ACCOUNT IS NOT ACTIVATED SUCCESFULLY\nPLEASE PROVIDE THE REQUIRED INFORMATION PROPERLY...");
                       char acc4_name,acc4_fname,acc4_mname,acc4_occupation,acc4_education,acc4_business,acc4_businesstype,acc4_address,acc4_type;
                       int acc4_num=0,acc4_aadhar=0,acc4_phone=0,acc4_voter=0,acc4_pin=0,acc4_passport,acc4_visa;
                       float acc4_balance=0;
                   }
                }
                else if(input3==4||input3==04)
                {
                    printf(">>>ACCOUNT MANAGEMENT>>>ACCOUNT CREATION>>>NRI ACCOUNT:\n\n");
                   printf("Please fill the below details:\n");
                   printf("NAME:");
                   scanf("%c",&acc4_name);
                   printf("FATHER NAME:");
                   scanf("%c",&acc4_fname);
                   printf("MOTHER NAME:");
                   scanf("%c",&acc4_mname);
                   printf("ADDRESS:");
                   scanf("%c",&acc4_address);
                   printf("EDUCATION:");
                   scanf("%c",&acc4_education);
                   printf("OCCUPATION");
                   scanf("%c",&acc4_occupation);
                   printf("VOTER ID:");
                   scanf("%ld",&acc4_voter);
                   printf("PHONE NUMBER");
                   scanf("%ld",&acc4_phone);
                   printf("AADHAAR:");
                   scanf("%ld",&acc4_aadhar);
                   printf("BUSINESS:");
                   scanf("%c",&acc4_business);
                   printf("BUSINESS TYPE");
                   scanf("%c",&acc4_businesstype);
                   printf("Your account is VERIFIED successfully.....\n" );
                   printf("please pay the minimum account(>=1000) to active your account...");
                   printf("enter");
                   scanf("%d",&minimum_ammount);
                   if(minimum_ammount>=1000)
                   {
                    printf("YOUR NRI-ACCOUNT IS ACTIVATED SUCCESFULLY...\nNOW,YOU CAN TRANSFER,WITHDRAW OR DEPOSIT MONEY IN YOUR ACCOUNT\n");
                       acc4_balance=minimum_ammount;
                   }
                   else
                   {
                    printf("YOUR ACCOUNT IS NOT ACTIVATED SUCCESFULLY\nPLEASE PROVIDE THE REQUIRED INFORMATION PROPERLY...");
                       char acc4_name,acc4_fname,acc4_mname,acc4_occupation,acc4_education,acc4_business,acc4_businesstype,acc4_address,acc4_type;
                       int acc4_num=0,acc4_aadhar=0,acc4_phone=0,acc4_voter=0,acc4_pin=0,acc4_passport,acc4_visa;
                       float acc4_balance=0;
                   }
                }
                else
                {
                    printf("invalid input");
                }
            

            }
            else if(acc5_num==0)
            {
                printf(">>>ACCOUNT MANAGEMENT>>>ACCOUNT CREATION:\n\n");
                printf("01)SAVINGS ACCOUNT\t02)CURRENT ACCOUNT\n03)FIXED DEPOSIT(FD)ACCOUNT\t04)NRI ACCOUNT\n\n");
                printf("-------------\n");
                printf("enter");
                scanf("%d",&input3);

                if(input3==1||input3==01)
                {
                   printf(">>>ACCOUNT MANAGEMENT>>>ACCOUNT CREATION>>>SAVINGS ACCOUNT:\n\n");
                   printf("Please fill the below details:\n");
                   printf("NAME:");
                   scanf("%c",&acc5_name);
                   printf("FATHER NAME:");
                   scanf("%c",&acc5_fname);
                   printf("MOTHER NAME:");
                   scanf("%c",&acc5_mname);
                   printf("ADDRESS:");
                   scanf("%c",&acc5_address);
                   printf("EDUCATION:");
                   scanf("%c",&acc5_education);
                   printf("OCCUPATION");
                   scanf("%c",&acc5_occupation);
                   printf("VOTER ID:");
                   scanf("%ld",&acc5_voter);
                   printf("PHONE NUMBER");
                   scanf("%ld",&acc5_phone);
                   printf("AADHAAR:");
                   scanf("%ld",&acc5_aadhar);
                   printf("BUSINESS:");
                   scanf("%c",&acc5_business);
                   printf("BUSINESS TYPE");
                   scanf("%c",&acc5_businesstype);
                   printf("Your account is VERIFIED successfully.....\n" );
                   printf("please pay the minimum account(>=1000) to active your account...");
                   printf("enter");
                   scanf("%d",&minimum_ammount);
                   if(minimum_ammount>=1000)
                   {
                       printf("YOUR SAVINGS-ACCOUNT IS ACTIVATED SUCCESFULLY...\nNOW,YOU CAN TRANSFER,WITHDRAW OR DEPOSIT MONEY IN YOUR ACCOUNT\n");
                       acc5_balance=minimum_ammount;
                   }
                   else
                   {
                       printf("YOUR ACCOUNT IS NOT ACTIVATED SUCCESFULLY\nPLEASE PROVIDE THE REQUIRED INFORMATION PROPERLY...");
                       char acc5_name,acc5_fname,acc5_mname,acc5_occupation,acc5_education,acc5_business,acc5_businesstype,acc5_address,acc5_type;
                       int acc5_num=0,acc5_aadhar=0,acc5_phone=0,acc5_voter=0,acc5_pin=0,acc5_passport,acc5_visa;
                       float acc5_balance=0;
                    }
                }
                else if(input3==2||input3==02)
                {
                   
                   printf(">>>ACCOUNT MANAGEMENT>>>ACCOUNT CREATION>>>CURRENT ACCOUNT:\n\n");
                   printf("Please fill the below details:\n");
                   printf("NAME:");
                   scanf("%c",&acc5_name);
                   printf("FATHER NAME:");
                   scanf("%c",&acc5_fname);
                   printf("MOTHER NAME:");
                   scanf("%c",&acc5_mname);
                   printf("ADDRESS:");
                   scanf("%c",&acc5_address);
                   printf("EDUCATION:");
                   scanf("%c",&acc5_education);
                   printf("OCCUPATION");
                   scanf("%c",&acc5_occupation);
                   printf("VOTER ID:");
                   scanf("%ld",&acc5_voter);
                   printf("PHONE NUMBER");
                   scanf("%ld",&acc5_phone);
                   printf("AADHAAR:");
                   scanf("%ld",&acc5_aadhar);
                   printf("BUSINESS:");
                   scanf("%c",&acc5_business);
                   printf("BUSINESS TYPE");
                   scanf("%c",&acc5_businesstype);
                   printf("Your account is VERIFIED successfully.....\n" );
                   printf("please pay the minimum account(>=1000) to active your account...");
                   printf("enter");
                   scanf("%d",&minimum_ammount);
                   if(minimum_ammount>=1000)
                   {
                       printf("YOUR CURRENT-ACCOUNT IS ACTIVATED SUCCESFULLY...\nNOW,YOU CAN TRANSFER,WITHDRAW OR DEPOSIT MONEY IN YOUR ACCOUNT\n");
                       acc5_balance=minimum_ammount;
                   }
                   else
                   {
                       printf("YOUR ACCOUNT IS NOT ACTIVATED SUCCESFULLY\nPLEASE PROVIDE THE REQUIRED INFORMATION PROPERLY...");
                       char acc5_name,acc5_fname,acc5_mname,acc5_occupation,acc5_education,acc5_business,acc5_businesstype,acc5_address,acc5_type;
                       int acc5_num=0,acc5_aadhar=0,acc5_phone=0,acc5_voter=0,acc5_pin=0,acc5_passport,acc5_visa;
                       float acc5_balance=0;
                    }

                } 

                else if(input3==3||input3==03)
                {
                     printf(">>>ACCOUNT MANAGEMENT>>>ACCOUNT CREATION>>>FIXED-DEPOSIT ACCOUNT:\n\n");
                   printf("Please fill the below details:\n");
                   printf("NAME:");
                   scanf("%c",&acc5_name);
                   printf("FATHER NAME:");
                   scanf("%c",&acc5_fname);
                   printf("MOTHER NAME:");
                   scanf("%c",&acc5_mname);
                   printf("ADDRESS:");
                   scanf("%c",&acc5_address);
                   printf("EDUCATION:");
                   scanf("%c",&acc5_education);
                   printf("OCCUPATION");
                   scanf("%c",&acc5_occupation);
                   printf("VOTER ID:");
                   scanf("%ld",&acc5_voter);
                   printf("PHONE NUMBER");
                   scanf("%ld",&acc5_phone);
                   printf("AADHAAR:");
                   scanf("%ld",&acc5_aadhar);
                   printf("BUSINESS:");
                   scanf("%c",&acc5_business);
                   printf("BUSINESS TYPE");
                   scanf("%c",&acc5_businesstype);
                   printf("Your account is VERIFIED successfully.....\n" );
                   printf("please pay the minimum account(>=1000) to active your account...");
                   printf("enter");
                   scanf("%d",&minimum_ammount);
                   if(minimum_ammount>=1000)
                   {
                       printf("YOUR FIXED-DEPOSIT-ACCOUNT IS ACTIVATED SUCCESFULLY...\nNOW,YOU CAN TRANSFER,WITHDRAW OR DEPOSIT MONEY IN YOUR ACCOUNT\n");
                       acc5_balance=minimum_ammount;
                   }
                   else
                   {
                       printf("YOUR ACCOUNT IS NOT ACTIVATED SUCCESFULLY\nPLEASE PROVIDE THE REQUIRED INFORMATION PROPERLY...");
                       char acc5_name,acc5_fname,acc5_mname,acc5_occupation,acc5_education,acc5_business,acc5_businesstype,acc5_address,acc5_type;
                       int acc5_num=0,acc5_aadhar=0,acc5_phone=0,acc5_voter=0,acc5_pin=0,acc5_passport,acc5_visa;
                       float acc5_balance=0;
                    }
                }
                else if(input3==4||input3==04)
                {
                   printf(">>>ACCOUNT MANAGEMENT>>>ACCOUNT CREATION>>>NRI ACCOUNT:\n\n");
                   printf("Please fill the below details:\n");
                   printf("NAME:");
                   scanf("%c",&acc5_name);
                   printf("FATHER NAME:");
                   scanf("%c",&acc5_fname);
                   printf("MOTHER NAME:");
                   scanf("%c",&acc5_mname);
                   printf("ADDRESS:");
                   scanf("%c",&acc5_address);
                   printf("EDUCATION:");
                   scanf("%c",&acc5_education);
                   printf("OCCUPATION");
                   scanf("%c",&acc5_occupation);
                   printf("VOTER ID:");
                   scanf("%ld",&acc5_voter);
                   printf("PHONE NUMBER");
                   scanf("%ld",&acc5_phone);
                   printf("AADHAAR:");
                   scanf("%ld",&acc5_aadhar);
                   printf("BUSINESS:");
                   scanf("%c",&acc5_business);
                   printf("BUSINESS TYPE");
                   scanf("%c",&acc5_businesstype);
                   printf("Your account is VERIFIED successfully.....\n" );
                   printf("please pay the minimum account(>=1000) to active your account...\n\n");
                   printf("enter");
                   scanf("%d",&minimum_ammount);
                   if(minimum_ammount>=1000)
                   {
                       printf("YOUR NRI-ACCOUNT IS ACTIVATED SUCCESFULLY...\nNOW,YOU CAN TRANSFER,WITHDRAW OR DEPOSIT MONEY IN YOUR ACCOUNT\n");
                       acc5_balance=minimum_ammount;
                   }
                   else
                   {
                       printf("YOUR ACCOUNT IS NOT ACTIVATED SUCCESFULLY\nPLEASE PROVIDE THE REQUIRED INFORMATION PROPERLY...");
                       char acc5_name,acc5_fname,acc5_mname,acc5_occupation,acc5_education,acc5_business,acc5_businesstype,acc5_address,acc5_type;
                       int acc5_num=0,acc5_aadhar=0,acc5_phone=0,acc5_voter=0,acc5_pin=0,acc5_passport,acc5_visa;
                       float acc5_balance=0;
                    }
                }
            
            }
            else
            {
               printf("Dear sir/madam, sorry we dont have any empty slots to join your account\n we will inform you when you got the slot\nThank you for visiting the FORWARD BANK OF INDIA\n");
            }
        }    
        else if(input2==2||input2==02)
        {
            printf(">>>ACCOUNT DELETION:\n\n");
            printf("enter account number:");
            scanf("%d",&del_account);
           // printf("enter account type" );
            //scanf("%c",&del_acctype);
           
            if(del_account==acc1_num)
            {
                if(acc1_balance!=0)
                {
                  printf("Your account has %d balance\nPlease withdraw the remaining ammount then proceed the process...\n",acc1_balance);
                }
                else
                {

                  char acc1_name,acc1_fname,acc1_mname,acc1_occupation,acc1_education,acc1_business,acc1_businesstype,acc1_address,acc1_type;
                  long int acc1_num=99220518,acc1_aadhar=0000,acc1_phone=0000,acc1_voter=0000,acc1_pin=0000,acc1_years=0;
                  float acc1_balance=0;
                  printf("your account is deleted successfully....\n");

                }
                
            }
            else if(del_account==acc2_num)
            {
              if(acc2_balance!=0)
                {
                  printf("Your account has %d balance\nPlease withdraw the remaining ammount then proceed the process...\n",acc2_balance);
                }
                else
                {

                  char acc2_name,acc2_fname,acc2_mname,acc2_occupation,acc2_education,acc2_business,acc2_businesstype,acc2_address,acc2_type;
                  long int acc2_num=99220310,acc2_aadhar=0000,acc2_phone=0000,acc2_voter=0000,acc2_pin=0000,acc2_years=0;
                  float acc2_balance=0;
                  printf("your account is deleted successfully....\n");
                  
                }
            
         }
         else if(del_account==acc3_num)
         {
               if(acc3_balance!=0)
                {
                  printf("Your account has %d balance\nPlease withdraw the remaining ammount then proceed the process...\n",acc3_balance);
                }
                else
                {

                  char acc3_name,acc3_fname,acc3_mname,acc3_occupation,acc3_education,acc3_business,acc3_businesstype,acc3_address,acc3_type;
                  long int acc3_num=99220671,acc3_aadhar=0000,acc3_phone=0000,acc3_voter=0000,acc3_pin=0000,acc3_years=0;
                  float acc3_balance=0;
                  printf("your account is deleted successfully....\n");
                  
                }

        }
        else if(del_account==acc4_num)
        {
              if(acc4_balance!=0)
              {
                  printf("Your account has %d balance\nPlease withdraw the remaining ammount then proceed the process...\n",acc4_balance);
              }
              else
              {

                  char acc4_name,acc4_fname,acc4_mname,acc4_occupation,acc4_education,acc4_business,acc4_businesstype,acc4_address,acc4_type;
                  long int acc4_num=99220194,acc4_aadhar=0000,acc4_phone=0000,acc4_voter=0000,acc4_pin=0000,acc4_years=0;
                  float acc4_balance=0;
                  printf("your account is deleted successfully....\n");

               }
        
        }
        else if(del_account==acc5_num)
        {
           if(acc5_balance!=0)
            {
                  printf("Your account has %d balance\nPlease withdraw the remaining ammount then proceed the process...\n",acc5_balance);
            }
            else
            {

                  char acc5_name,acc5_fname,acc5_mname,acc5_occupation,acc5_education,acc5_business,acc5_businesstype,acc5_address,acc5_type;
                  long int acc5_num=99220806,acc5_aadhar=0000,acc5_phone=0000,acc5_voter=0000,acc5_pin=0000,acc5_years=0;
                  float acc5_balance=0;
                  printf("your account is deleted successfully....\n");
            }
        
        }
        
        else
        {
        printf("invalid account number\n");
        }
        
        
        } 
        else if(input2==3||input2==03)
        {
                //transaction history
        }
        else
        {
                printf("invalid input\n");
        }

    }
    else if(input1==2||input1==02)
    {
    	
    printf(">>>MONEY TRANSFER\n\n");
    printf("your account number:");
    scanf("%d",transfer_account1);
    printf("receivers account num:");
    scanf("%d",&transfer_account2);
    printf("enter ammount:");
    scanf("%d",&transfer_ammount);
    
    if(transfer_account1==acc1_num)
    {
     printf("You cannot transfer to your account directly\n");
    }
    else if(transfer_account1==acc2_num)
    {
      if(transfer_ammount<=acc2_balance)
      {
        acc2_balance
      }
      else
      {
        printf("your account has insufficient balance\n");
      }
    }
    else if(transfer_account1==acc3_num)
    {
    
    }
    else if(transfer_account1==acc4_num)
    {
    
    }
    else if(transfer_account1==acc5_num)
    {
    
    }
    else
    {
    
    }   
   
   
    	
    }
    else if(input1==3||input1==03)
    {
              //
    }
    else if(input1==4||input1==04)
    {
              //
    }
    else if(input1==5||input1==05)
    {
              //
    }
    else if(input1==6||input1==06)
    {
             //
    }
    else
    {
              //invalid 
    }



    

}



*/



//pointers basic concepts:
/*
#include<stdio.h>
void main(){
int x=100;
int *y;
y=&x;
int **z;
z=&y;


printf("x value=%d\n",x);
printf("address of x is=%p\n",&x);

printf("value of y=%d\n",*y);
printf("address of y is %p\n",&y);
printf("address of y is %p\n",&(*y));

printf("value of z=%d\n",**z);
printf("address of z=%p\n",&z);
printf("address of z=%p\n",&(*z));
}
*/


//Double pointer + how to do arthematic operation on a ponter:
/*
#include<stdio.h>
void main(){
int x=100;
int *y;
y=&x;
int **z;
z=&y;
//printf("address of x=%p\n",&x);
//printf("address of x=%p\n",&y);
//printf("address of x=%p\n",&z);
printf("z=%d\n",**z);
**z+=100;
printf("%d\n",x);

}
*/



//a void statement can assign any dat_type of value in the pointer variable:
/* 
#include<stdio.h>
void main(){
int x=100;
float pi=3.14;
char c='s';
void *y;
y=&x;
printf("address of x=%p\n",&x);
printf("value of y=%d\n",*(char*)y);//printing the value in the y 
printf("y=%p\n",y);
y=&pi;
printf("value of y=%.2f\n",*(float*)y);
y=&c;
printf("value of y=%c\n",*(char*)y);
}
*/

/*
#include<stdio.h>
void main(){

int array[5]={1,20,3,40,5};
int *p;
p=&array[2];
printf("address of array=%p\n",&array[5]);
printf("the address stored in p is=%p\n",p);

printf("the value of p=%d\n",*p);
p++;
printf("the value of p=%d\n",*p);
p++;
printf("the value of p=%d\n",*p);
p++;
printf("the value of p=%d\n",*p);
p++;
printf("the value of p=%d\n",*p);

}
*/



//accesing costant poiter values from an array:
/*
#include<stdio.h>
void main(){
int x[5]={1,2,3,4,5};
const int *p;
int i;
p=x;
for(i=0;i<5;i++){
printf("p=%d\n",*p+i);
}
}
*/



//printing array values using pointers without using loops:
/*
#include<stdio.h>
void main(){
int y=100;
int x[5]={1,2,3,4,5};
int *ptr;
ptr=x;

printf("%d\t%d\t%d\t%d\t%d\t\n",*ptr,*ptr+1,*ptr+2,*ptr+3,*ptr+4);
}
*/


//program to find wheather the two pointers are matching are not ?
/*
#include<stdio.h>
void main(){
int x[5]={1,2,3,4,5};
int *ptr=x;
int *ptr2=&x[0];
if(ptr==ptr2){
printf("matching\n");
}
else{
printf("not matching\n");
}
}
*/

//changing/modifying the array values by using the pointers concept:
/*
#include<stdio.h>
void main(){

int x[5]={1,2,3,4,5};
int *ptr;

ptr=&x[0];

int i;
for(i=0;i<5;i++){
*ptr+=100;
*ptr++;
}

printf("ptr=%d\n",*ptr);

for(i=0;i<5;i++){
printf("%d\t",x[i]);
}
printf("\n");
}

*/




//upper to lower and lower to upper code:
/*
#include<stdio.h>
void main(){
char x[100];
char y[100];
int i=0,k,j;
printf("enter string:");
scanf("%[^\n]",x);



while(x[i]!='\0'){

k=(int)x[i];
if(k>=65 && k<=90){
j=k+32;
(char)j;
x[i]=j;

}
else if(k>=97 && k<=122){
j=k-32;
(char)j;
x[i]=j;
}
else{
(char)k;
x[i]=k;
}

i++;
}
printf("%s\n",x);
}
*/


//write a functions to find the length of the string,copying a string,concatenating a string,conversion to uppercase,and comparing the two strings:
/*
#include<stdio.h>
int length(char x[100]);
void copy(char y[100],char y1[100]);
void concat(char z[100],char z1[100],char z2[100]);
void upper(char u[100]);
void compare(char c[100],char c1[100]);
void main(){
char x[100];
char y[100];
char y1[100];
char z[100];
char z1[100];
char z2[100];
char u[100];
char c[100];
char c1[100];
length(x);
copy(y,y1);
concat(z,z1,z2);
upper(u);
compare(c,c1);
}

//func to find the length of the string:
int length(char x[100]){
printf("---------FINDING LENGTH--------\n");
printf("enter string:");
scanf("%[^\n]",x);
int i=0;
while(x[i]!='\0'){
i++;
}
printf("length of the string=%d\n",i);
}


//func to copying the string:
//01)
void copy(char y[100],char y1[100]){
printf("---------COPYING STRINGS--------\n");
int i=0;
printf("enter string:");
scanf("%s",y);
printf("string before copying:-\n");
printf("%s\n",y);
while(y[i]!='\0'){
y1[i]=y[i];
i++;
}
printf("string after copying:-\n");
printf("%s\n",y1);
}

//func to concatenate two strings:
void concat(char z[100],char z1[100],char z2[100]){
printf("---------CONCATENATING TWO STRINGS---------\n");
int i=0,j=0;
printf("enter string1:");
scanf("%s",z);
printf("enter string2:");
scanf("%s",z1);

while(z[i]!='\0'){
z2[i]=z[i];
i++;
}

while(z1[j]!='\0'){
z2[i]=z1[j];
i++;
j++;
}
printf("after concatenation:-\n");
printf("%s\n",z2);
}


//CONVERSION TO UPPER:
void upper(char u[100]){
printf("-------CONVERSION TO UPPER----------\n");
int i=0,k,j;

printf("enter the string");
scanf("%s",u);

while(u[i]!='\0'){
k=(int)u[i];
if(k>=97 && k<=122){
j=k-32;
(char)j;
u[i]=j;
}
i++;
}
printf("after conversion:-");
printf("%s\n",u);
}

//comparison of two strings:
void compare(char c[100],char c1[100]){
printf("------two strings comparison---------\n");
int i=0,j=0;
printf("enter string1:");
scanf("%s",c);
printf("enter string2:");
scanf("%s",c1);

while(c[i]!='\0'){
if(c[i]==c1[i]){
j++;
}
i++;
}
if(i==j){
printf("two strings are matching\n");
}
else{
printf("two strings are not matching\n");
}

}

*/



//OPERTAING PRCEDENCE IS IMPORTANT IN POINTERS WHILE YOU ARE USING THE INCREMENTING OR DECREMENTIING THE PTR VALUES OR ADDRESSES:
/*
#include<stdio.h>
void main(){
int x[5]={100,200,300,400,500};
int *ptr1;
ptr1=x;

//ptr++;//WE KNOW THAT IT INCREMENT THE ADDRESS OF THE POINTER
printf("before incrementing:-\n");
printf("ptr=%d\n",*ptr1);

*ptr1++; 
//but it also increments the address only/-

printf("after incrementing:-\n");
printf("ptr=%d\n",*ptr1);

//actually it have to increment the value(100+1=101) but it increasing the address of the pointer and returning the vale 200(next element).This is due to operator associativity and operator precedence.

//solving the above problem by using operator precedence:

int y[5]={1000,2000,3000,4000,5000};
int *ptr2;
ptr2=y;
printf("before incrementing:-\n");
printf("ptr2=%d\n",*ptr2);
(*ptr2)++;   	//used operator precedence
printf("before incrementing:-\n");
printf("ptr2=%d\n",*ptr2);
//here,it not incremented the address rather it incremented the value(1000+1=10001)
}
*/



//comparing the two arrays elements using pointers:
/*
#include<stdio.h>
void main(){
int x[5]={55,33,22,66,77};
int y[5]={55,33,33,4,7};

int *ptr1=x;
int *ptr2=y;

int i=2,j=0;

for(i=0;i<5;i++){

if(*ptr1==*ptr2){
j+=1;
}
ptr1++;
ptr2++;
}
if(j==5){
printf("All the elements are matching...\n");
}
else if(j==0){
printf("No elements are matching...\n");
}
else{
printf("All the elements are not matching\nonly %d elements are matching...\n",j);
}
}
*/

//accessing and printing array elements by using loops:
/*
#include<stdio.h>
void main(){
int x[5]={1,22,333,4444,55555};
int *ptr;
ptr=x;
int i;

for(i=0;i<5;i++){
printf("%d\n",*ptr);
ptr++;
}

}                    

*/


//modyfing all the array elements using looops:
/*
#include<stdio.h>
void main(){
int x[5]={1,22,333,4444,55555};
int *ptr;
ptr=x;
int i;

for(i=0;i<5;i++){
printf("%d\n",(*ptr)+=100);
ptr++;
}
} 
*/


//facts:



//intersection program:
/*
#include<stdio.h>
int x[5]={0};
int y[5]={0};
int i;
printf("enter array 1 elements:\n")
for(i=0;i<5;i++){
printf("enter element:");
scanf("%d",&x[i]);
}
printf("enter array 2 elements:\n")
for(i=0;i<5;i++){
printf("enter element:");
scanf("%d",&y[i]);
}

if(x[0]==0 || y[0]==0){
printf("you are unable to do the intersection due to insufficient elements\n",);
}
else{
}
}
*/



//Assignment 5: without using functions and arrays
/*
#include<stdio.h>
void main()
{
  int roll;
  printf("enter roll number:\n");
  scanf("%d",&roll);

  switch(roll)
  {
case 1:printf("ID:O211064\nNAME:Mala Sreeram\nMARKS:64\n");
break;
case 2:printf("ID:O220010\nNAME:Kondapavuluri Yasaswini\nMARKS:100\n");
break;
case 3:printf("ID:O220013\nNAME:Shaik Rijvana\nMARKS:73\n");
break;
case 4:printf("ID:O220015\nNAME:PVN Madhu Hemanth\nMARKS:75\n");
break;
case 5:printf("ID:O220027\nNAME:P.Rushitha\nMARKS:87\n");
break;
case 6:printf("ID:O220070\nNAME:K.Narasimha Reddy\nMARKS:70\n");
break;
case 7:printf("ID:O220082\nNAME:MS.Sudeep\nMARKS:82\n");
break;
case 8:printf("ID:O220101\nNAME:T.Shivaleela\nMARKS:81\n");
break;
case 9:printf("ID:O220109\nNAME:K.Lakshmi Prasanna\nMARKS:89\n");
break;
case 10:printf("ID:O220118\nNAME:N.BhavyaShree\nMARKS:88\n");
break;
case 11:printf("ID:O220121\nNAME:K.LakshmiPrasanna\nMARKS:71\n");
break;
case 12:printf("ID:O220142\nNAME:E.Asritha\nMARKS:58\n");
break;
case 13:printf("ID:O220151\nNAME:MV.Brahmendra Kumar\nMARKS:49\n");
break;
case 14:printf("ID:O220160\nNAME:Y.Naga Mallishwara Reddy\nMARKS:40\n");
break;
case 15:printf("ID:O220172\nNAME:M.Akshila\nMARKS:72\n");
break;
case 16:printf("ID:O220184\nNAME:B.Akhilandeswari\nMARKS:84\n");
break;
case 17:printf("ID:O220190\nNAME:D.Deepika\nMARKS:90\n");
break;
case 18:printf("ID:O220193\nNAME:N.Keerthi\nMARKS:93\n");
break;
case 19:printf("ID:O220226\nNAME:A.Anitha\nMARKS:74\n");
break;
case 20:printf("ID:O220256\nNAME:P.Rahul\nMARKS:56\n");
break;
case 21:printf("ID:O220276\nNAME:J.Uma MAheswari Bai\nMARKS:76\n");
break;
case 22:printf("ID:O220285\nNAME:S.jyothi\nMARKS:85\n");
break;
case 23:printf("ID:O220290\nNAME:P.Shanmuka Lakshmi\nMARKS:90\n");
break;
case 24:printf("ID:O220309\nNAME:M.Bilqueen\nMARKS:91\n");
break;
case 25:printf("ID:O220310\nNAME:J.Manisharma\nMARKS:FAIL\n");
break;
case 26:printf("ID:O220321\nNAME:G.Sneha\nMARKS:79\n");
break;
case 27:printf("ID:O220330\nNAME:D.Raghavi\nMARKS:70\n");
break;
case 28:printf("ID:O220348\nNAME:J.Srilakshmi\nMARKS:FAIL\n");
break;
case 29:printf("ID:O220401\nNAME:J.Teja\nMARKS:99\n");
break;
case 30:printf("ID:O220407\nNAME:D.Sowmya\nMARKS:93\n");
break;
case 31:printf("ID:O220415\nNAME:K.Ramakrishna\nMARKS:85\n");
break;
case 32:printf("ID:O220830\nNAME:M.NagaLakshmi\nMARKS:70\n");
break;
case 33:printf("ID:O220431\nNAME:K.DurgaBhavani\nMARKS:69\n");
break;
case 34:printf("ID:O220436\nNAME:M.Sreenivasulu\nMARKS:64\n");
break;
case 35:printf("ID:O220451\nNAME:K.Charishma\nMARKS:51\n");
break;
case 36:printf("ID:O220456\nNAME:A.SivaKumar\nMARKS:56\n");
break;
case 37:printf("ID:O220458\nNAME:D.Reshma\nMARKS:92\n");
break;
case 38:printf("ID:O220459\nNAME:K.Gopichandu\nMARKS:59\n");
break;
case 39:printf("ID:O220468\nNAME:M.Lakshmi Pavani\nMARKS:68\n");
break;
case 40:printf("ID:O220486\nNAME:G.Yamini Naga Durga\nMARKS:86\n");
break;
case 41:printf("ID:O220505\nNAME:P.Pavani\nMARKS:95\n");
break;
case 42:printf("ID:O220518\nNAME:Shaik Nagabasha\nMARKS:81\n");
break;
case 43:printf("ID:O220519\nNAME:T.Venkata Vasavi\nMARKS:81\n");
break;
case 44:printf("ID:O220546\nNAME:SD.Iman\nMARKS:54\n");
break;
case 45:printf("ID:O220547\nNAME:SK.Sameera\nMARKS:53\n");
break;
case 46:printf("ID:O220557\nNAME:k.Ashwitha\nMARKS:57\n");
break;
case 47:printf("ID:O220559\nNAME:L.Pujitha\nMARKS:59\n");
break;
case 48:printf("ID:O220564\nNAME:y.Sumanjali\nMARKS:64\n");
break;
case 49:printf("ID:O220581\nNAME:T.Kulayappa\nMARKS:81\n");
break;
case 50:printf("ID:O220597\nNAME:KY.Priyadarshini\nMARKS:97\n");
break;
case 51:printf("ID:O220608\nNAME:Sk.Arifa Kausar\nMARKS:92\n");
break;
case 52:printf("ID:O220615\nNAME:G.Niharika\nMARKS:85\n");
break;
case 53:printf("ID:O220627\nNAME:P.Sharuk Kahan\nMARKS:73\n");
break;
case 54:printf("ID:O220643\nNAME:K.Sowmya\nMARKS:100\n");
break;
case 55:printf("ID:O220651\nNAME:N.Yaswanth\nMARKS:51\n");
break;
case 56:printf("ID:O220684\nNAME:T.Kalyani\nMARKS:84\n");
break;
case 57:printf("ID:O220712\nNAME:MVL.Sai Nikitha\nMARKS:88\n");
break;
case 58:printf("ID:O220727\nNAME:K.Kavya\nMARKS:73\n");
break;
case 59:printf("ID:O220729\nNAME:K.DurgaSree\nMARKS:71\n");
break;
case 60:printf("ID:O220756\nNAME:R.Charan Raj\nMARKS:56\n");
break;
case 61:printf("ID:O220771\nNAME:B>Pravalika\nMARKS:71\n");
break;
case 62:printf("ID:O220814\nNAME:M.Rakshitha\nMARKS:86\n");
break;
case 63:printf("ID:O220818\nNAME:K.Mariyamma\nMARKS:82\n");
break;
case 64:printf("ID:O220849\nNAME:N.Mouvya Sri\nMARKS:51\n");
break;
case 65:printf("ID:O220879\nNAME:Sk.Sabeeha\nMARKS:79\n");
break;
case 66:printf("ID:O220885\nNAME:K.Siddhartha\nMARKS:85\n");
break;
case 67:printf("ID:O220931\nNAME:MV.Naga NAvya\nMARKS:69\n");
break;
case 68:printf("ID:O220956\nNAME:S.Shanuka Sasi\nMARKS:56\n");
break;
case 69:printf("ID:O220958\nNAME:Y.Eswari Kavitha\nMARKS:58\n");
break;
case 70:printf("ID:O220961\nNAME:P.Navya Sree\nMARKS:61\n");
break;
case 71:printf("ID:O221002\nNAME:C.Raju Mohan\nMARKS:98\n");
break;
case 72:printf("ID:O221009\nNAME:A.Navven Naidu\nMARKS:91\n");
break;
case 73:printf("ID:O221031\nNAME:K.Kavya Prasanna\nMARKS:69\n");
break;
case 74:printf("ID:O221055\nNAME:C.Harshitha\nMARKS:55\n");
break;
case 75:printf("ID:O221088\nNAME:B.Bhavana\nMARKS:88\n");
break;
case 76:printf("ID:O221099\nNAME:B.Sai Pujitha\nMARKS:99\n");
break;
case 77:printf("ID:O221148\nNAME:M.Sivani\nMARKS:52\n");
break;
case 78:printf("ID:S220011\nNAME:B.Pujitha\nMARKS:89\n");
break;
case 79:printf("ID:S220109\nNAME:D.Akanksha\nMARKS:91\n");
break;
case 80:printf("ID:S220231\nNAME:T.Naga Venkata Pujitha\nMARKS:69\n");
break;
case 81:printf("ID:S22040\nNAME:Y.Jyoshitha\nMARKS:100\n");
break;
case 82:printf("ID:S220586\nNAME:A.Amuktha Malyada\nMARKS:86\n");
break;
case 83:printf("ID:S220834\nNAME:SD.Khasim Shahid\nMARKS:66\n");
break;
case 84:printf("ID:O220032\nNAME:Y.Madhavi\nMARKS:68\n");
break;
case 85:printf("ID:O220680\nNAME:G.Baby\nMARKS:80\n");
break;
case 86:printf("ID:O220839\nNAME:C.Sumanth Raj Peter\nMARKS:61\n");
break;
case 87:printf("ID:O220202\nNAME:G.Jahnavi\nMARKS:98\n");
break;
case 88:printf("ID:O220485\nNAME:S.Akshitha\nMARKS:85\n");
break;
case 89:printf("ID:O220340\nNAME:K.Jahnavi\nMARKS:60\n");
break;
case 90:printf("ID:O211077\nNAME:B.Vyshnavi\nMARKS:77\n");
break;
case 91:printf("ID:O220102\nNAME:CH.Divya Sri\nMARKS:98\n");
break;
default:printf("enter the roll number upto 1-90 only...\n");
  };

}
*/








//Assignment5: using functions

/*
#include<stdio.h>
void marks(int roll);
void main(){
int roll;
printf("enter roll:");
scanf("%d",&roll);
marks(roll);

}

void marks(int roll){
  switch(roll)
  {
case 1:printf("ID:O211064\nNAME:Mala Sreeram\nMARKS:64\n");
break;
case 2:printf("ID:O220010\nNAME:Kondapavuluri Yasaswini\nMARKS:100\n");
break;
case 3:printf("ID:O220013\nNAME:Shaik Rijvana\nMARKS:73\n");
break;
case 4:printf("ID:O220015\nNAME:PVN Madhu Hemanth\nMARKS:75\n");
break;
case 5:printf("ID:O220027\nNAME:P.Rushitha\nMARKS:87\n");
break;
case 6:printf("ID:O220070\nNAME:K.Narasimha Reddy\nMARKS:70\n");
break;
case 7:printf("ID:O220082\nNAME:MS.Sudeep\nMARKS:82\n");
break;
case 8:printf("ID:O220101\nNAME:T.Shivaleela\nMARKS:81\n");
break;
case 9:printf("ID:O220109\nNAME:K.Lakshmi Prasanna\nMARKS:89\n");
break;
case 10:printf("ID:O220118\nNAME:N.BhavyaShree\nMARKS:88\n");
break;
case 11:printf("ID:O220121\nNAME:K.LakshmiPrasanna\nMARKS:71\n");
break;
case 12:printf("ID:O220142\nNAME:E.Asritha\nMARKS:58\n");
break;
case 13:printf("ID:O220151\nNAME:MV.Brahmendra Kumar\nMARKS:49\n");
break;
case 14:printf("ID:O220160\nNAME:Y.Naga Mallishwara Reddy\nMARKS:40\n");
break;
case 15:printf("ID:O220172\nNAME:M.Akshila\nMARKS:72\n");
break;
case 16:printf("ID:O220184\nNAME:B.Akhilandeswari\nMARKS:84\n");
break;
case 17:printf("ID:O220190\nNAME:D.Deepika\nMARKS:90\n");
break;
case 18:printf("ID:O220193\nNAME:N.Keerthi\nMARKS:93\n");
break;
case 19:printf("ID:O220226\nNAME:A.Anitha\nMARKS:74\n");
break;
case 20:printf("ID:O220256\nNAME:P.Rahul\nMARKS:56\n");
break;
case 21:printf("ID:O220276\nNAME:J.Uma MAheswari Bai\nMARKS:76\n");
break;
case 22:printf("ID:O220285\nNAME:S.jyothi\nMARKS:85\n");
break;
case 23:printf("ID:O220290\nNAME:P.Shanmuka Lakshmi\nMARKS:90\n");
break;
case 24:printf("ID:O220309\nNAME:M.Bilqueen\nMARKS:91\n");
break;
case 25:printf("ID:O220310\nNAME:J.Manisharma\nMARKS:FAIL\n");
break;
case 26:printf("ID:O220321\nNAME:G.Sneha\nMARKS:79\n");
break;
case 27:printf("ID:O220330\nNAME:D.Raghavi\nMARKS:70\n");
break;
case 28:printf("ID:O220348\nNAME:J.Srilakshmi\nMARKS:FAIL\n");
break;
case 29:printf("ID:O220401\nNAME:J.Teja\nMARKS:99\n");
break;
case 30:printf("ID:O220407\nNAME:D.Sowmya\nMARKS:93\n");
break;
case 31:printf("ID:O220415\nNAME:K.Ramakrishna\nMARKS:85\n");
break;
case 32:printf("ID:O220830\nNAME:M.NagaLakshmi\nMARKS:70\n");
break;
case 33:printf("ID:O220431\nNAME:K.DurgaBhavani\nMARKS:69\n");
break;
case 34:printf("ID:O220436\nNAME:M.Sreenivasulu\nMARKS:64\n");
break;
case 35:printf("ID:O220451\nNAME:K.Charishma\nMARKS:51\n");
break;
case 36:printf("ID:O220456\nNAME:A.SivaKumar\nMARKS:56\n");
break;
case 37:printf("ID:O220458\nNAME:D.Reshma\nMARKS:92\n");
break;
case 38:printf("ID:O220459\nNAME:K.Gopichandu\nMARKS:59\n");
break;
case 39:printf("ID:O220468\nNAME:M.Lakshmi Pavani\nMARKS:68\n");
break;
case 40:printf("ID:O220486\nNAME:G.Yamini Naga Durga\nMARKS:86\n");
break;
case 41:printf("ID:O220505\nNAME:P.Pavani\nMARKS:95\n");
break;
case 42:printf("ID:O220518\nNAME:Shaik Nagabasha\nMARKS:81\n");
break;
case 43:printf("ID:O220519\nNAME:T.Venkata Vasavi\nMARKS:81\n");
break;
case 44:printf("ID:O220546\nNAME:SD.Iman\nMARKS:54\n");
break;
case 45:printf("ID:O220547\nNAME:SK.Sameera\nMARKS:53\n");
break;
case 46:printf("ID:O220557\nNAME:k.Ashwitha\nMARKS:57\n");
break;
case 47:printf("ID:O220559\nNAME:L.Pujitha\nMARKS:59\n");
break;
case 48:printf("ID:O220564\nNAME:y.Sumanjali\nMARKS:64\n");
break;
case 49:printf("ID:O220581\nNAME:T.Kulayappa\nMARKS:81\n");
break;
case 50:printf("ID:O220597\nNAME:KY.Priyadarshini\nMARKS:97\n");
break;
case 51:printf("ID:O220608\nNAME:Sk.Arifa Kausar\nMARKS:92\n");
break;
case 52:printf("ID:O220615\nNAME:G.Niharika\nMARKS:85\n");
break;
case 53:printf("ID:O220627\nNAME:P.Sharuk Kahan\nMARKS:73\n");
break;
case 54:printf("ID:O220643\nNAME:K.Sowmya\nMARKS:100\n");
break;
case 55:printf("ID:O220651\nNAME:N.Yaswanth\nMARKS:51\n");
break;
case 56:printf("ID:O220684\nNAME:T.Kalyani\nMARKS:84\n");
break;
case 57:printf("ID:O220712\nNAME:MVL.Sai Nikitha\nMARKS:88\n");
break;
case 58:printf("ID:O220727\nNAME:K.Kavya\nMARKS:73\n");
break;
case 59:printf("ID:O220729\nNAME:K.DurgaSree\nMARKS:71\n");
break;
case 60:printf("ID:O220756\nNAME:R.Charan Raj\nMARKS:56\n");
break;
case 61:printf("ID:O220771\nNAME:B>Pravalika\nMARKS:71\n");
break;
case 62:printf("ID:O220814\nNAME:M.Rakshitha\nMARKS:86\n");
break;
case 63:printf("ID:O220818\nNAME:K.Mariyamma\nMARKS:82\n");
break;
case 64:printf("ID:O220849\nNAME:N.Mouvya Sri\nMARKS:51\n");
break;
case 65:printf("ID:O220879\nNAME:Sk.Sabeeha\nMARKS:79\n");
break;
case 66:printf("ID:O220885\nNAME:K.Siddhartha\nMARKS:85\n");
break;
case 67:printf("ID:O220931\nNAME:MV.Naga NAvya\nMARKS:69\n");
break;
case 68:printf("ID:O220956\nNAME:S.Shanuka Sasi\nMARKS:56\n");
break;
case 69:printf("ID:O220958\nNAME:Y.Eswari Kavitha\nMARKS:58\n");
break;
case 70:printf("ID:O220961\nNAME:P.Navya Sree\nMARKS:61\n");
break;
case 71:printf("ID:O221002\nNAME:C.Raju Mohan\nMARKS:98\n");
break;
case 72:printf("ID:O221009\nNAME:A.Navven Naidu\nMARKS:91\n");
break;
case 73:printf("ID:O221031\nNAME:K.Kavya Prasanna\nMARKS:69\n");
break;
case 74:printf("ID:O221055\nNAME:C.Harshitha\nMARKS:55\n");
break;
case 75:printf("ID:O221088\nNAME:B.Bhavana\nMARKS:88\n");
break;
case 76:printf("ID:O221099\nNAME:B.Sai Pujitha\nMARKS:99\n");
break;
case 77:printf("ID:O221148\nNAME:M.Sivani\nMARKS:52\n");
break;
case 78:printf("ID:S220011\nNAME:B.Pujitha\nMARKS:89\n");
break;
case 79:printf("ID:S220109\nNAME:D.Akanksha\nMARKS:91\n");
break;
case 80:printf("ID:S220231\nNAME:T.Naga Venkata Pujitha\nMARKS:69\n");
break;
case 81:printf("ID:S22040\nNAME:Y.Jyoshitha\nMARKS:100\n");
break;
case 82:printf("ID:S220586\nNAME:A.Amuktha Malyada\nMARKS:86\n");
break;
case 83:printf("ID:S220834\nNAME:SD.Khasim Shahid\nMARKS:66\n");
break;
case 84:printf("ID:O220032\nNAME:Y.Madhavi\nMARKS:68\n");
break;
case 85:printf("ID:O220680\nNAME:G.Baby\nMARKS:80\n");
break;
case 86:printf("ID:O220839\nNAME:C.Sumanth Raj Peter\nMARKS:61\n");
break;
case 87:printf("ID:O220202\nNAME:G.Jahnavi\nMARKS:98\n");
break;
case 88:printf("ID:O220485\nNAME:S.Akshitha\nMARKS:85\n");
break;
case 89:printf("ID:O220340\nNAME:K.Jahnavi\nMARKS:60\n");
break;
case 90:printf("ID:O211077\nNAME:B.Vyshnavi\nMARKS:77\n");
break;
case 91:printf("ID:O220102\nNAME:CH.Divya Sri\nMARKS:98\n");
break;
default:printf("enter the roll number upto 1-90 only...\n");
  };

}
*/


//Assignment 5:using both arrays and functions

/*
#include<stdio.h>
void marks(char x[92][150],int roll);
void main(){
int roll;
char x[92][150]={"please enter roll no from 1 to 90 only/-\n",
"ID:O211064\nNAME:Mala Sreeram\nMARKS:64\n",
"ID:O220010\nNAME:Kondapavuluri Yasaswini\nMARKS:100\n",
"ID:O220013\nNAME:Shaik Rijvana\nMARKS:73\n",
"ID:O220015\nNAME:PVN Madhu Hemanth\nMARKS:75\n",
"ID:O220027\nNAME:P.Rushitha\nMARKS:87\n",
"ID:O220070\nNAME:K.Narasimha Reddy\nMARKS:70\n",
"ID:O220082\nNAME:MS.Sudeep\nMARKS:82\n",
"ID:O220101\nNAME:T.Shivaleela\nMARKS:81\n",
"ID:O220109\nNAME:K.Lakshmi Prasanna\nMARKS:89\n",
"ID:O220118\nNAME:N.BhavyaShree\nMARKS:88\n",
"ID:O220121\nNAME:K.LakshmiPrasanna\nMARKS:71\n",
"ID:O220142\nNAME:E.Asritha\nMARKS:58\n",
"ID:O220151\nNAME:MV.Brahmendra Kumar\nMARKS:49\n",
"ID:O220160\nNAME:Y.Naga Mallishwara Reddy\nMARKS:40\n",
"ID:O220172\nNAME:M.Akshila\nMARKS:72\n",
"ID:O220184\nNAME:B.Akhilandeswari\nMARKS:84\n",
"ID:O220190\nNAME:D.Deepika\nMARKS:90\n",
"ID:O220193\nNAME:N.Keerthi\nMARKS:93\n",
"ID:O220226\nNAME:A.Anitha\nMARKS:74\n",
"ID:O220256\nNAME:P.Rahul\nMARKS:56\n",
"ID:O220276\nNAME:J.Uma MAheswari Bai\nMARKS:76\n",
"ID:O220285\nNAME:S.jyothi\nMARKS:85\n",
"ID:O220290\nNAME:P.Shanmuka Lakshmi\nMARKS:90\n",
"ID:O220309\nNAME:M.Bilqueen\nMARKS:91\n",
"ID:O220310\nNAME:J.Manisharma\nMARKS:FAIL\n",
"ID:O220321\nNAME:G.Sneha\nMARKS:79\n",
"ID:O220330\nNAME:D.Raghavi\nMARKS:70\n",
"ID:O220348\nNAME:J.Srilakshmi\nMARKS:FAIL\n",
"ID:O220401\nNAME:J.Teja\nMARKS:99\n",
"ID:O220407\nNAME:D.Sowmya\nMARKS:93\n",
"ID:O220415\nNAME:K.Ramakrishna\nMARKS:85\n",
"ID:O220830\nNAME:M.NagaLakshmi\nMARKS:70\n",
"ID:O220431\nNAME:K.DurgaBhavani\nMARKS:69\n",
"ID:O220436\nNAME:M.Sreenivasulu\nMARKS:64\n",
"ID:O220451\nNAME:K.Charishma\nMARKS:51\n",
"ID:O220456\nNAME:A.SivaKumar\nMARKS:56\n",
"ID:O220458\nNAME:D.Reshma\nMARKS:92\n",
"ID:O220459\nNAME:K.Gopichandu\nMARKS:59\n",
"ID:O220468\nNAME:M.Lakshmi Pavani\nMARKS:68\n",
"ID:O220486\nNAME:G.Yamini Naga Durga\nMARKS:86\n",
"ID:O220505\nNAME:P.Pavani\nMARKS:95\n",
"ID:O220518\nNAME:Shaik Nagabasha\nMARKS:81\n",
"ID:O220519\nNAME:T.Venkata Vasavi\nMARKS:81\n",
"ID:O220546\nNAME:SD.Iman\nMARKS:54\n",
"ID:O220547\nNAME:SK.Sameera\nMARKS:53\n",
"ID:O220557\nNAME:k.Ashwitha\nMARKS:57\n",
"ID:O220559\nNAME:L.Pujitha\nMARKS:59\n",
"ID:O220564\nNAME:y.Sumanjali\nMARKS:64\n",
"ID:O220581\nNAME:T.Kulayappa\nMARKS:81\n",
"ID:O220597\nNAME:KY.Priyadarshini\nMARKS:97\n",
"ID:O220608\nNAME:Sk.Arifa Kausar\nMARKS:92\n",
"ID:O220615\nNAME:G.Niharika\nMARKS:85\n",
"ID:O220627\nNAME:P.Sharuk Kahan\nMARKS:73\n",
"ID:O220643\nNAME:K.Sowmya\nMARKS:100\n ",
"ID:O220651\nNAME:N.Yaswanth\nMARKS:51\n",
"ID:O220684\nNAME:T.Kalyani\nMARKS:84\n",
"ID:O220712\nNAME:MVL.Sai Nikitha\nMARKS:88\n",
"ID:O220727\nNAME:K.Kavya\nMARKS:73\n",
"ID:O220729\nNAME:K.DurgaSree\nMARKS:71\n",
"ID:O220756\nNAME:R.Charan Raj\nMARKS:56\n",
"ID:O220771\nNAME:B.Pravalika\nMARKS:71\n",
"ID:O220814\nNAME:M.Rakshitha\nMARKS:86\n",
"ID:O220818\nNAME:K.Mariyamma\nMARKS:82\n",
"ID:O220849\nNAME:N.Mouvya Sri\nMARKS:51\n",
"ID:O220879\nNAME:Sk.Sabeeha\nMARKS:79\n",
"ID:O220885\nNAME:K.Siddhartha\nMARKS:85\n",
"ID:O220931\nNAME:MV.Naga NAvya\nMARKS:69\n",
"ID:O220956\nNAME:S.Shanuka Sasi\nMARKS:56\n",
"ID:O220958\nNAME:Y.Eswari Kavitha\nMARKS:58\n",
"ID:O220961\nNAME:P.Navya Sree\nMARKS:61\n",
"ID:O221002\nNAME:C.Raju Mohan\nMARKS:98\n",
"ID:O221009\nNAME:A.Navven Naidu\nMARKS:91\n",
"ID:O221031\nNAME:K.Kavya Prasanna\nMARKS:69\n",
"ID:O221055\nNAME:C.Harshitha\nMARKS:55\n",
"ID:O221088\nNAME:B.Bhavana\nMARKS:88\n",
"ID:O221099\nNAME:B.Sai Pujitha\nMARKS:99\n",
"ID:O221148\nNAME:M.Sivani\nMARKS:52\n",
"ID:S220011\nNAME:B.Pujitha\nMARKS:89\n",
"ID:S220109\nNAME:D.Akanksha\nMARKS:91\n",
"ID:S220231\nNAME:T.Naga Venkata Pujitha\nMARKS:69\n",
"ID:S22040\nNAME:Y.Jyoshitha\nMARKS:100\n",
"ID:S220586\nNAME:A.Amuktha Malyada\nMARKS:86\n",
"ID:S220834\nNAME:SD.Khasim Shahid\nMARKS:66\n",
"ID:O220032\nNAME:Y.Madhavi\nMARKS:68\n",
"ID:O220680\nNAME:G.Baby\nMARKS:80\n",
"ID:O220839\nNAME:C.Sumanth Raj Peter\nMARKS:61\n",
"ID:O220202\nNAME:G.Jahnavi\nMARKS:98\n",
"ID:O220485\nNAME:S.Akshitha\nMARKS:85\n",
"ID:O220340\nNAME:K.Jahnavi\nMARKS:60\n",
"ID:O211077\nNAME:B.Vyshnavi\nMARKS:77\n",
"ID:O220102\nNAME:CH.Divya Sri\nMARKS:98\n",
};
printf("enter roll:");
scanf("%d",&roll);
marks(x,roll);
}

void marks(char x[92][150],int roll){
int i;
for(i=0;i<92;i++){
if(roll==i){
printf("%s\n",x[i]);
}
}
}


*/


//passing a pointer value directly to a function:
/*
#include<stdio.h>
void pointer(int z);
void main(){
int x=100;
int *y=&x;
pointer(*y);    //*y contain 100 value and that 100 is carried to a pointer  function 
}

void pointer(int z){
printf("z=%d\n",z);
}

*/


//passing the pointer address to print a particular pointer value:
/*
#include<stdio.h>
void pointer(int *z);
void main(){
int x=100;
int *y=&x;
pointer(y);//here y contains address of x that address is going to store in a pointer *z argument in a pointer function:
}

void pointer(int *z){
printf("z=%d\n",*z);
}
*/



/*
#include<stdio.h>
void printNumber(int N);
void printReverse(int M);
int main(){
int N,M;
printf("Enter the number : ");
scanf("%d",&N);
M=N;
printNumber(N);
printf("\n");
printReverse(M);
printf("\n");
return 0;
}
void printNumber(int N){
if(N>=1){
printNumber(N-1);
printf("%d ",N);
}
}
void printReverse(int M){
if(M==1){
printf("%d",1);
}
else{
printf("%d ",M);
printReverse(M-1);
}
}
*/

/*
#include<stdio.h>
int length(char x[100]);
void copy(char y[100],char y1[100]);
void concat(char z[100],char z1[100],char z2[100]);
void upper(char u[100]);
void compare(char c[100],char c1[100]);
void main(){
char x[100];
char y[100];
char y1[100];
char z[100];
char z1[100];
char z2[100];
char u[100];
char c[100];
char c1[100];
length(x);
copy(y,y1);
concat(z,z1,z2);
upper(u);
compare(c,c1);
}

int length(char x[100]){
printf("---------FINDING LENGTH--------\n");
printf("enter string:");
scanf("%[^\n]",x);
int i=0;
while(x[i]!='\0'){
i++;
}
printf("length of the string=%d\n",i);
}


//func to copying the string:
//01)
void copy(char y[100],char y1[100]){
printf("---------COPYING STRINGS--------\n");
int i=0;
printf("enter string:");
scanf("%s",y);
printf("string before copying:-\n");
printf("%s\n",y);
while(y[i]!='\0'){
y1[i]=y[i];
i++;
}
printf("string after copying:-\n");
printf("%s\n",y1);
}

//func to concatenate two strings:
void concat(char z[100],char z1[100],char z2[100]){
printf("---------CONCATENATING TWO STRINGS---------\n");
int i=0,j=0;
printf("enter string1:");
scanf("%s",z);
printf("enter string2:");
scanf("%s",z1);

while(z[i]!='\0'){
z2[i]=z[i];
i++;
}

while(z1[j]!='\0'){
z2[i]=z1[j];
i++;
j++;
}
printf("after concatenation:-\n");
printf("%s\n",z2);
}


//CONVERSION TO UPPER:
void upper(char u[100]){
printf("-------CONVERSION TO UPPER----------\n");
int i=0,k,j;

printf("enter the string");
scanf("%s",u);

while(u[i]!='\0'){
k=(int)u[i];
if(k>=97 && k<=122){
j=k-32;
(char)j;
u[i]=j;
}
i++;
}
printf("after conversion:-");
printf("%s\n",u);
}

//comparison of two strings:
void compare(char c[100],char c1[100]){
printf("------two strings comparison---------\n");
int i=0,j=0;
printf("enter string1:");
scanf("%s",c);
printf("enter string2:");
scanf("%s",c1);

while(c[i]!='\0'){
if(c[i]==c1[i]){
j++;
}
i++;
}
if(i==j){
printf("two strings are matching\n");
}
else{
printf("two strings are not matching\n");
}

}

*/



//structures in c

//instance variables are declaring outside the structure:
/*
#include<stdio.h>
struct employee
{
	char name;
	float salary;
	int id;

};

struct employee e1,e2,e3;

void main(){

e1.name='n';
e1.salary=50000;
e1.id=220518;

e2.name='b';
e2.salary=30000;
e2.id=220767;

e3.name='k';
e3.salary=90000;
e3.id=820767;


printf("name:%c\nsalary:%f\nid:%d\n",e1.name,e1.salary,e1.id);
printf("\n");
printf("name:%c\nsalary:%f\nid:%d\n",e2.name,e2.salary,e2.id);
printf("\n");
printf("name:%c\nsalary:%f\nid:%d\n",e3.name,e3.salary,e3.id);
printf("\n");
}       
*/


//declaring the instance variables inside the main() function:
/*
#include<stdio.h>
struct employee
{
	char name;
	float salary;
	int id;

};



void main(){
struct employee e1,e2,e3;
e1.name='n';
e1.salary=50000;
e1.id=220518;

e2.name='b';
e2.salary=30000;
e2.id=220767;

e3.name='k';
e3.salary=90000;
e3.id=820767;


printf("name:%c\nsalary:%f\nid:%d\n",e1.name,e1.salary,e1.id);
printf("\n");
printf("name:%c\nsalary:%f\nid:%d\n",e2.name,e2.salary,e2.id);
printf("\n");
printf("name:%c\nsalary:%f\nid:%d\n",e3.name,e3.salary,e3.id);
printf("\n");
}       
*/
   


/*
#include<stdio.h>
struct employee
{
	char name;
	float salary;
	int id;

}x;

struct school
{
	char name;
	float marks;
	int id;

}y;


void main(){
x.name='B';
x.salary=56000;
x.id=98789;


y.name='D';
y.marks=19.73;
y.id=777;

printf("name:%c\nsalary:%f\nid:%d\n",x.name,x.salary,x.id);
printf("\n");
printf("name:%c\nmarks:%f\nid:%d\n",y.name,y.marks,y.id);
}
*/



/*
#include<stdio.h>
#include<string.h>
struct students
{
int REGID;
char Name[30];
float CGPA;
char Village[30];
char District[30];
long int Phone;
};
int main(){
int i,n;
float avg_CGPA=0;
struct students stu[50];
printf("Enter the no.of students : ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter the REGID : ");
scanf("%d",&stu[i].REGID);
printf("Enter the Name : ");
scanf("%s",stu[i].Name);
printf("Enter the CGPA : ");
scanf("%f",&stu[i].CGPA);
printf("Enter the Village : ");
scanf("%s",stu[i].Village);
printf("Enter the District : ");
scanf("%s",stu[i].District);
printf("Enter the Phone number : ");
scanf("%ld",&stu[i].Phone);
}
for(i=0;i<n;i++){
avg_CGPA=avg_CGPA+stu[i].CGPA;
}
avg_CGPA=avg_CGPA/4;
printf("Average CGPA : %.3f \n",avg_CGPA);
printf("Mobile numbers of students who got above average CGPA i.e. %.3f : \
n",avg_CGPA);
for(i=0;i<n;i++){if(stu[i].CGPA>avg_CGPA){
printf("%ld \n",stu[i].Phone);
}
}
return 0;
}
*/


//----------------------LAB PRACTICE--------------------------------

//Program to find the gievn number is Even number or 

/*
#include <stdio.h>
void main()
{
int x;
printf("enter any number:");
scanf("%d",&x);
if(x%2==0)
{
printf("%d is a Even number\n",x);
}
else
{
printf("%d is not a Even number\n",x);
}

}
*/


//Perform the operations on two variables for add,sub,mul,div,pow

/*
#include<stdio.h>
#include<math.h>
void main()
{
int x,y,z,temp;

printf("01)Addition\n02)Subtration\n03)Multiplication\n04)Division\n05)Power\n");
printf("enter your option:");
scanf("%d",&z);
printf("enter x & y values:");
scanf("%d%d",&x,&y);

switch(z)
{
case 1:printf("%d + %d = %d\n",x,y,x+y);
	break;
case 2:printf("%d - %d = %d\n",x,y,x-y);
	break;
case 3:printf("%d * %d = %d\n",x,y,x*y);
	break;
case 4:printf("%d / %d = %d\n",x,y,x/y);
	break;
case 5:printf("%d ^ %d = %f\n",x,y,pow(x,y));
	break;
default:printf("Choose above any one of the option only/-\n");
	break;
		

}
}

*/


//Swapping two numbers with using temp var:

/*
#include<stdio.h>
void main()
{
int x,y,temp;
printf("Enter x & y values:");
scanf("%d%d",&x,&y);
printf("Before swapping:-\n");
printf("x=%d\ty=%d\n",x,y);
temp=x;
x=y;
y=temp;
printf("After swapping:-\n");
printf("x=%d\ty=%d\n",x,y);
}
*/


//Swapping two numbers without using temp var:
/*
#include<stdio.h>
void main()
{
int x,y;
printf("enter x & y values:");
scanf("%d%d",&x,&y);
printf("Before swapping:-\n");
printf("x=%d\ty=%d\n",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("After swapping:-\n");
printf("x=%d\ty=%d\n",x,y);
}
*/



//program to find the gievn number is perfect square or not

/*
#include<stdio.h>
void main()
{
int n,i,temp=0;
printf("enter n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if((i*i)==n)
{
temp=1;
}
}
if(temp==1)
{
printf("%d is a perfect square number\n",n);
}
else
{
printf("%d is not a perfect square number\n",n);
}
}
*/



//program to find the perfect numbers upto n value:
/*
#include<stdio.h>
void main()
{
int n,i,temp=0;
printf("enter n value:");
scanf("%d",&n);
printf("Perfect numbers upto %d are:-\n",n);
for(i=1;i<i+1;i++)
{
if(temp!=n)
{
printf("%d\n",i*i);
temp++;
}
else
{
break;
}
}
}
*/


//print the factors for a gievn number:

/*
#include<stdio.h>
void main()
{
int x,i;
printf("enter x value:");
scanf("%d",&x);
printf("factors for the %d are:-\n",x);
for(i=1;i<=x;i++)
{
if(x%i==0)
{
printf("%d\n",i);
}
}
}
*/


//factorial of a given number are:-

/*
#include<stdio.h>
void main()
{
int x,i,fact=1;
printf("enter x value:");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
fact=fact*i;
}
printf("Factorial of %d is:-%d\n",x,fact);
}
*/


//find the given number is palindrome num or not:
/*
#include<stdio.h>
void main()
{
int x,temp,rev=0,last;
printf("enter x value:");
scanf("%d",&x);
temp=x;
while(x!=0)
{
last=x%10;
rev=rev*10+last;
x=x/10;
}
if(temp==rev)
{
printf("%d is a palindrome number\n",temp);
}
else
{
printf("%d is not a palindrome number\n",temp);
}

}
*/


//program to find the gievn num is a prime num or not:
/*
#include<stdio.h>
void main()
{
int x,i,c=0;
printf("enter x value:");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
if(x%i==0)
{
c+=1;
}
}
if(c==2)
{
printf("%d is a prime number\n",x);
}
else
{
printf("%d is not a prime number\n",x);
}
}
*/


//program to print the fibanocci series upto a given value:
/*
#include<stdio.h>
void main()
{
int x,a=0,b=1,sum=0,i;
printf("enter x value:");
scanf("%d",&x);
for(i=0;i<x;i++){
printf("%d\t",sum);
a=b;
b=sum;
sum=a+b;
}
printf("\n");
}
*/


//program to print the prime numbers upto given n value:

/*
#include<stdio.h>
void main()
{

int n,j,i;
printf("enter n value:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{	
	int c=0;
	for(j=1;j<=i;j++)
	{	
		if(i%j==0)
		{
			
			c++;
		}
	}
	
	if(c==2)
	{
		printf("%d\n",i);
	}
	
}
}

*/




//program to check the given number is a perfect number or not:
/*
#include<stdio.h>
void main()
{
int x,i,sum=0;
printf("enter x value:");
scanf("%d",&x);

for(i=1;i<x;i++)
{
	if(x%i==0)
	{
		sum+=i;		
		
	}

}
if(sum==x)
{
	printf("%d is a perfect number\n",x);
}
else
{
	printf("%d is not a perfect number\n",x);
}
}

*/



//program to print perfect numbers upto n value:
/*
#include<stdio.h>
void main()
{
int n,i,j;
printf("enter n value:");
scanf("%d",&n);
if(n<6)
{
printf("enter a num that is greater than 6\n");
}
else
{
for(i=1;i<=n;i++)
{	int sum=0;
	for(j=1;j<i;j++)
	{
		if(i%j==0)
		{
		sum+=j;
		}

	}
	if(sum==i)
	{
	printf("%d\n",i);
	}
}
}
}
*/


//find the sum,mean, and product of all elements in the array:

/*
#include<stdio.h>
void main()
{
int n,sum=0,product=1,i;
float mean;
printf("enter no.of elements you want to enter:");
scanf("%d",&n);

int array[n];

for(i=0;i<n;i++)
{
printf("enter array[%d]=",i);
scanf("%d",&array[i]);
}

for(i=0;i<n;i++)
{
sum=sum+array[i];
product=product*array[i];
}

printf("SUM=%d\n",sum);
printf("PRODUCT=%d\n",product);
mean=sum/n;
printf("MEAN=%f\n",mean);
}
*/



//Program to insert an element an element into an array:
/*
#include<stdio.h>
void main()
{
int n,element,pos,i;
printf("enter how many no.of elements you want to enter:");
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++)
{
	printf("enter x[%d]=",i);
	scanf("%d",&x[i]);
}

printf("array before inserting an element is:-\n");
for(i=0;i<n;i++)
{
	printf("%d\t",x[i]);
}
printf("\n");

printf("enter the pos you want to insert:");
scanf("%d",&pos);
printf("enter the element you want to add:");
scanf("%d",&element);


for(i=n+1;i>=pos;i--)
{
	x[i]=x[i-1];
	

}
x[pos]=element;
printf("array before inserting an element is:-\n");
for(i=0;i<n+1;i++)
{
	printf("%d\t",x[i]);
}
printf("\n");
}
*/


//program to delete an element from an array:
/*
#include<stdio.h>
void main()
{
int pos,i,n;
printf("enter no.of elements you want to enter:");
scanf("%d",&n);
int x[n];

for(i=0;i<n;i++)
{
	printf("enter x[%d]=",i);
	scanf("%d",&x[i]);
}

printf("the array before deleting an element is:-\n");
for(i=0;i<n;i++)
{
	printf("%d\t",x[i]);
}
printf("\n");

printf("enter the position you want to delete:");
scanf("%d",&pos);

for(i=pos;i<n;i++)
{
	x[i]=x[i+1];
}
printf("the array before deleting an element is:-\n");
for(i=0;i<n-1;i++)
{
	printf("%d\t",x[i]);
}
printf("\n");
}
*/


//program to sort all the  elements in an array:
/*
#include<stdio.h>
void main()
{
int n,i,j,temp;
printf("enter no.of elements you want to enter:");
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++)
{
	printf("enter x[%d]=",i);
	scanf("%d",&x[i]);
}
printf("The array before sorting is:-\n");
for(i=0;i<n;i++)
{
	printf("%d\t",x[i]);
}
printf("\n");

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(x[i]>x[j])
		{
			temp=x[j];
			x[j]=x[i];
			x[i]=temp;
		}
	}
}
printf("The array after sorting is:-\n");
for(i=0;i<n;i++)
{
	printf("%d\t",x[i]);
}
printf("\n");
}
*/


//print the sum of a two matrices:
/*
#include<stdio.h>
void main()
{
int rows1,cols1,rows2,cols2,i,j;
printf("enter no.of rows and cols of matrix-1:");
scanf("%d%d",&rows1,&cols1);
printf("enter no.of rows and cols of matrix-2:");
scanf("%d%d",&rows2,&cols2);


if(rows1==rows2 && cols1==cols2)
{
	int x[rows1][cols1];
	int y[rows2][cols2];
	int z[rows1][cols1];

for(i=0;i<rows1;i++)
{
	for(j=0;j<cols1;j++)
	{
		printf("enter x[%d][%d]=",i,j);
		scanf("%d",&x[i][j]);
	}
}


for(i=0;i<rows2;i++)
{
	for(j=0;j<cols2;j++)
	{
		printf("enter y[%d][%d]=",i,j);
		scanf("%d",&y[i][j]);
	}
}


printf("MATRIX-1:-\n");
for(i=0;i<rows1;i++)
{
	for(j=0;j<cols1;j++)
	{
		printf("%d\t",x[i][j]);
	}
	printf("\n");
}


printf("MATRIX-2:-\n");
for(i=0;i<rows2;i++)
{
	for(j=0;j<cols2;j++)
	{
		printf("%d\t",y[i][j]);
	}
	printf("\n");
}


for(i=0;i<rows1;i++)
{
	for(j=0;j<cols1;j++)
	{
		z[i][j]=x[i][j]+y[i][j];
	}
}


printf("ADDITION MATRIX IS-:-\n");
for(i=0;i<rows1;i++)
{
	for(j=0;j<cols1;j++)
	{
		printf("%d\t",z[i][j]);
	}
	printf("\n");
}

}
else
{
	printf("no.of rows and cols are not equal\n");
}
}
*/



//Transpose of a matrix:
/*
#include<stdio.h>
void main()
{
int rows,cols,i,j;
printf("enter no.of rows and cols:-");
scanf("%d%d",&rows,&cols);

int x[rows][cols];
int y[rows][cols];

for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
	printf("enter x[%d][%d]=",i,j);
	scanf("%d",&x[i][j]);
}
}
printf("MATRIX IS:-\n");
for(i=0;i<rows;i++)
{
	for(j=0;j<cols;j++)
	{
		printf("%d\t",x[i][j]);
	}
	printf("\n");
}

for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
y[i][j]=x[j][i];
}
}


printf("TRANSPOSE OF A MATRIX IS:-\n");
for(i=0;i<rows;i++)
{
	for(j=0;j<cols;j++)
	{
		printf("%d\t",y[i][j]);
	}
	printf("\n");
}


}
*/




//conversion from upper to lower and lower to upper:
/*
#include<stdio.h>
void main()
{
char x[100];
int i=0,k;
printf("enter the string:");
scanf("%[^\n]",x);
printf("enterd string is:-\n");
printf("%s\n",x);

while(x[i]!='\0')
{
k=(int)x[i];
if(k>=65 && k<=90)
{
k+=32;
x[i]=(char)k;
}
else if(k>=97 && k<=122)
{
k-=32;
x[i]=(char)k;
}
else
{
x[i]=(char)k;
}
i++;
}
printf("converted string is:-\n");
printf("%s\n",x);
}
*/


//find no.of vowels,consonants and digits in a string:
/*
#include<stdio.h>
void main()
{
char x[100];
int i=0,v=0,c=0,d=0,temp;
printf("enter a string:");
scanf("%[^\n]",x);
printf("enterd string is:-\n");
printf("%s\n",x);

while(x[i]!='\0')
{
temp=(int)x[i];
if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
{
v+=1;
}
else if(temp>=48 && temp<=57)
{
d+=1;
}
else if(temp>=97 && temp<=122)
{
c+=1;
}
i++;
}
printf("vowels=%d\n",v);
printf("digits=%d\n",d);
printf("consonants=%d\n",c);
}

*/


//sorting a string:
/*
#include<stdio.h>
void main()
{
char x[100];
int len=0,i,j;
char temp;
printf("enter a string:");
scanf("%[^\n]",x);

printf("enterd string is:-\n");
printf("%s\n",x);


while(x[len]!='\0')
{
len++;
}

for(i=0;i<len-1;i++)
{
for(j=i+1;j<len;j++){

	if(x[i]>x[j])
	{
	temp=x[i];
	x[i]=x[j];
	x[j]=temp;
	}
}
}

printf("sorted string is:-\n");
printf("%s\n",x);
}
*/



//sorting an array of elements:
/*
#include<stdio.h>
void main()
{
int n,i,j,temp;
printf("enter no.of elements you want to enter:");
scanf("%d",&n);

int x[n];

for(i=0;i<n;i++)
{
printf("x[%d]=",i);
scanf("%d",&x[i]);
}

printf("array before sorting:-\n");
for(i=0;i<n;i++)
{
printf("%d\t",x[i]);
}
printf("\n");

for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(x[i]>x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
}

printf("array after sorting:-\n");
for(i=0;i<n;i++)
{
printf("%d\t",x[i]);
}
printf("\n");
}
*/


//find the strings which are starting with 'C' and 'A':
/*
#include<stdio.h>
void main()
{
int n,i,j,z=0;
printf("enter no.of strings you want to enter:");
scanf("%d",&n);

char x[n][100];

for(i=0;i<n;i++)
{
printf("enter a name:");
scanf("%s",x[i]);
}

printf("enterd names are:-\n");
for(i=0;i<n;i++)
{
printf("%s\n",x[i]);
}

printf("strings starting with C and A are:-\n");
for(i=0;i<n;i++)
{
if(x[i][0]=='a' || x[i][0]=='c' || x[i][0]=='A' || x[i][0]=='C')
{
printf("%s\n",x[i]);
}
}

}
*/


/*
#include<stdio.h>
void multiplication(int x,int y);
void division(int x1,int x2);
void main()
{
int x,y,x1,x2;
printf("enter x and y values for multiplication:");
scanf("%d%d",&x,&y);
printf("enter x1 and x2 values for division:");
scanf("%d%d",&x1,&x2);

multiplication(x,y);
division(x1,x2);
}

void multiplication(int x,int y)
{
int i,sum=0;
for(i=0;i<y;i++)
{
sum+=x;
}
printf("%d * %d =%d\n",x,y,sum);
}
void division(int x1,int y1)
{
int q=0;
while(x1>=y1)
{
x1=x1-y1;
q++;
}
printf("Remainder=%d and Quotient=%d\n",x1,q);
}
*/

//print natural numbers upto n and then n to 1 using recursive method:
/*
#include<stdio.h>
void print_num(int x);
void print_reverse(int y);

void main()
{
int x,y;
printf("enter a num:");
scanf("%d",&x);
y=x;
printf("The numbers are:-\n");
print_num(x);
printf("reversed numbers are:-\n");
print_reverse(y);
} 

void print_num(int x)
{

if(x>=1)
{
print_num(x-1);
printf("%d\n",x);
}
}

void print_reverse(int y)
{
if(y>=1)
{
printf("%d\n",y);
print_reverse(y-1);
}
}
*/


//program to find the perfect square or not without using loops:
/*
#include<stdio.h>
#include<math.h>

void main()
{
int n;
printf("enter a num:");
scanf("%d",&n);
float x=sqrt(n);
int y=x;
if(y==x)
{
printf("it is a perfect square number\n");
}
else
{
printf("it is not a perfect square number\n");
}
}
*/


//sorting the elements in an array:
/*
#include<stdio.h>
void main()
{
int n,temp;
printf("enter no.of elements you want to enter:");
scanf("%d",&n);
int x[n];
for(int i=0;i<n;i++)
{
printf("enter x[%d]=",i);
scanf("%d",&x[i]);
}

printf("enterd array is:-\n");
for(int i=0;i<n;i++)
{
printf("%d\t",x[i]);
}
printf("\n");

for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(x[i]>x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
}

printf("sorted array is:-\n");
for(int i=0;i<n;i++)
{
printf("%d\t",x[i]);
}
printf("\n");


printf("second smallest num is:%d\n",x[1]);
printf("second largest num is:%d\n",x[n-2]);
}
*/



//sorting all the charecters in an array:
/*
#include<stdio.h>
void main()
{
char x[100];
int len=0,i,j;
char temp;
printf("enter the string:");
scanf("%[^\n]",x);

printf("enterd string is:-\n");
printf("%s\n",x);

while(x[len]!='\0')
{
len++;
}


for(i=0;i<len-1;i++)
{
for(j=i+1;j<len;j++)
{
if(x[i]>x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
}

printf("sorted string is:-\n");
printf("%s\n",x);
}
*/


//palindrome string or not:
/*
#include<stdio.h>
void main()
{
char x[100];
char y[100];
printf("enter a string:");
scanf("%s",x);

printf("enterd string is:-\n");
printf("%s\n",x);

int i,j,len=0;

while(x[len]!='\0')
{
len++;
}

for(i=0;i<len;i++)
{
y[i]=x[len-1-i];
}

printf("reversed string is:-\n");
printf("%s\n",y);

for(i=0;i<len;i++)
{
if(x[i]==y[i])
{
j++;
}
}

if(j==len)
{
printf("it is a palindrome string\n");
}
else{
printf("it is not a palindrome string\n");
}
}

*/


//mul and div without using the * and / operators(use funs):
/*
#include<stdio.h>

void multiplication(int x,int y);
void division(int x1,int y1);
void main()
{
int x,y,x1,y1;
printf("enter x & y values for multiplication:");
scanf("%d%d",&x,&y);
printf("enter x1 & y1 values for division:");
scanf("%d%d",&x1,&y1);
multiplication(x,y);
division(x1,y1);
}

void multiplication(int x, int y)
{
int sum=0;
for(int i=0;i<y;i++)
{
sum+=x;
}
printf("%d * %d =%d\n",x,y,sum);
}

void division(int x1,int y1)
{
int q=0;
while(x1>=y1)
{
x1=x1-y1;
q++;
}

printf("remainder=%d and quotient=%d\n",x1,q);
}
*/

//finding x power n using recursion:
/*
#include<stdio.h>
int power(int x,int n);
void main()
{
int x,n;
printf("enter base & power:");
scanf("%d%d",&x,&n);
int z=power(x,n);
printf("%d ^ %d = %d\n",x,n,z);
}

int power(int x,int n)
{
if(x==0)
	return 0;
if(n==0)
	return 1;
return x*power(x,n-1);
}
*/


//multiplication of a matrix:
/*
#include<stdio.h>
void main()
{
int rows1,cols1,rows2,cols2;
int i,j,k;
printf("enter no.of rows and cols of matrix-1:");
scanf("%d%d",&rows1,&cols1);
printf("enter no.of rows and cols of matrix-2:");
scanf("%d%d",&rows2,&cols2);

if(cols1!=rows2)
{
printf("no of rows and cols are not equal:\n");
}
else
{
int res_rows=rows1;
int res_cols=cols2;

int x[rows1][cols1];
int y[rows2][cols2];
int z[res_rows][res_cols];

for(i=0;i<rows1;i++)
{
	for(j=0;j<cols1;j++)
	{
		printf("x[%d][%d]=",i,j);
		scanf("%d",&x[i][j]);
	}
	printf("\n");
}


for(i=0;i<rows2;i++)
{
	for(j=0;j<cols2;j++)
	{
		printf("y[%d][%d]=",i,j);
		scanf("%d",&y[i][j]);
	}
	printf("\n");
}


for(i=0;i<res_rows;i++)
{
	for(j=0;j<res_cols;j++)
	{
		z[i][j]=0;
		for(k=0;k<res_cols;k++)
		{
			z[i][j]=z[i][j]+x[i][k]*y[k][j];
		}
	}
}	


printf("multiplication of two matrices are:-\n");

for(i=0;i<res_rows;i++)
{
	for(j=0;j<res_cols;j++)
	{
		printf("%d\t",z[i][j]);
	}
	printf("\n");
}
}
}

*/



//structures:

/*
#include<stdio.h>
struct students
{
int id;
char name[50];
float cgpa;
char village[50];
char district[50];
long int phone;
}stu[50];


void main()
{
int n,i,top1,r;
printf("enter no.of students:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("Enter id:");
scanf("%d",&stu[i].id);
printf("enter name:");
scanf("%s",stu[i].name);
printf("enter CGPA:");
scanf("%f",&stu[i].cgpa);
printf("enter village:");
scanf("%s",stu[i].village);
printf("enter district:");
scanf("%s",stu[i].district);
printf("enter phone number:");
scanf("%ld",&stu[i].phone);
}


top1=stu[0].cgpa;

for(i=0;i<n;i++)
{
if(stu[i].cgpa>top1)
{
top1=stu[i].cgpa;
r=i;
}
}

printf("****TOPPER DETAILS****\n");
printf("REGID = %d\n",stu[r].id);
printf("Name = %s\n",stu[r].name);
printf("CGPA = %.3f\n",stu[r].cgpa);
printf("Village = %s\n",stu[r].village);
printf("District = %s\n",stu[r].district);
printf("Phone Number = %ld\n",stu[r].phone);
}
*/




//10.2 lab

/*
#include<stdio.h>
struct students
{
int id;
char name[50];
float cgpa;
char village[50];
char district[50];
long int phone;
}stu[50],temp;



void main()
{
int n,i,j;
printf("enter no.of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter id:");
scanf("%d",&stu[i].id);
printf("enter name:");
scanf("%s",stu[i].name);
printf("enter CGPA:");
scanf("%f",&stu[i].cgpa);
printf("enter village:");
scanf("%s",stu[i].village);
printf("enter district:");
scanf("%s",stu[i].district);
printf("enter phone number:");
scanf("%ld",&stu[i].phone);
}

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(stu[i].id>stu[j].id)
		{
			temp=stu[i];
			stu[i]=stu[j];
			stu[j]=temp;
		}	
	}
	
}

printf("List of students in Ascending order of Regn IDs : \n");
for(i=0;i<n;i++){
printf("REGID = %d\n",stu[i].id);
printf("Name = %s\n",stu[i].name);
printf("CGPA = %.3f\n",stu[i].cgpa);
printf("Village = %s\n",stu[i].village);
printf("District = %s\n",stu[i].district);
printf("Phone Number = %ld\n",stu[i].phone);
}

}
*/






/*
#include<stdio.h>
struct students
{
int id;
char name[50];
float cgpa;
char village[50];
char district[50];
long int phone;
}stu[50];



void main()
{
int n,i,j;
float avg_cgpa=4.5;
printf("enter no.of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter id:");
scanf("%d",&stu[i].id);
printf("enter name:");
scanf("%s",stu[i].name);
printf("enter CGPA:");
scanf("%f",&stu[i].cgpa);
printf("enter village:");
scanf("%s",stu[i].village);
printf("enter district:");
scanf("%s",stu[i].district);
printf("enter phone number:");
scanf("%ld",&stu[i].phone);
}

for(i=0;i<n;i++)
{

}
*/



//pascal triangle:
/*
#include<stdio.h>
void main()
{
int i,j,rows,c=1;
printf("enter no.of rows:");
scanf("%d",&rows);

for(i=0;i<rows;i++)
{
for(j=1;j<rows-i;j++)
printf(" ");

for(j=0;j<=i;j++)
{
if(j==0 || i==0)
{
c=1;
}
else
{
c=c*(i-j+1)/j;
}
printf("%d ",c);
}
printf("\n");
}
}
*/





/*
#include<stdio.h>
void main()
{
int n,i,j,k,l;
printf("enter no.of rows:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	for(j=i;j<=n;j++)
	{
	printf(" ");
	}
	for(k=1;k<=i;k++)
	{
	printf("*");
	}
	for(l=1;l<i;l++)
	{
	printf("*");
	}
	printf("\n");
}

for(i=2;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf(" ");
	}
	for(k=i;k<=n;k++)
	{
		printf("*");
	}
	for(l=i;l<n;l++)
	{
		printf("*");
	}
	printf("\n");
}

}

*/



/*
#include<stdio.h>
#include<string.h>

void main()
{
int n,i,j;
printf("enter no.of words:");
scanf("%d",&n);

char x[n][100];
char temp[100];

for(i=0;i<n;i++)
{
printf("enter a name:");
scanf("%s",x[i]);
}

printf("enterd strings:\n");
for(i=0;i<n;i++)
{
printf("%s",x[i]);
}
printf("\n");

for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(x[i],x[j])>0)
{
strcpy(temp,x[i]);
strcpy(x[i],x[j]);
strcpy(x[j],temp);
}
}
}

printf("dictionary order:\n");
for(i=0;i<n;i++)
{
printf("%s\n",x[i]);
}
printf("\n");
}
*/


//---------------pointers-----------------------


//accssing the value stored in a pointer:

/*
#include<stdio.h>
void main()
{
int x=100;
int *ptr;
ptr=&x;
int z=*ptr;
printf("the value of x by using ptr is=%d\n",z);
}
*/


//dealing with values and addresses of pointers and variables:
/*
#include<stdio.h>
void main()
{
int x=100;
printf("address of x=%p\n",&x);
int *ptr=&x;
printf("address stored in ptr =%p\n",ptr);
printf("address of ptr var =%p\n",&ptr);
printf("value stored in ptr var =%d\n",*ptr);
}
*/


//changing or modifying the value of a variable by using pointers:
/*
#include<stdio.h>
void main()
{
int x=100;
printf("x value=%d\n",x);
int *ptr;
ptr=&x;
printf("value at ptr=%d\n",*ptr);
*ptr+=1000;
printf("value at ptr=%d\n",*ptr);
printf("x value=%d\n",x);
}
*/


//performing arthematic operations on pointers:
/*
#include<stdio.h>
void main()
{
int x=100;
int y=200;
int *ptr1=&x;
int *ptr2=&y;
printf("addition of x & y indirectly =%d\n",(*ptr1)+(*ptr2));
printf("subtraction of x & y indirectly =%d\n",(*ptr1)-(*ptr2));
printf("multiplication of x & y indirectly =%d\n",(*ptr1)*(*ptr2));
printf("division of x & y indirectly =%d\n",(*ptr1)/(*ptr2));
printf("modulus of x & y indirectly =%d\n",(*ptr1)%(*ptr2));
}
*/

//incrementation and decrementation operators using pointers:
/*
#include<stdio.h>
void main()
{
int x=100;
int *ptr=&x;
printf("value stored in ptr=%d\n",*ptr);
printf("address stored in ptr=%p\n",ptr);
(*ptr)++;
printf("value stored in ptr=%d\n",*ptr);
ptr++;
printf("address stored in ptr=%p\n",ptr);
}
*/



//pointer to pointer(for 2 pointers):
/*
#include<stdio.h>
void main()
{
int x=100;
int *ptr1=&x;

printf("address of x=%p\n",&x);
printf("value stored in ptr1=%d\n",*ptr1);
printf("address stored in ptr1=%p\n",ptr1);
printf("address of ptr1=%p\n",&ptr1);

int **ptr2=&ptr1;
printf("address stored in ptr2=%p\n",ptr2);
printf("value stored in ptr2=%p\n",*ptr2);
}
*/


//pointer to pointer (for 3 pointers);
/*
#include<stdio.h>
void main()
{
int x=100;

printf("x value=%d\n",x);
printf("x address=%p\n",&x);
printf("\n");
int *ptr1=&x;

printf("ptr1 address=%p\n",&ptr1);
printf("addresss stored in ptr1=%p\n",ptr1);
printf("x value accesing through ptr1=%d\n",*ptr1);
printf("\n");

int **ptr2=&ptr1;

printf("ptr2 address=%p\n",&ptr2);
printf("address stored in ptr2=%p\n",ptr2);
printf("x value accessing through ptr2=%d\n",**ptr2);
printf("x address accessing through ptr2=%p\n",*ptr2);
printf("\n");
int ***ptr3=&ptr2;

printf("ptr3 address=%p\n",&ptr3);
printf("address stored in ptr3=%p\n",ptr3);
printf("x value accessing trough ptr3=%d\n",***ptr3);
printf("x address accessing through ptr3=%p\n",**ptr3);
printf("accseeing ptr1 address throuh ptr3=%p\n",*ptr3);

printf("\n");
}
*/


//VOID pointer:
/*
#include<stdio.h>
void main()
{
int x=100;
printf("address of x=%p\n",&x);
float y=200;
printf("address of y=%p\n",&y);
char z='s';
printf("address of z=%p\n",&z);
printf("\n");
void *ptr=&x;
printf("address of ptr=%p\n",&ptr);
printf("address stored in ptr=%p\n",ptr);
printf("value pointing by the ptr=%d\n",*(int *)ptr);
printf("\n");

ptr=&y;
printf("address of ptr=%p\n",&ptr);
printf("address stored in ptr=%p\n",ptr);
printf("value pointing by the ptr=%f\n",*(float *)ptr);
printf("\n");

ptr=&z;
printf("address of ptr=%p\n",&ptr);
printf("address stored in ptr=%p\n",ptr);
printf("value pointing by the ptr=%c\n",*(char *)ptr);
}
*/





//NULL pointer using NULL:
/*
#include<stdio.h>
void main()
{
int x=100;
int *ptr=NULL;
if(ptr==NULL)
{
printf("hello\n");
}
}
*/

//NULL POINTER using 0:
/*
#include<stdio.h>
void main()
{
int x=100;
int *ptr=0;
if(ptr==NULL)
{
printf("hello\n");
}
}
*/



//MALLOC function:
/*
#include<stdio.h>
#include<stdlib.h>

void main()
{
int *ptr;
int i,size=4;
ptr=malloc(4*sizeof(int));
for(i=0;i<size;i++)
{
scanf("%d",ptr+i);
}

printf("values stored are:-\n");
for(i=0;i<size;i++)
{
printf("%d\n",ptr[i]);
}											
}
*/


//Deallocation of dynamic memory
/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
int *ptr;
ptr=malloc(10);
if(ptr!=NULL)
{
printf("memory is allocated\n");
}
else
{
printf("memory is not allocated\n");
}

free(ptr);

if(ptr!=NULL)
{
printf("memory is allocated\n");
}
else
{
printf("memory is not allocated\n");
}
}

*/



//ACCESSing an array elements through pointers:

/*
#include<stdio.h>
void main()
{
int x[5]={1,2,3,4,5};
int *ptr=x;
for(int i=0;i<5;i++)
{
printf("%d\n",ptr[i]);
}
}
*/



//Assing string values 
/*
#include<stdio.h>
void main()
{
char x[6]="rgukt";
char *ptr=x;
for(int i=0;i<6;i++)
{
printf("%d\n",ptr[i]);
}
}
*/



//functions to a pointer:
/*
#include<stdio.h>
void message()
{
printf("hello world\n");
}

void main()
{
void (*fptr)();
fptr=message;
(*fptr)();
}
*/


//printing the address of the function using pointer function:

/*
#include<stdio.h>
void message()
{
printf("hello world\n");
}

void main()
{
void (*fptr)();
fptr=message;
printf("%p\n",fptr);
printf("address of function message is=%p\n",&message);
}

*/


//adding two elements by using pointer function:
/*
#include<stdio.h>
int add(int x,int y)
{
return x+y;
}

void main()
{
int ans;
int (*fptr)(int,int);
fptr=add;
ans=(*fptr)(5,10);
printf("%d\n",ans);
}
*/




//structure example:
/*
#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[10];
	float cgpa;
	
};
void main()
{
	struct student x;
	strcpy(x.name,"basha");
	x.id=220;
	x.cgpa=8.8;
	
	printf("%s\n",x.name);
	printf("%d\n",x.id);
	printf("%f\n",x.cgpa);
}
*/



//Initalizing values to a structure
/*
#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[10];
	float cgpa;
	
};

void main()
{
struct student x={220,"basha",9.2};

printf("%d\n",x.id);
printf("%s\n",x.name);
printf("%.3f\n",x.cgpa);
}
*/


//NESTED structures:
/*
#include<stdio.h>
#include<string.h>
struct DOB
{
	int date;
	char day[15];
	char month[15];
	
};
struct person
{
	char name[100];
	struct DOB time;
};
void main()
{
struct person x;
strcpy(x.name,"basha");
x.time.date=10;
strcpy(x.time.day,"wednesday");
strcpy(x.time.month,"august");
printf("%s\n",x.name);
printf("%d-%s-%s\n",x.time.date,x.time.day,x.time.month);
}
*/


//passing structure memebers one by one to a function:

/*
#include<stdio.h>
struct cordinate
{
	int x;
	int y;
};

void display(int,int);

void main()
{
struct cordinate p1={22,33};
display(p1.x,p1.y);
}

void display(int x,int y)
{
printf("points are:-%d & %d\n",x,y);
}
*/



//passing entire structure to a structure:
/*
#include<stdio.h>
struct employee
{
	char name[100];
	char district[100];
	char state[100];
};

void display(struct employee);

void main()
{
	struct employee x={"basha","khammam","telangana"};
	display(x);
}

void display(struct employee x)
{
	printf("%s\n",x.name);
	printf("%s\n",x.district);
	printf("%s\n",x.state);
}
*/




//passing structure address to a function:

/* 
#include<stdio.h>
struct employee
{
	char name[100];
	char district[100];
	char state[100];
};

void display(struct employee *x);

void main()
{
	struct employee x={"basha","khammam","telangana"};
	display(&x);
}

void display(struct employee *x)
{
	printf("%s\n",x->name);
	printf("%s\n",x->district);
	printf("%s\n",x->state);
}
*/



//structures to pointers:

/*
#include<stdio.h>
struct employee
{
	char name[20];
	char district[20];
	int age;
};

void main()
{
struct employee x;
struct employee *ptr;
ptr=&x;

printf("enter name:");
scanf("%s",ptr->name);
printf("enter district:");
scanf("%s",ptr->district);
printf("enter age:");
scanf("%d",&ptr->age);


printf("DETAILS ARE:-\n");
printf("%s\n",ptr->name);
printf("%s\n",ptr->district);
printf("%d\n",ptr->age);
}
*/



//pointer to an arrray:--------------------imp
/*
#include<stdio.h>
void main()
{
	int x[5]={1,2,3,4,5};
	int (*ptr)[5];
	ptr=&x;
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*(*ptr+i));
	}
}
*/



//array of pointers:----------------------imp
/*
#include<stdio.h>
void main()
{
int *array[5];
int a=10,b=20,c=30,d=40,e=50;

array[0]=&a;
array[1]=&b;
array[2]=&c;
array[3]=&d;
array[4]=&e;

for(int i=0;i<5;i++)
{
	printf("%d\n",*array[i]);
}
}
*/


//printing the rgukt pattern using strings and pointers:
/*
#include<stdio.h>
void main()
{
char x[6]="rgukt";
char *ptr=x;
for(int i=0;i<6;i++)
{
	printf("%s\n",ptr+i);
}
	
}
*/


//pointer to function:
/*
#include<stdio.h>
int add(int,int);
void main()
{	int ans;
	int (*fptr)();
	fptr=add;
	ans=(*fptr)(100,200);
	printf("%d\n",ans);
}

int add(int x,int y)
{
	return x+y;
}
*/




//malloc function():
/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
int *ptr;
ptr=calloc(3,sizeof(int));

for(int i=0;i<3;i++)
{
scanf("%d",ptr+i);
}
printf("allocated values are:-\n");
for(int i=0;i<3;i++)
{
	printf("%d\n",ptr[i]);
}

printf("x[1]=%d\n",ptr[1]);
}
*/


//REALLOC function():
/*
#include<stdio.h>
#include<stdlib.h>

void main()
{

int *ptr;
ptr=malloc(2*sizeof(int));

for(int i=0;i<2;i++)
{
	scanf("%d",ptr+i);
}
printf("using realloc:-\n");
ptr=realloc(ptr,5);

for(int i=2;i<5;i++)
{
	scanf("%d",ptr+i);
}

printf("total values stored after reallocation are:-\n");
for(int i=0;i<5;i++)
{
	printf("%d\n",ptr[i]);
}
}
*/


//File handling:-fprintf()
/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
fp=fopen("details.txt","w");

fprintf(fp,"my name is Nagabasha\nI am studying B.Tech 1st year\n");

fclose(fp);
}
*/


//fputs()
/*
#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *fp;
fp=fopen("details.txt","w");
char x[100];
scanf("%[^\n]",x);
fputs(x,fp);
fclose(fp);
}
*/


//fputc():
/*
#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *fp;
fp=fopen("details.txt","w");
char x[6]="rgukt:";

fputc(x[0],fp);
fputc(x[1],fp);
fputc(x[2],fp);
fputc(x[3],fp);
fputc(x[4],fp);
fclose(fp);
}
*/


//fwrite()
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
FILE *fp;
fp=fopen("details.txt","w");
char x[5]="rgukt";

fwrite(x,1,strlen(x),fp);

}
*/


//fscanf():
/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
fp=fopen("details.txt","r");
char x[200];
long int y;
while(fscanf(fp,"%s%ld",x,&y)!=EOF)

	printf("%s",x);
	printf("\n");
	printf("%ld\n",y);
}
*/


//fgets()
/*
#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *fp;
fp=fopen("details.txt","r");
char x[100];

while(fgets(x,10,fp)!=NULL)
printf("%s\n",x);

}
*/



//fgetc;
/*
#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *fp;
fp=fopen("details.txt","r");
char ch;

ch=fgetc(fp);
while(ch!=EOF)
{
	printf("%c",ch);
	ch=fgetc(fp);
}

}

*/

//fread()
/*
#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *fp;
fp=fopen("details.txt","r");
char x[51];

fread(x,1,50,fp);
x[51]='\0';
printf("%s\n",x);
}
*/
























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































