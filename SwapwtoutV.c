// WAP in c to swap two values without using third variable.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 5, b = 7;
    printf("a=%d   b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping :\n");
    printf("a=%d   b=%d\n", a, b);
    getch();
}