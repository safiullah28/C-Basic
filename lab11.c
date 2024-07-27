#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    //Task 01

    // int n;
    // printf("Enter N :  ");
    // scanf_s("%d",&n);
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //         printf("%d",j);
    //     printf("\n");
    // }
    // for(int i=1;i<=n-1;i++)
    // {
    //     for(int j=i+1;j<=n;j++)
    //         printf("%d",j);
    //     printf("\n");
    // }


    //Task 02
    // int n;
    // printf("Enter N :  ");
    // scanf_s("%d",&n);
    // for(int i=n;i>0;i--)
    // {
    //     for(int j=i;j>0;j--)
    //         printf(" ");
    //     printf("*\n");
    // }
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //         printf(" ");
    //     printf("*\n");
    // }
    // for (int i = n-1; i > 0; i--)
    // {
    //     for (int j = i; j > 0; j--)
    //         printf(" ");
    //     printf("*\n");
    // }
    // for (int i = 0; i < n ; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //         printf(" ");
    //     printf("*\n");
    // }


    //Task 03
    // int rows,columns;
    // printf("Enter rows :  ");
    // scanf_s("%d",&rows);
    // printf("Enter columns : ");
    // scanf_s("%d",&columns);

    // for (int i = 0; i < rows; i++)
    // {
    //     printf("{ ");
    //     for (int j = 1; j <= columns; j++)
    //     {
    //         printf("( %d", 1);
    //         for (int l = 2; l <= j; l++)
    //         {
    //             printf(" , %d", l);
    //         }
    //         printf(" )");
    //         if (j < columns)
    //         {
    //             printf(" , ");
    //         }
    //     }
    //     printf(" }\n");
    // }

    // int n,count=0,k;
    // printf("Enter a number : ");
    // scanf_s("%d",&n);

    // for(int i=4;i<=n;i++){
    //     printf("%d : ",i);
    //     for(int j=2;j<i;j++)
    //     {
    //         if(i%j==0)
    //             count++;
    //     }
    // if(count==0)
    //     printf("Prime\n");
    // else
    //     printf("Not Prime\n");
    // }
    


    //Task 04
    // int n,count=0,k,n1,n2,HCF;
    // printf("Enter a number : ");
    // scanf_s("%d",&n);

    // if(n>10){
    //     for(int i=4;i<=n;i++)
    //     {
    //         count = 0;
    //         printf("%d : ",i);
    //         for(int j=2;j<i;j++)
    //         {
    //             if(i%j==0)
    //         count++;
    //         }
    //     if(count==0)
    //         printf("Prime");
    //     else{
    //         for(int k=1;k<=i;k++)
    //         {
    //             if(i%k==0)
    //                 printf(" %d",k);
    //         }
    //     }
    //     printf("\n");
    //     }
    // }
    
    return 0;
}