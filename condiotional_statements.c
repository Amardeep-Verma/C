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

*/

// #include<stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter marks(0-100)");
//     scanf("%d",&marks);

//     if(marks >=0 && marks <=30){
//         printf("FAIL\n");
//     }else if(marks >30 && marks <=100){
//         printf("PASS\n");
//     }else{
//         printf("Wrong marks ");

 
//     }
//     return 0;
// }

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
