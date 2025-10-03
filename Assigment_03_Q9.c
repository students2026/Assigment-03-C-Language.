#include <stdio.h>
#include <conio.h>


void main()
{
    int n;
    clrscr();
    printf("Enter a number between 1-99: ");
    scanf("%d", &n);
    if (n >= 0 && n <= 9)
        printf("Number is in 0–9 slot");
    else if (n >= 10 && n <= 19)
        printf("Number is in 10–19 slot");
    else if (n >= 20 && n <= 29)
        printf("Number is in 20–29 slot");
    else if (n >= 30 && n <= 39)
        printf("Number is in 30–39 slot");
    else if (n >= 40 && n <= 49)
        printf("Number is in 40–49 slot");
    else if (n >= 50 && n <= 59)
        printf("Number is in 50–59 slot");
    else if (n >= 60 && n <= 69)
        printf("Number is in 60–69 slot");
    else if (n >= 70 && n <= 79)
        printf("Number is in 70–79 slot");
    else if (n >= 80 && n <= 89)
        printf("Number is in 80–89 slot");
    else if (n >= 90 && n <= 99)
        printf("Number is in 90–99 slot");
    else
        printf("Invalid Input");
    getch();
}