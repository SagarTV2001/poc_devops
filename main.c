#include <stdio.h>
#include "calculator.h"

int main() {
    int num1;
    int num2;
    int choice;
    int result; 
    int squareArea(int side);
int rectangleArea(int length, int width);// use int since add/subtract return int

    printf("Simple Calculator\n");
    printf("1. Add\n2.sub\n3.Divide");
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
            result = sub(num1, num2);
            printf("Result = %d\n", result);
            break;
                        case 3:
            result = div(num1, num2);
            printf("Result = %d\n", result);
            break;
                                case 4:
            result = mul(num1, num2);
            printf("Result = %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
