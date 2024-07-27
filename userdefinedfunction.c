#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void even()
{
    for (int i = 0; i < 50; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }
}
void print_char(char c, int count)
{
    for (int i = 0; i < count; i++)
        printf("%c  ", c);
}

void print_counting(int n, int dist)
{
    for (int i = 1; i <= n; i = i + dist)
        printf("%d  ", i);
}
int Sum_of(int n, int sum)
{
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    // Task a
    // even();

    // Task b
    //  char ch;
    //  int count;
    //  printf("Enter the character you want to print ");
    //  scanf_s("%c",&ch);
    //  printf("Enter how many times you want to print ");
    //  scanf_s("%d",&count);
    //  print_char(ch,count);

    // Task c
    //  int n,dist;
    //  printf("\n Enter numbers till you want to print: ");
    //  scanf_s("%d",&n);
    //  printf("\n Enter distance between numbers ");
    //  scanf_s("%d",&dist);
    //  print_counting(n,dist);

    // Task d
    //  int n,sum=0;
    //  printf("Enter number of terms :");
    //  scanf_s("%d",&n);
    //  Sum_of(n,sum);
    //  printf("%d",Sum_of(n,sum));

    // Task e
    

    return 0;
}
