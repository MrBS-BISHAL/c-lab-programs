#include <stdio.h>
#include <conio.h>
void main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
    {
        printf("%d is even.\n", num);
    } 
    else 
    {
        printf("%d is odd.\n", num);
    }

    getch();
}