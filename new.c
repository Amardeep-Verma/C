// #include <stdio.h>
// int main()
// {
//     int x = printf("Hello");
//     printf("%d", x);
//     return 0;
// }

// program to find roots of quadratic equation

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int a, b, c, d;
//     float x, y;
//     printf("Enter the value of a,b & c :");
//     scanf("%d%d%d", &a, &b, &c);
//     d = b * b - 4 * a * c; // discriminant formula

//     if (d == 0)
//     {
//         printf("Both roots are equal.\n");
//         x = -b / (2.0 * a);
//         y = x;
//     }
//     else if (d > 0)
//     {
//         printf("Roots are unequal.\n");
//         x = (-b + sqrt(d)) / (2 * a);
//         y = (-b - sqrt(d)) / (2 * a);
//         printf("First root = %f\n", x);
//         printf("Second root = %f\n", y);
//     }
//     else
//     {
//         printf("Roots are imaginary");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float a, b, h;
//     float area;
//     printf("Enter the value for two bases & height of the trapazoid: \n");
//     scanf("%f%f%f", &a, &b, &h);
//     area = 0.5 * (a + b) * h;
//     printf("Area of the trapazoid is: %.2f", area);
//     return 0;
// }

#include <stdio.h>
int main()
{
    void greeting()
    {
        printf("Good morning.");
    }
    greeting();
}

// program to find roots of quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float x, y;
    printf("Enter the value of a,b & c :");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c; // discriminant formula

    if (d == 0)
    {
        printf("Both roots are equal.\n");
        x = -b / (2.0 * a);
        y = x;
    }
    else if (d > 0)
    {
        printf("Roots are unequal.\n");
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        printf("First root = %f\n", x);
        printf("Second root = %f\n", y);
    }
    else
    {
        printf("Roots are imaginary");
    }
    return 0;
}
