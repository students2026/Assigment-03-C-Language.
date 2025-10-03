#include <stdio.h>
#include <conio.h>


void main()
{
    int n, i, marks[50], total = 0, fail = 0;
    float percent;
    clrscr();
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    printf("Enter marks of %d subjects:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
        if (marks[i] < 40)
            fail = 1;
        total += marks[i];
    }
    if (fail == 1)
    {
        printf("Result: Fail");
    }
    else
    {
        percent = (float)total / n;
        printf("Total = %d\nPercentage = %.2f\n", total, percent);
        if (percent >= 70)
            printf("Class: Distinction");
        else if (percent >= 60)
            printf("Class: First Class");
        else if (percent >= 50)
            printf("Class: Second Class");
        else
            printf("Class: Pass Class");
    }
    getch();
}