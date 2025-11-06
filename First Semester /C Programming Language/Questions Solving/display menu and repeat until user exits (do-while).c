// Program to display menu and repeat until user exits (do-while)
#include <stdio.h>

int main() {
    int choice, a, b, result;

    do {
        // Display menu
        printf("\n=== Simple Menu ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = a + b; // formula
                printf("Result = %d\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = a - b; // formula
                printf("Result = %d\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = a * b; // formula
                printf("Result = %d\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                if (b != 0)
                    printf("Result = %.2f\n", (float)a / b); // type cast for float division
                else
                    printf("Error! Division by zero.\n");
                break;

            case 5:
                printf("Exiting program... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5); // repeat until user chooses 5 (Exit)

    return 0;
}

