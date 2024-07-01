// #include <stdio.h>
// #include <math.h>

// // Function whose root we want to find
// double equation(double x) {
//     return x*x - 4;  // Replace with your equation
// }

// // Bisection method to find the root
// double bisection(double a, double b, double epsilon) {
//     double c;

//     while ((b - a) >= epsilon) {
//         // Find middle point
//         c = (a + b) / 2;

//         // Check if root is found
//         if (equation(c) == 0.0)
//             break;

//         // Decide the side to repeat the steps
//         else if (equation(c) * equation(a) < 0)
//             b = c;
//         else
//             a = c;
//     }

//     return c;
// }

// int main() {
//     double a, b, epsilon;

//     // Input the interval [a, b] and the tolerance (epsilon)
//     printf("Enter the interval [a, b]: ");
//     scanf("%lf %lf", &a, &b);
//     printf("Enter the tolerance (epsilon): ");
//     scanf("%lf", &epsilon);

//     // Check if the initial values have opposite signs
//     if (equation(a) * equation(b) >= 0) {
//         printf("Invalid interval. Try again with different values.\n");
//         return 1;  // Exit with an error code
//     }

//     // Find and print the root
//     double root = bisection(a, b, epsilon);
//     printf("The root of the equation is: %lf\n", root);

//     return 0;
// }



#include <stdio.h>
#include <math.h>

double equation(double x) { return x*x - 4; } // Replace with your equation

double bisection(double a, double b, double epsilon) {
    while ((b - a) >= epsilon) {
        double c = (a + b) / 2;
        if (equation(c) == 0.0) break;
        else if (equation(c) * equation(a) < 0) b = c;
        else a = c;
    }
    return (a + b) / 2;
}

int main() {
    double a, b, epsilon;
    printf("Enter [a, b]: "); scanf("%lf %lf", &a, &b);
    printf("Enter epsilon: "); scanf("%lf", &epsilon);

    if (equation(a) * equation(b) >= 0) { printf("Invalid interval.\n"); return 1; }

    double root = bisection(a, b, epsilon);
    printf("Root: %lf\n", root);
    return 0;
}
