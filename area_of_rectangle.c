//Write a C program to calculate the area of a rectangle using user input.
#include <stdio.h>
#include <conio.h>
void main()
{
    float l,b;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&b);
    printf("Area of the rectangle is %.2f",l*b);
    getch();
}