#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    // Task 01

    // int n1,n2,n3,n4;
    // float avg;
    // printf("Enter 1st num : ");
    // scanf_s("%d",&n1);
    // printf("Enter 2nd num : ");
    // scanf_s("%d", &n2);
    //     printf("Enter 3rd num : ");
    // scanf_s("%d",&n3);
    // printf("Enter 4th num : ");
    // scanf_s("%d", &n4);
    // avg=(n1+n2+n3+n4)/4.0;

    // printf("Average is : %f\n",avg);
    // if(n1>=avg)
    //     printf("First number is larger than average\n");
    // else
    //     printf("First number is smaller than average\n");
    // if(n2 >= avg)
    //     printf("Second number is larger than average\n");
    // else
    //     printf("Second number is smaller than average\n");
    // if (n3 >= avg)
    //     printf("Third number is larger than average\n ");
    // else
    //     printf("Third number is smaller than average\n");
    // if(n4>=avg)
    //     printf("Fourth number is larger than average\n ");
    // else
    //     printf("Fourth number is smaller than \n");




    // Task 02

    int a, b, c;
    a = rand() % 5 + 1;
    b = rand() % 5 + 1;
    c = rand() % 5 + 1;
    printf("A : %d\t B : %d\t C : %d\n", a, b, c);
    if (a == b && a == c && b == c)
        printf("All are equal");
    else if ((a != b && a != c && b != c) && (a > b && a > c && b > c))
    {
        printf("All are different\n");
        printf("First is largest\n");
        printf("Second is in middle of first and third\n");
        printf("Third is smallest\n");
        printf("First and second are greater than third");
    }
    else if ((a != b && a != c && b != c) && (b > a && b > c && a > c))
    {
        printf("All are different\n");
        printf("Second is largest\n");
        printf("First is in middle of second and third\n");
        printf("Third is smallest\n");
        printf("Second and third are greater than first");
    }
    else if ((a != b && a != c && b != c) && (c > a && c > b && a > b))
    {
        printf("All are different\n");
        printf("Third is largest\n");
        printf("First is in middle of second and third\n");
        printf("Second is smallest\n");
        printf("First and third are greater than second");
    }
    else if ((a != b && a != c && b != c) && (c > a && c > b && b > a))
    {
        printf("All are different\n");
        printf("Third is largest\n");
        printf("Second is in middle of first and third\n");
        printf("First is smallest\n");
        printf("Third and second are greater than first");
    }

    // Task 03
    //  int dice1,dice2,dice3;
    //  printf("Dice 1 : ");
    //  scanf_s("%d",&dice1);
    //  printf("Dice 2 : ");
    //  scanf_s("%d", &dice2);
    //  printf("Dice 3 : ");
    //  scanf_s("%d", &dice3);
    //  printf("Enter the number in range 1-6\n");
    //  if(dice1==1&&dice2==1&&dice3==1)
    //      printf("One appears three times\n");
    //  else if ((dice1 == 1 || dice2 == 1)&&(dice2==1||dice3==1 )&&(dice1==1||dice3==1))
    //      printf("One appears two times\n");
    //  else if(dice1==1||dice2==1||dice3==1)
    //      printf("One appears one times\n");

    // if (dice1 == 2 && dice2 == 2 && dice3 == 2)
    //     printf("Two appears three times\n");
    // else if ((dice1 == 2 || dice2 == 2) && (dice2 == 2 || dice3 == 2) && (dice1 == 2 || dice3 == 2))
    //     printf("Two appears two times\n");
    // else if (dice1 == 2 || dice2 == 2 || dice3 == 2)
    //     printf("Two appears one times\n");

    // if (dice1 == 3 && dice2 == 3 && dice3 == 3)
    //     printf("Three appears three times\n");
    // else if ((dice1 == 3 || dice2 == 3) && (dice2 == 3 || dice3 == 3) && (dice1 == 3 || dice3 == 3))
    //     printf("Three appears two times\n");
    // else if (dice1 == 3 || dice2 == 3 || dice3 == 3)
    //     printf("Three appears one times\n");

    // if (dice1 == 4 && dice2 == 4 && dice3 == 4)
    //     printf("Four appears three times\n");
    // else if ((dice1 == 4 || dice2 == 4) && (dice2 == 4 || dice3 == 4) && (dice1 == 4 || dice3 == 4))
    //     printf("Four appears two times\n");
    // else if (dice1 == 4 || dice2 == 4 || dice3 == 4)
    //     printf("Four appears one times\n");

    // if (dice1 == 5 && dice2 == 5 && dice3 == 5)
    //     printf("Five appears three times\n");
    // else if ((dice1 == 5 || dice2 == 5) && (dice2 == 5 || dice3 == 5) && (dice1 == 5 || dice3 == 5))
    //     printf("Five appears two times\n");
    // else if (dice1 == 5 || dice2 == 5 || dice3 == 5)
    //     printf("Five appears one times\n");

    // if (dice1 == 6 && dice2 == 6 && dice3 == 6)
    //     printf("Six appears three times\n");
    // else if ((dice1 == 6 || dice2 == 6) && (dice2 == 6 || dice3 == 6) && (dice1 == 6 || dice3 == 6))
    //     printf("Six appears two times\n");
    // else if (dice1 == 6 || dice2 == 6 || dice3 == 6)
    //     printf("Six appears one times\n");

    return 0;
}