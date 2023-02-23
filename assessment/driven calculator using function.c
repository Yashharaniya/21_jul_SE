#include <stdio.h>

// function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    // declare variables
    int choice;
    float num1, num2, result;

    // display the menu options to the user
    printf("Welcome to the calculator!\n");
    printf("Please select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // prompt the user to input their choice
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    // prompt the user to input their numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // perform the selected operation and display the result
    switch (choice)
    {
        case 1:
            result = add(num1, num2);
            printf("The sum of %.2f and %.2f is: %.2f", num1, num2, result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("The difference between %.2f and %.2f is: %.2f", num1, num2, result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("The product of %.2f and %.2f is: %.2f", num1, num2, result);
            break;
        case 4:
            result = divide(num1, num2);
            printf("The quotient of %.2f divided by %.2f is: %.2f", num1, num2, result);
            break;
        default:
            printf("Invalid choice. Please try again.");
            break;
    }

    return 0;
}

// function definitions
float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: division by zero.");
        return 0;
    }
    else
    {
        return a / b;
    }
}
