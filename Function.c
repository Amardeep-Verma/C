// #include <stdio.h>
// int areaOfRect(int length, int breadth)
// {
//     int area;
//     area = length * breadth;
//     return area;
// }
// int main()
// {
//     int l = 10, b = 5;
//     int area = areaOfRect(l, b);
//     printf("%d", area);
// }

// #include <stdio.h>
// char fun();
// int main()
// {
//     char c = fun();
//     printf("Character is %c", c);
// }
// char fun()
// {
//     return 'a';
// }

#include <stdio.h>

void myFunction()
{ // creating a function
    printf("I just got executed\n");
}

int main()
{
    myFunction(); // calling the function
    myFunction();
    return 0;
}
