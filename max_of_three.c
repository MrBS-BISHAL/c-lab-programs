//Write a C program to find the maximum among three numbers using if-else statements. 
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("%d is maximum here",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d is maximum here",b);
    }
    else if(c>=a && c>=b)
    {
        printf("%d is maximum here",c);
    }
    getch();
}