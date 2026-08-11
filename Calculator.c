#include <stdio.h>

int calculator(int a, int b, char operator) {
    switch (operator) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':   
            if (b != 0) {
                    return a / b;
                } else {
                    printf("Error: Division by zero\n");
                    return 0; // Return 0 or handle error as needed
                }
    }
}

int main() {
    int num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    int result = calculator(num1, num2, op);
    printf("Result: %d\n", result);
    return 0;
}