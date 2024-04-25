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

// #include <stdio.h>
// int main()
// {
//     int marks[10], i, n, sum = 0, average;
//     printf("Enter n");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter marks %d", i + 1);
//         scanf("%d", &marks[i]);
//         sum += marks[i];
//     }
//     average = sum / n;
//     printf("Average is %d", average);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int mat[2][2], trans[2][2], i, j;
    printf("Enter matrix elements: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Matrix elements:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }
    printf("Transpose elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", trans[i][j]);
        }
        printf("\n");
    }
}