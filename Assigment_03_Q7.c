#include <stdio.h>
#include <conio.h>


void main()
{
    int choice;
    float a, b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("\nMenu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Sum = %.2f", a + b);
        break;
    case 2:
        printf("Difference = %.2f", a - b);
        break;
    case 3:
        printf("Product = %.2f", a * b);
        break;
    case 4:
        if (b != 0)
            printf("Division = %.2f", a / b);
        else
            printf("Error: Division by zero!");
        break;
    default:
        printf("Invalid Choice");
    }
    getch();
}