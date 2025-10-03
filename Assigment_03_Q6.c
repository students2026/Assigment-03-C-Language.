#include <stdio.h>
#include <conio.h>


void main()
{
    int unit;
    float bill;
    clrscr();
    printf("Enter number of units: ");
    scanf("%d", &unit);
    if (unit <= 100)
        bill = unit * 2;
    else if (unit <= 200)
        bill = (100 * 2) + (unit - 100) * 5;
    else if (unit <= 300)
        bill = (100 * 2) + (100 * 5) + (unit - 200) * 7;
    else if (unit <= 400)
        bill = (100 * 2) + (100 * 5) + (100 * 7) + (unit - 300) * 10;
    else if (unit <= 500)
        bill = (100 * 2) + (100 * 5) + (100 * 7) + (100 * 10) + (unit - 400) * 12;
    else
        bill = (100 * 2) + (100 * 5) + (100 * 7) + (100 * 10) + (100 * 12) + (unit - 500) * 15;
    printf("Total Bill = %.2f", bill);
    getch();
}