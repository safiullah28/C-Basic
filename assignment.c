#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    srand(time(0));

    // int a, b, c, quad1, quad2, disc;
    // printf("Enter A : ");
    // scanf_s("%d", &a);
    // printf("Enter B : ");
    // scanf_s("%d", &b);
    // printf("Enter C : ");
    // scanf_s("%d", &c);
    // disc = (b * b) - (4 * a * c);
    // quad1 = ((-1 * b) + sqrt(disc)) / 2 * a;
    // quad2 = ((-1 * b) - sqrt(disc)) / 2 * a;
    // if (a == 0)
    // {
    //     printf("Equation is linear and has only one root\n");
    // }
    // else if (disc < 0)
    // {
    //     printf("Roots are imaginary \n");
    // }
    // else
    // {
    //     printf("Root 1 : %d\n", quad1);
    //     printf("Root 2 : %d\n", quad2);
    // }

    // int num,guess;
    // num=rand()%10+1;
    // printf("Number : %d\n",num);
    // printf("Guess the number : ");
    // scanf_s("%d",&guess);
    // if(guess!=num)
    // {
    //     printf("Wrong guess!\nAgain Guess the number : ");
    //     scanf_s("%d", &guess);
    //     if(guess!=num){
    //         printf("Wrong guess!\nAgain Guess the number : ");
    //         scanf_s("%d", &guess);
    //         if(guess!=num)
    //             {
    //                 printf("Loser \n");
    //                 printf("Number was : %d",num);
    //             }
    //         else 
    //             printf("Winner");
    //     }
    //     else
    //         printf("Winner\n");
    // }
    // else
    //     printf("Winner\n");

    // int a,b,c,d,temp;
    // printf("Enter number 1 : ");
    // scanf_s("%d",&a);
    // printf("Enter number 2 : ");
    // scanf_s("%d", &b);
    // printf("Enter number 3 : ");
    // scanf_s("%d", &c);
    // printf("Enter number 4 : ");
    // scanf_s("%d", &d);
    // if (a > b)
    // {
    //     temp = a;
    //     a = b;
    //     b = temp;
    // }
    // if (b > c)
    // {
    //     temp = b;
    //     b = c;
    //     c = temp;
    // }
    // if (c > d)
    // {
    //     temp = c;
    //     c = d;
    //     d = temp;
    // }
    // if (a > b)
    // {
    //     temp = a;
    //     a = b;
    //     b = temp;
    // }
    // if (b > c)
    // {
    //     temp = b;
    //     b = c;
    //     c = temp;
    // }
    // if (a > b)
    // {
    //     temp = a;
    //     a = b;
    //     b = temp;
    // }
    // printf("%d %d %d %d ",a,b,c,d);



    // int egg,pack;
    // printf("Enter number of eggs ");
    // scanf_s("%d",&egg);
    // pack=(egg-1)/6 +1;
    // printf("Eggs : %d\n",egg);
    // printf("Packs : %d",pack);




    // int a, b, c;
    // printf("Enter number 1 : ");
    // scanf_s("%d", &a);
    // printf("Enter number 2 : ");
    // scanf_s("%d", &b);
    // printf("Enter number 3 : ");
    // scanf_s("%d", &c);
    // if (a < b && a < c && b < c)
    //     printf("Numbers are in order ");
    // else if (a < b && a < c && b > c)
    //     printf("Numbers are not in order ");
    // else if (b < a && b < c && c > a)
    //     printf("Numbers are not in order ");
    // else if (b > a && b > c && a > c)
    //     printf("Numbers are not in order ");
    // else if (a > b && a > c && b < c)
    //     printf("Numbers are not in order ");
    // else
    //     printf("Numbers are not in order ");


    // int a, b, c;
    // printf("Enter number 1 : ");
    // scanf_s("%d", &a);
    // printf("Enter number 2 : ");
    // scanf_s("%d", &b);
    // printf("Enter number 3 : ");
    // scanf_s("%d", &c);
    // if (a < b && a < c && b < c)
    //     printf("%d %d %d ", a, b, c);
    // else if (a < b && a < c && b > c)
    //     printf("%d %d %d ", a, c, b);
    // else if (b < a && b < c && c > a)
    //     printf("%d %d %d ", b, a, c);
    // else if (b > a && b > c && a > c)
    //     printf("%d %d %d ", c, a, b);
    // else if (a > b && a > c && b < c)
    //     printf("%d %d %d ", b, c, a);
    // else
    //     printf("%d %d %d", c, b, a);


    // int m1,m2;
    // printf("Student 1 marks : ");
    // scanf_s("%d",&m1);
    // printf("Student 2 marks : ");
    // scanf_s("%d", &m2);
    // if((m1>85)&&(m2>85))
    //     printf("Same grades ");
    // else if((m1<85&&m1>79)&&(m2<85&&m2>79))
    //     printf("Same grades");
    // else if ((m1 < 80 && m1 > 74) && (m2 < 80 && m2 > 74))
    //     printf("Same grades");
    // else if ((m1 < 75 && m1 > 69) && (m2 < 75 && m2 > 69))
    //     printf("Same grades");
    // else if((m1<70&&m1>64)&&(m2<70&&m2>64))
    //     printf("Same grades");
    // else if((m1<65&&m1>60)&&(m2<65&&m2>60))
    //     printf("Same grades");
    // else if((m1<61&&m1>57)&&(m2<61&&m2>57))
    //     printf("Same grades");
    // else if ((m1 < 58 && m1 > 54) && (m2 < 58 && m2 > 54))
    //     printf("Same grades");
    // else if ((m1 < 55 && m1 > 49) && (m2 < 45 && m2 > 49))
    //     printf("Same grades");
    // else if(m1<50&&m2<50)
    //     printf("Same grades ");
    // else 
    //     printf("Different Grades");

    // int i=1,j=49;
    // while(i<=50)
    // {
    //     if(i%2==0)
    //         printf("%d ",i);
    //     i++;
    // }
    // printf("\n");
    // while (j >= 1)
    // {
    //     if (j % 2 == 1)
    //         printf("%d ", j);
    //     j--;
    // }


    // int num,i=1,product=1;
    // while(i<6)
    // {
    //     scanf_s("%d",&num);
    //     product*=num;
    //     i++;
    // }
    // printf("Product : %d",product);

    // int num, i = 1, max=0;
    // while(i<6)
    // {
    //     scanf_s("%d",&num);
    //     if(num>max)
    //         max=num;
    //     i++;
    // }
    // printf("\nMax : %d",max);


    // int n1,n2,i=1;
    // while(i<11)
    // {
    //     n1=rand()%20+1;
    //     n2=rand()%20+1;
    //     printf("First : %d \t Second : %d \n",n1,n2);
    //     if(n1>n2)
    //         printf("First number is larger than second\n");
    //     else if(n1==n2)
    //         printf("First and second are equal\n");
    //     else 
    //         printf("Second number is larger than First\n");
    //     i++;
    // }

    // int n1,n2,n3,i=1;
    // while(i<11)
    // {
    //     n1=rand()%20+1;
    //     n2 = rand() % 20 + 1;
    //     n3 = rand() % 20 + 1;
    //     printf("%d %d %d\n",n1,n2,n3);
    //     {
    //         if (n1 < n2 && n1 < n3 && n2 < n3)
    //             printf("%d   %d   %d\n", n1, n2, n3);
    //         else if (n1 < n2 && n1 < n3 && n2 > n3)
    //             printf("%d   %d   %d\n", n1, n3, n2);
    //         else if (n2 < n1 && n2 < n3 && n3 > n1)
    //             printf("%d   %d   %d\n", n2, n1, n3);
    //         else if (n2 > n1 && n2 > n3 && n1 > n3)
    //             printf("%d   %d   %d\n ", n3, n1, n2);
    //         else if (n1 > n2 && n1 > n3 && n2 < n3)
    //             printf("%d   %d   %d\n", n2, n3, n1);
    //         else
    //             printf("%d   %d   %d\n", n3, n2, n1);
    //     }
    //     i++;
    // }




    int rows;
    printf("Enter rows : ");
    scanf_s("%d",&rows);
    for(int i=1;i<=(rows/2);i++){
        p
    }
    return 0;
}
