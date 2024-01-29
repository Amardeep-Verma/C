/*#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 18){
        printf("You are adult \n");
        printf("You can vote \n");
        printf("You can drive ");

    }
    else{
        printf("You are not an adult\n");
        printf("you cannot vote ");
       
    }

     return 0;
}

// program that takes a character as input and prints "Vowel" if it is a vowel (a, e, i, o, u), and "Consonant" otherwise.
#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}




#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Compare the two integers and print the result
    if (num1 == num2) {
        printf("Equal\n");
    } else if (num1 > num2) {
        printf("Greater\n");
    } else {
        printf("Smaller\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Enter the third integer: ");
    scanf("%d", &num3);


    if (num1 >= num2 && num1 >= num3) {
        printf("Maximum: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Maximum: %d\n", num2);
    } else {
        printf("Maximum: %d\n", num3);
    }

    return 0;
}




// TERNARY OPERATOR 

// SYNTAX - Condition ? doSomething if TRUE : doSomething if FALSE;
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    age >=18 ? printf("Adult \n") : printf("not adult \n");
    return 0;

}

 

// SWITCH CASE

#include<stdio.h>
int main()
{
     int day;
     printf("Enter day : ");
     scanf("%d",&day);
     switch(day){
         case 1 : printf("Monday");
         break;
         case 2 : printf("Tuesday");
         break;
         case 3 : printf("Wednesday ");
         break;
         case 4 : printf("Thrusday");
         break;
         default : printf("Enter a valid day ");
         break;
     }
}



#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num >= 0){
        printf("Positive\n");
        if (num % 2 == 0){
            printf("Even");
        }else{
            printf("Negative");
        }
    }
}


#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Marks : ");
    scanf("%d",&marks);
    if (marks <= 30){
        printf("Fail");
    }else{
      printf("Pass");
    }
}



#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks(0-100)");
    scanf("%d",&marks);

    if(marks >=0 && marks <=30){
        printf("FAIL\n");
    }else if(marks >30 && marks <=100){
        printf("PASS\n");
    }else{
        printf("Wrong marks ");

 
    }
    return 0;
}

#include<stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks < 30) {
        printf("GRADE C\n");
    } else if (marks >= 30 && marks < 70) {
        printf("GRADE B\n");
    } else if (marks >= 70 && marks < 90) {
        printf("GRADE A\n");
    } else if (marks >= 90 && marks <= 100) {
        printf("GRADE A+\n");
    } else {
        printf("Wrong marks entered\n");
    }

    return 0;
}



#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);

    if(ch >='A' && ch<='Z'){
        printf("Upper case");
    }
    else if (ch >='a' && ch <='z'){
        printf("lower case");

    }else{
        printf("not a english letter ");
    }
    return 0;
}


program to check if a number is natural or not .


#include <stdio.h>

int isNaturalNumber(int num) {
    return (num > 0);
}

int main() {
    int num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a natural number
    if (isNaturalNumber(num)) {
        printf("%d is a natural number.\n", num);
    } else {
        printf("%d is not a natural number.\n", num);
    }

    return 0;
  }






LOOPS 

print values from 1 to 100
#include<stdio.h>
int main()
{
for(int i = 1 ; i <=50  ; i++){
    printf("Hello world \n");
}
return 0;
}

#include<stdio.h>
int main()
{
    // decrement operator
    // ++i  : pre increment, it means value of i will be increased before using its value in expression
    // i++   : post increment, it means value of i will be increased after using its value in expression

    // --i  : pre decrement , it means value of i will be decrease before using its value in expression
    // i--   : post decrement , it means value of i will be decrease after using its value in expression

    int i=1;

    printf("%d\n",i--);
    printf("%d\n",i);

    printf("%d\n",--i);
    printf("%d\n",i);

    
}

#include<stdio.h>
int main()
{
    for(char ch ='a';ch<='z';ch++){
        printf("%c\n",ch);
    }
}


program that calculates the sum
 of all even numbers from 1 to 50 using a for loop:
 

#include<stdio.h>
int main()
{   int sum = 0;
    for(int i=1 ; i <=50; i++){
         //check if the number is even 
         if (i % 2 == 0 ){
            // add the even number to the sum 
            sum +=i;
         }
    }
    printf("Sum of even numbers from 1 to 50 : %d\n", sum );
    return 0;
}


program to display multiplication table using a for loop

#include<stdio.h>
int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    // display multiplication table for the given number]
    printf("\nMultiplication Table for %d:\n",number);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d \n",number,i,number*i);
    }
}

#include <stdio.h>

int main() {
    int number;
    long long factorial = 1;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate factorial using a for loop
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Display the factorial
    printf("Factorial of %d is: %lld\n", number, factorial);

    return 0;
}


WHILE LOOP
syntax -- while (condition) {
                    // code
             }

#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=5){
        printf("%d\n",i);
        i++;
    }
    return 0;
}




// PRINT THE NUMBERS FROM 0 TO N , IF N IS GIVEN BY USER

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    int i = 0;
    while (i <=n){
        printf("%d\n",i);
        i++;
    }
}



// Print the sum of First n natural number 
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    printf("The sum is %d",sum);
    return 0;
}



// print multiplication table of any number

#include<stdio.h>
int main()
{
    int table;
    printf("Enter table no :\n");
    scanf("%d", &table);
    
    for(int i = 1;i<=10;i++){
        printf("%d x %d = %d\n",table,i,i*table);
    }
    
}


#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        if(i==4){
        break;
    }
    printf("%d\n",i);
}
printf("end");
return 0;
}



// Keep taking numbers as input from user until user enters an odd number.

#include<stdio.h>
int main()
{
    int num;
    do{
        printf("Enter number : ");
        scanf("%d",&num);
        printf("%d\n",num);
        if(num % 2 !=0){
            break;
        }
    }while(1);
    printf("Thank you");
}



// Keep taking numbers as input from user until user enters a number which is multiple of 7

#include<stdio.h>
int main()
{
    int n;
    do {
        printf("Enter a number : ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n % 7 == 0){
            break;
        }
    } while (1);
    {
        printf("Thank you");
    }
    
}



// CONTINUE STATEMENT

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        if(i==3){  // skips 3
            continue;
        }
        printf("%d\n",i);
    }
}


int main()
{
    for(int i=1;i<=10;i++){
        if(i==6){  // skips 3
            continue;
        }
        printf("%d\n",i);
    }
}




// Print odd numbers from 5 to 50
#include<stdio.h>
int main()
{
    for(int i=5;i<=50;i++){
        if(i % 2 !=0 ){
            printf("%d\n",i);
        }
    }
}


// Program to find factorial of a number n 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int fact =1 ;
    for(int i=1;i<=n;i++){
        fact = fact * i;  // fact *= i
    }
    printf("Final factorial is %d",fact);
}


// Multiplication table in reverse order

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    for(int i=10; i>=1; i--){
        printf("%d*%d=%d \n",n,i,n*i);
    }
}



//sum of all numbers between 5 to 50

#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=5;i<=50;i++){
        sum+= i;
    }
    printf("Sum is %d",sum);
}



// FUNCTIONS

// write 2 functions one to print hello and other to print goodbye
#include<stdio.h>

void printHello(); // declaration prototype 

void goodBye();
int main(){
    printHello();  // function call
    goodBye();
    return 0;
}

void printHello(){ // function definition
    printf("Hello\n");
}
void goodBye(){
    printf("Good Bye!\n");
}


//  write a function that prints Namaste if user is indian & bonjour if user is french
#include<stdio.h>
void printNamaste();
void printBonjour();

int main(){
    char ch;
    printf("Enter f for french and i for indian\n");
    scanf("%c",&ch);
    
    if(ch == 'i' ){
            printNamaste();
    } else if( ch == 'f'){
        printBonjour();
    }else{
        printf("Incorrect value entered ");
    }

    return 0;
}

void printNamaste(){
    printf("Namaste \n"); 

}
void printBonjour(){
    printf("Bonjour!");
}



// #include<stdio.h>
//  int sum(int a , int b );

//  int main(){
//     int a,b;
//     printf("Enter two numbers : ");
//     scanf("%d %d", &a,&b);

//     int s = sum(a+b);
//     return 0;
//  }
//  int sum(int x, int y ){
//     return x + y;
//  }


#include<stdio.h>
void printTable(int n);
int main()
{
 int n ;
 printf("enter number : ");
 scanf("%d",&n);0-9

 printTable(n);  // argument/ actual parameter
 return 0;
}

void printTable(int n ){
    for (int i=1;i<=10;i++) {
        printf("%d * %d = %d\n",n,i,n*i);
}
}




#include <stdio.h>

void calculatePrice(float value);

int main() {
    float value = 100.0;
    calculatePrice(value);
    printf("value is %f \n", value);
    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value); // tax is added to the price of an item
    printf("final price is: %f", value);
}



// Use library functions to calculate the square of a number given by user.

// <math.h> --> pow (number , 2) = number ^ 2
//              pow (number , 4) = number ^ 4

#include<stdio.h>
#include<math.h>

int main() {
    double n = 4;
    printf("%f", pow(n, 2));
    return 0;
}



// square of a number

#include<stdio.h>
#include<math.h>
int main()
{   double d;
    printf("Enter no : ");
    scanf("%lf",&d);
    printf("%f", pow (d,2));
    return 0;
}



// write a fuunction to calculate area of a square , a circle & a rectangle

#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a , float b);

int main()
{
    float a = 5.0;
    float b = 10.0;

    printf("Area is : %f", rectangleArea(a,b));
    return 0;
}
float SquareArea(float side){
    return side*side;
}
float  CircleArea(float rad){
    return 3.14 *rad *rad ;
}
float rectangleArea(float a, float b) {
    return a * b;
}



#include<stdio.h>
int main()
{
    char str[10];

    printf("Enter your name");
    scanf("%s",&str);
    printf("Your name is %s",str);
    return 0 ;
}



#include<stdio.h>
int main()
{
    int a=5;
   
    int c;

    printf("The value of a = %d\n",a);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    printf("Value of c is %d",c);
}



#include<stdio.h>
int main()
{
    int a=10;
    int b=5;

    printf("Before swapping a = %d and b = %d\n",a,b);
    printf("After swapping a = %d and b = %d\n" ,b,a );

    return 0;

}

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value a and b : ");
    scanf("%d %d",&a,&b);
    a= a+ b;
    b = a -b;
    a =a -b;
    printf("Swapped value are %d\t %d",a,b);
    return 0;
}



// RECURSION - WHEN A FUNCTION CALLS ITSELF

#include<stdio.h>

void printHW(int count);
int main() {
    printHW(5);
    return 0;
}

// recursive function
void printHW(int count) {
    if (count == 0)
    {
        return;
    }
    printf("Hello world\n");
    printHW(count-1);

}
    
*/

// program to find largest of three numbers
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three values to find the largest : ");
    scanf("%f%f%f",&a,&b,&c);

    if(a>=b && a>=c){
        printf("%f is largest ",a);

    }if (b>=a && b>=c){
        printf("%f is largest ",b);
    }if (c>=a && c>=b){
        printf("%f is largest ",c);
    }
    return 0;
}