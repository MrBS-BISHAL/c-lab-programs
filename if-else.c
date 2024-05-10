//Explain the if-else statement in C with an example.
#include <stdio.h>
#include <conio.h>
void main()
{
  int age = 18;

  if (age >= 18) 
  {
    printf("You are an adult.\n");
  } 
  else if (age >= 13) 
  {
    printf("You are a teenager.\n");
  } 
  else 
  {
    printf("You are a child.\n");
  }
    getch();
}
