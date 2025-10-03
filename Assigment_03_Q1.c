#include <stdio.h>
#include <conio.h>


void main()
{
    int a, b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("Maximum = %d", a);
    else
        printf("Maximum = %d", b);
    getch();
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           