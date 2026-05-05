#include <stdio.h>
#include "calculator.h"
#include "area.h"

int main() {
    int num1;
    int num2;
    int choice;
    int result;

    printf("Simple Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Square Area\n");
    printf("5. Rectangle Area\n");
    

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = add(num1, num2);
            printf("Result = %d\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = sub(num1, num2);
            printf("Result = %d\n", result);
            break;
                case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = mul(num1, num2);
            printf("Result = %d\n", result);
            break;

        case 4:
            printf("Enter side: ");
            scanf("%d", &num1);
            result = squareArea(num1);
            printf("Square Area = %d\n", result);
            break;

        case 5:
            printf("Enter length and width: ");
            scanf("%d %d", &num1, &num2);
            result = rectangleArea(num1, num2);
            printf("Rectangle Area = %d\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
