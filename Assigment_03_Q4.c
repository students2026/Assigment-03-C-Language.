#include <stdio.h>
#include <conio.h>


void main()
{
    float price, total, discount, payment;
    int qty;
    clrscr();
    printf("Enter price and quantity: ");
    scanf("%f %d", &price, &qty);
    total = price * qty;
    if (total > 1000)
        discount = total * 0.15;
    else
        discount = total * 0.10;
    payment = total - discount;
    printf("Total = %.2f\nDiscount = %.2f\nPayment = %.2f", total, discount, payment);
    getch();
}