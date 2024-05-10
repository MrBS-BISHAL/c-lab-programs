#include <stdio.h>
#include <conio.h>
void main()
{
  int grade = 'B';

  switch (grade) 
  {
    case 'A':
      printf("Excellent!\n");
      break;
    case 'B':
      printf("Good job!\n");
      break;
    case 'C':
      printf("You passed!\n");
      break;
    default:
      printf("You failed.\n");
  }

    getch();
}