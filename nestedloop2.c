#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // Task 01 (d)
    //  int rows;
    //  printf("Enter rows : ");
    //  scanf_s("%d",&rows);
    //  for(int i=0;i<rows;i++)
    //  {
    //      for(int j=0;j<=i;j++)
    //      {
    //          printf("+");
    //      }
    //      printf("\n");
    //  }

    // for(int i=0;i<rows-1;i++)
    // {
    //     for(int j=rows-1;j>i;j--)
    //     {
    //         printf("+");
    //     }
    //     printf("\n");
    // }

    // // Task 01 (a)
    //  int rows,column;
    // printf("Enter rows : ");
    // scanf_s("%d",&rows);
    // printf("Enter columns : ");
    // scanf_s("%d",&column);
    // for (int i=1;i<=rows;i++)
    // {
    //     printf("1");
    //     for(int j=1;j<=column;j++)
    //     {
    //         printf(" ");
    //     }
    //     printf("%d\n",i);
    // }
    // for (int i=1;i<=rows;i++)
    // {
    //     printf("2");
    //     for(int j=1;j<=column;j++)
    //     {
    //         printf(" ");
    //     }
    //     printf("%d\n",i);
    // }
    // for (int i=1;i<=rows;i++)
    // {
    //     printf("3");
    //     for(int j=1;j<=column;j++)
    //     {
    //         printf(" ");
    //     }
    //     printf("%d\n",i);
    // }
    // for (int i=1;i<=rows;i++)
    // {
    //     printf("4");
    //     for(int j=1;j<=column;j++)
    //     {
    //         printf(" ");
    //     }
    //     printf("%d\n",i);
    // }
    // for (int i=1;i<=rows;i++)
    // {
    //     printf("5");
    //     for(int j=1;j<=column;j++)
    //     {
    //         printf(" ");
    //     }
    //     printf("%d\n",i);
    // }

    // Task 01 (b)
    //   int rows,column;
    //  printf("Enter rows : ");
    //  scanf_s("%d",&rows);
    //  printf("Enter columns : ");
    //  scanf_s("%d",&column);
    //  for(int i=1;i<=rows;i++)
    //  {
    //      for(int j=1;j<=column;j++)
    //         {
    //              printf("%d ",i);
    //         }
    //             printf("\n");
    //     for(int j=1;j<=column;j++)
    //         {
    //             printf("%c ",i+96);
    //         }
    //         printf("\n");
    //  }

    // Task 01 (c)
    //    int rows,column;
    //   printf("Enter rows : ");
    //   scanf_s("%d",&rows);
    //   printf("Enter columns : ");
    //   scanf_s("%d",&column);
    //   for(int i=0;i<rows;i++)
    //   {
    //      for(int j=1;j<=column;j++)
    //          {
    //              printf("%d ",j+i);
    //          }
    //          printf("\n");
    //      for(int k=1;k<=column;k++)
    //          {
    //              printf("%c ",k+i+96);
    //          }
    //      printf("\n");
    //   }

    // Task 01 (e)
    // int rows, column;
    // printf("Enter rows : ");
    // scanf_s("%d", &rows);
    // for (int i = 0; i < rows; i++)
    // {
    //         for (int j = rows; j > i; j--)
    //             printf("+");
    //         for (int k = 1; k <= i; k++)
    //             printf(" ");
    //         for (int l = 1; l <= i; l++)
    //             printf(" ");
    //         for (int m = rows; m > i; m--)
    //             printf("+");

    //         printf("\n");
    // }
    // for (int i = 1; i <= rows - 1; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //         printf("+");
    //     for (int k = rows - 2; k >= i; k--)
    //         printf(" ");
    //     for (int l = rows - 2; l >= i; l--)
    //         printf(" ");
    //     for (int m = 0; m <= i; m++)
    //         printf("+");
    //     printf("\n");
    // }

    //Task 01 (f)
    // int rows, column;
    // printf("Enter 1st number : ");
    // scanf_s("%d", &rows);
    // printf("Enter 2nd number : ");
    // scanf_s("%d", &column);
    // printf("{");
    // for (int i = 1; i <=rows; i++)
    // {
    //     for(int j=1;j<=column;j++)
    //     {
    //         printf("(%d,%d)",i,j);
    //     }
    // }
    // printf("}");

    







    // Task 05
    //  int i,table;
    //  do{
    //      printf("Enter the table you want to print except 0 : ");
    //      scanf_s("%d",&table);
    //      i=1;
    //      while(i<=10)
    //      {
    //          printf("%d * %d = %d\n",table,i,table*i);
    //          i++;
    //      }
    //  }while(table!=0);
    //  printf("Good bye");

    // Task 04
    //  int num, remainder, reverse_num = 0;
    //  printf("Enter number : ");
    //  scanf_s("%d", &num);
    //  int Original_num = num;
    //  if (num > 0)
    //  {
    //      while (num != 0)
    //      {
    //          remainder = num % 10;
    //          reverse_num = (reverse_num * 10) + remainder;
    //          num = num / 10;
    //      }
    //      printf("Reverse number is %d", reverse_num);
    //      if (Original_num == reverse_num)
    //      {
    //          printf("Number is palindrome ");
    //      }
    //      else
    //      {
    //          printf("Number is not palindrome");
    //      }
    //  }
    //      else{
    //      printf("\nInvalid input. Please enter a positive integer.");
    //  }






    // Task 03
    //  int num, remainder, reverse_num = 0,sum=0;
    //  printf("Enter number : ");
    //  scanf_s("%d", &num);
    //  int Original_num = num;
    //  if (num > 0)
    //  {
    //      while (num != 0)
    //      {
    //          remainder = num % 10;
    //          sum=sum+remainder;
    //          reverse_num = (reverse_num * 10) + remainder;
    //          num = num / 10;
    //      }
    //      printf("Sum of digits in the given no. : %d ",sum );
    //  }
    //  else
    //  {
    //      printf("\nInvalid input. Please enter a positive integer.");
    //  }



    //Task 02
    // srand(time(0));
    // int random,guess,choice;
    // do{
    //     random=rand()%10+1;        
    //     printf("Welcome to the number guessing game \nI have picked a number\nYou have to guess it\n");
    //         do{
    //             printf("Guess any number between 1-9: ");
    //             scanf_s("%d",&guess);
    //             if(guess>random)
    //             {
    //                 printf("You entered larger number \n");
    //                 printf("Guess again\n");
    //             }
    //             else if(guess<random){
    //                 printf("You entered larger number \n");
    //                 printf("Guess again\n");
    //             }
    //             else{
    //                 printf("Congrats you guessed the true number \n");
    //             }
    //         }while(guess!=random);
    //         printf("Do you want to play again or Exit \nPress any number to play again and 0 to Exit\n");
    //         scanf_s("%d",&choice);      
    // }while(choice!=0);
    // printf("Good bye\n");




    return 0;
}