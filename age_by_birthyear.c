//Implement a program that prompts the user to input their birth year and calculates their age.
#include <stdio.h>
#include <conio.h>
void main()
{
  int birthYear,age;

  printf("Enter your birth year: ");
  scanf("%d", &birthYear);

  age = 2024 - birthYear;

  printf("You are %d years old.\n", age);

    getch();
}