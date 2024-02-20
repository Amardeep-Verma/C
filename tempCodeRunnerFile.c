#include<stdio.h>
int main()
{ 
    int a=20,b=12,c=7,d=15;
    if(a>b && a>c)
    {
        printf("a is Greater");
    }
    else if(b>c && b>d)
    {
        printf("b  is greater");
    }
    else if(c>a && c>d)
    {
        printf("c is greater");
    }
    else
    {
        printf("d is greater");
    }
     return 0;
}