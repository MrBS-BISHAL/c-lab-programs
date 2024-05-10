//Implement a C program to convert Celsius to Fahrenheit and vice versa, based on user input.
#include <stdio.h>
#include <conio.h>
void main()
{
    float celsius, fahrenheit;
    int ch;

    printf("1.Convert Celsius to Fahrenheit. \n2.Convert Fahrenheit to Celsius. \n Enter Your Choice: ");
    scanf("%d", &ch);

    if (ch == 1) 
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } 
    else if (ch == 2) 
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } 
    else 
    {
        printf("Invalid choice.\n");
    }
    getch();
    
}
    