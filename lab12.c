#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void print_char(char ch,int n)
{
    for(int i=0;i<n;i++)
        printf("%c",ch);
}

void print_pattern1(int n)
{
  for (int i = 1; i <= n; i++) {
    printf("*");
    for (int j = 1; j < i-1; j++)
      printf(" ");
    if (i > 1)
      printf("*");

    for (int j = n-1; j >=i; j--) {
      if (j ==i)
        printf("*");
      else if(j>i)
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

void print_pattern2(int n)
{
  for (int i = 1; i <= n; i++) {
    printf("*");
    for (int j = 1; j < i-1; j++)
      printf(" ");
    if (i > 1)
      printf("*");

    for (int j = n - 1; j >= i; j--) {
        printf(" ");
    }
    for(int j=n-1;j>=i;j--)
    {
        if(j==i)
            printf("*");
        else
            printf(" ");
    }
    for(int j=2;j<=i;j++)
    {
        if(j==i)
            printf("*");
        else 
            printf(" ");
    }
    printf("\n");
  }
}
void print_pattern3(int n)
{
  int k = (n / 2);
  k++;
  for (int i = 1; i <= n; i++) 
  {
    if (i == 1) {
      printf(" ");
      for (int j = 1; j <= n - 2; j++)
        printf("*");
      printf(" ");
    }

    else if (i == k ) 
    {
      for (int  j= 1; j <= n; j++)
        printf("*");
    }

    else {
        printf("*");
        for(int j=1;j<=n-2;j++)
            printf(" ");
        printf("*");
        }
        printf("\n");
    }
    
}

int isPrime(int n)
{
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==0)
        return 1;
    else
        return 0;
}

void printPrime(int n)
{
    int count;
    for(int i=1;i<=n;i++)
    {
        count=0;
        for(int j=2;j<i;j++)
            if(i%j==0)
                count++;
        if(count==0&&i>1)
            printf("%d\n",i);
    }
}

int main(){
    srand(time(0));

    int rows;
    char ch,ch1;
    printf("Enter rows : ");
    scanf_s("%d",&rows);
    
    //Task 01
    // printf("Enter character : ");
    // scanf_s("%c",&ch1);
    // scanf_s("%c", &ch);
    // print_char(ch,rows);


    // //Task 01 (b)
    //print_pattern1(rows);
    
    //Task 01 (c)
    //print_pattern2(rows);

    //Task 01 (d)
    //print_pattern3(rows);


    //Task 02 (a)
    //printf("%d",isPrime(rows));

    //Task 02 (b)
    
    //printPrime(rows);



    return 0;

}