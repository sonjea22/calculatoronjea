//sonjea22
#include <stdio.h>
#include <math.h>

double calculate_average(int num_inputs) {
    double sum = 0, input;
    int i;

    for (i = 0; i < num_inputs; i++) {
        printf("Enter a number: ");
        scanf("%lf", &input);
        sum += input;
    }

    return sum / num_inputs;
}

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
    char operation;

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
    printf("7. Calculate the average\n");
    scanf(" %c", &operation);

    if (operation == '1')
    {
        result = add(num1, num2);
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    }
    else if (operation == '2')
    {
        result = subtract(num1, num2);
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    }
    else if (operation == '3')
    {
        result = multiply(num1, num2);
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    }
    else if (operation == '4')
    {
        if (num2 == 0) {
            printf("Cannot divide by zero.\n");
        } else {
            result = divide(num1, num2);
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        }
    }
    else if (operation == '5')
    {
        if (num1 < 0) {
            printf("Cannot find square root of a negative number.\n");
        } else {
            result = square_root(num1);
            printf("Square root of %.2f = %.2f\n", num1, result);
        }
    }
    else if (operation == '6')
    {
        result = power(num1, (int)num2);
        printf("%.2f ^ %d = %.2f\n", num1, (int)num2, result);
    }
    else if (operation == 'a' || operation == 'A')
    {
        int num_inputs;

    printf("How many numbers do you want to average? ");
    scanf("%d", &num_inputs);

    double average = calculate_average(num_inputs);
    printf("The average is: %.2lf\n", average);
    }
else {
     printf("Invalid operation.Please try again.\n");
}


    return 0;
}

