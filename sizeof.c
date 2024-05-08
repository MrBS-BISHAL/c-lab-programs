//Create a program to demonstrate the use of the sizeof operator to determine the size of different data types.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    char c;
    float f;
    double d;
    
    printf("Size of int: %u bytes\n", sizeof(i));
    printf("Size of char: %u byte\n", sizeof(c));
    printf("Size of float: %u bytes\n", sizeof(f));
    printf("Size of double: %u bytes\n", sizeof(d));
    
    getch();
}