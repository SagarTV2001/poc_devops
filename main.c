#include <stdio.h>
#include "calculator.h"
#include "area.h"
#include "test.h"

int main() {
    int num1;
    int num2;
    int choice;
    int result;

    printf("Simple Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Area\n");
    printf("4. Volume\n");
    printf("5. Circumference\n");
    printf("6. Vol\n");
    
   
    

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
            result = area(num1, num2);
            printf("Result = %d\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = volume(num1, num2);
            printf("Result = %d\n", result);
            break;
        case 5:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = circum(num1, num2);
            printf("Result = %d\n", result);
            break;
        case 6:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = vol(num1, num2);
            printf("Result = %d\n", result);
            break;
                

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
