// Create a C program to perform arithmetic operations (addition,subtraction, multiplication, division) based on user input.
#include <stdio.h>
#include <conio.h>
void main()
{
    int ch;
    float a, b;
    printf("Enter 1st number: ");
    scanf("%f", &a);
    printf("Enter 2nd number: ");
    scanf("%f", &b);
    printf("\nEnter your choice: \n");
    printf("\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n\n->");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Addition is %.2f", a + b);
        break;
    case 2:
        printf("Subtraction is %.2f", a - b);
        break;
    case 3:
        printf("Multiplication is %.2f", a * b);
        break;
    case 4:
        printf("Division is %.2f", a / b);
        break;
    default:
        printf("Invalid Input");
    }

    getch();
}
