//Implement a C program to find the largest element in an array.
#include <stdio.h>
#include <conio.h>
void main()
{
 int a[10],i,largest;
 printf("Enter 10 integers:");
 for(i=0; i<10; i++)
 {
    scanf("%d",&a[i]);
 }
 largest=a[0];
 for(i=1; i<10; i++)
 {
    if(largest<a[i])
    {
        largest=a[i];
    }
 }
 printf("Largest number in the array is %d",largest);
    getch();
}

