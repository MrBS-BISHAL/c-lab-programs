//Create a program to calculate the area and perimeter of a rectangle using user input for length and width.
#include <stdio.h>
#include <conio.h>
void main()
{
    float l,b;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&b);
    printf("Area of the rectangle is %.2f\n",l*b);
    printf("Perimeter of the rectangle is %.2f",2*(l+b));
    getch();
}