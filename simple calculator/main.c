//sonjea22
#include <stdio.h>
#include <math.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float square_root(float a) {
    return sqrt(a);
}

float power(float a, int m) {
    return pow(a, m);
}

int main() {
    float num1, num2, result;
    int operation;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the operation to perform: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Find the square root\n");
    printf("6. Raise to power\n");
    scanf("%d", &operation);

    if (operation == 1)
    {
        result = add(num1, num2);
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    } else if (operation == 2)
    {
        result = subtract(num1, num2);
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    } else if (operation == 3)
    {
        result = multiply(num1, num2);
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    } else if (operation == 4)
    {
        if (num2 == 0) {
            printf("Cannot divide by zero.\n");
        } else {
            result = divide(num1, num2);
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        }
    } else if (operation == 5)
    {
        if (num1 < 0) {
            printf("Cannot find square root of a negative number.\n");
        } else {
            result = square_root(num1);
            printf("Square root of %.2f = %.2f\n", num1, result);
        }
    } else if (operation == 6)
    {
        result = power(num1, (int)num2);
        printf("%.2f ^ %d = %.2f\n", num1, (int)num2, result);
    } else {
        printf("Invalid operation.\n");
    }

    return 0;
}
