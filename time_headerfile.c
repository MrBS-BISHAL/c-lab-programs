#include <stdio.h>
#include <conio.h>
#include <time.h>

void my_function()
{
  for (int i = 0; i < 450000000; i++)
  {
    i++;
  }
}

void main()
{
  clock_t start, end;
  double cpu_time_used;

  start = clock();
  my_function();
  end = clock();

  cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

  printf("The execution time of my_function() is %f seconds.\n", cpu_time_used);

  getch();
}