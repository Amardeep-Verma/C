/*
1. Array is a linear collection of similar elements
2. Array is also known as subscript elements
3. Array is a group of variable  stored at contiguous memory location



#include<stdio.h>
int main()
{
    int arr[6]={2,4,6,7,23,756};
    printf("Array value at position 6 is %d",arr[5]);
    return 0;
}

// write a program to print average of 10 number entered by user

#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
    sum=sum+a[i];
    avg=sum/10.0;
    printf("Average is %f",avg);
    return 0;
}

1. int a[]; == error
2. int a[5];
3. int a[]={5,2,7};
4. int a[2]= {5,2,7};  == error
5.

*/

// #include <stdio.h>
// int main()
// {
//     int numbers[5] = {10, 20, 30, 40, 50};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("numbers[%d] = %d\n", i, numbers[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int numbers[5] = {10, 20, 30, 40, 50};

//     for (int i = 4; i >= 0; i--) {
//         printf("numbers[%d] = %d\n", i, numbers[i]);
//     }
//  return 0;
// }

#include <stdio.h>

int main()
{
    int number, table;
    printf("Enter any number:");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        table = number * i;
        printf("%d\n ", table);
    }

    return 0;
}
