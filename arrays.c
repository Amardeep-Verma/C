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