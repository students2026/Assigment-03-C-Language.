#include <stdio.h>
#include <conio.h>


void main()
{
    int n;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
    getch();

}