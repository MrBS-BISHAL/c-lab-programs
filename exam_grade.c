// Create a program to prompt the user to input their exam score and display their grade based on the score range.
#include <stdio.h>
#include <conio.h>
void main()
{
    float score;
    printf("Enter your Exam Score: ");
    scanf("%f", &score);
    if (score >= 90 && score <= 100)
    {
        printf("Your Grade is 'A'");
    }
    else if (score >= 75 && score < 90)
    {
        printf("Your Grade is 'B'");
    }
    else if (score >= 60 && score < 75)
    {
        printf("Your Grade is 'C'");
    }
    else if (score >= 40 && score < 60)
    {
        printf("Your Grade is 'D'");
    }
    else if (score >= 0 && score < 40)
    {
        printf("Your Grade is 'F'");
    }
    else
    {
        printf("Invalid Input");
    }
    getch();
}