#include <stdio.h>
#include "mysource.h"

int main() {
    int a, b;
    char operation;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("Result: %d\n", add(a, b));
            break;
        case '-':
            printf("Result: %d\n", subtract(a, b));
            break;
        case '*':
            printf("Result: %d\n", multiply(a, b));
            break;
        case '/':
            if (b != 0)
                printf("Result: %.2f\n", divide(a, b));
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
