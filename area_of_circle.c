//Write a program to calculate the area of a circle using user input for the radius.
#include <stdio.h>
#include <conio.h>
void main()
{
    float r;
    printf("Enter the radius of a circle: ");
    scanf("%f",&r);
    printf("Area of the circle is: %.2f",3.14*r*r);
    getch();
}