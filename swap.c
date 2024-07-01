#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, temp;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swap using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped numbers
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
