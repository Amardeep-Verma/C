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

*/


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
