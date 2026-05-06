#include <stdio.h>
#include "calculator.h"

int main() {
    int num1;
    int num2;
    int choice;
    int result;

    printf("Simple Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. divide\n");
  
    

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
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = div(num1, num2);
            printf("Result = %d\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
