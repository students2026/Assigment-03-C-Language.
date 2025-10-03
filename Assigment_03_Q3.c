#include <stdio.h>
#include <conio.h>


void main()
{
    int a, b, c;
    clrscr();
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("Maximum = %d", a);
    else if (b >= a && b >= c)
        printf("Maximum = %d", b);
    else
        printf("Maximum = %d", c);
    getch();
}