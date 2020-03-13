#include <stdio.h>
void main()
{
    int x, y;
    printf("\n Enter the values for X and Y");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        printf("\n point (%d, %d) lies in the First quandrant");
    else if (x < 0 && y > 0)
        printf("\n point (%d, %d) lies in the Second quandrant");
    else if (x < 0 && y < 0)
        printf("\n point (%d, %d) lies in the Third quandrant");
    else if (x > 0 && y < 0)
        printf("\n point (%d, %d) lies in the Fourth quandrant");
    else if (x == 0 && y == 0)
        printf("\n point (%d, %d) lies at the origin");
}
