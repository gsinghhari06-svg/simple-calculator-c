
#include <stdio.h>

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

int main() {
    float a, b, result;
    int choice;

    do {
        printf("\n===== SIMPLE CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%f", &a);

            printf("Enter second number: ");
            scanf("%f", &b);
        }

        switch (choice) {
            case 1:
                result = add(a, b);
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = subtract(a, b);
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = multiply(a, b);
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if (b != 0) {
                    result = divide(a, b);
                    printf("Result = %.2f\n", result);
                } else {
                    printf("Cannot divide by zero!\n");
                }
                break;

            case 5:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}
