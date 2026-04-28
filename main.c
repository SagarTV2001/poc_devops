#include <stdio.h>
#include "calculator.h"

int main() {
    int num1, num2, choice;
    int result;   // use int since add/subtract return int

    printf("Simple Calculator\n");
    printf("1. Add\n2. Subtract\n3.Multiply\n4.Divide");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result = %d\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result = %d\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result = %d\n", result);
            break;
                case 4:
            result = div(num1, num2);
            printf("Result = %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
