#include <inttypes.h>
#include<stdio.h>
int main()
{ 

    //Task 01
    // int rows,columns;
    // printf("Enter rows ");
    // scanf_s("%d",&rows);

    // printf("Enter columns ");
    // scanf_s("%d",&columns);
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<columns;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    //Task 02
    // int rows,columns;
    // printf("Enter rows ");
    // scanf_s("%d",&rows);
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=65;j<91;j++)
    //     {
    //         printf("%c",j);
    //     }
    //     printf("\n");
    // }

    //Task 03 (a)
    // int rows,columns;
    // printf("Enter rows ");
    // scanf_s("%d",&rows);
    // printf("Enter rows ");
    // scanf_s("%d",&columns);
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //     {
    //         if(j==i)
    //         {
    //             printf("%d",i);
    //         }
    //     printf(" ");    
    //     }
    //         printf("\n");    
    // }


     //Task 03 (d)
    // int rows;
    // printf("Enter rows ");
    // scanf_s("%d",&rows);
    // printf("Enter rows ");
    // scanf_s("%d",&columns);
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=0;j<=columns;j++)
    //     {
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }


     //Task 03 (b)
    // int rows;
    // printf("Enter rows ");
    // scanf_s("%d",&rows);
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=rows;j>=i;j--)
    //     {
    //         printf(" ");
    //         if(j==i)
    //         {
    //             printf("%d",j);
    //         }
    //     }
    //         printf("\n");
    //}
   
    //Task 03 (e)
    // int rows,columns;
    // printf("Enter rows ");
    // scanf_s("%d",&rows);
    // printf("Enter columns ");
    // scanf_s("%d",&columns);
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=0;j<columns;j++)
    //     {
    //         printf("%d",j+i);
    //     }
    //     printf("\n");
    // }


     //Task 03 (c)
    // int rows,columns;
    // printf("Enter rows ");
    // scanf_s("%d",&rows);
    // printf("Enter rows ");
    // scanf_s("%d",&columns);
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("*");  
    //         if(j==i)
    //         {
    //             printf("%d",i);
    //         }  
    //     } 
    // printf("\n");
    // }
    // for(int i=0;i<6;i++)
    // {
    //     for(int j=6;j>i;j--)
    //         printf(" ");
    //     for(int k=0;k<=i;k++)
    //         printf("*");
    //     printf("\n");
    // }
    //Task 03 (c)
    int rows;
    printf("Enter rows : ");
    scanf_s("%d",&rows);
    for(int i=1;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
            {
                    printf(" ");
                if(j==i)
                    printf("%d",i);
            }
        for (int k=rows-1;k>i;k--)
            {printf(" ");}
        for(int l=rows;l>i;l--)
            {
                    printf(" ");
                if(l==i+1)
                    printf("%d",i);
            }
        printf("\n");
    }

    




     //Task 03 (f)
    // int rows,columns;
    // printf("Enter rows ");
    // scanf_s("%d",&rows);
    // printf("Enter columns ");
    // scanf_s("%d",&columns);
    // for(int i=1;i<=rows;i++)
    // {
    //     printf("%d",i);
    //     for(int j=1;j<=columns;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("%d\n",i);
    // }
    return 0;
}