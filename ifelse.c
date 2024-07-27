#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int a, b, c, middle = 0;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    if (a > b && a > c && b > c)
        middle = b;
    else if (b > a && b > c && a > c)
        middle = a;
    else if (b > a && b > c && a < c)
        middle = c;
    else if (c > b && c > a && a > b)
        middle = a;
    else if (c > a && c > b && b > a)
        middle = b;
    else
        middle = c;
    printf("\nMiddle is : %d", middle);
    return 0;
}