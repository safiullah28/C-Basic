#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));

    int rows;
    printf("Enter rows : ");
    scanf_s("%d",&rows);
    
    //Task 01
    
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=i;j<=rows;j++)
    //         printf("%d",j);
    //     for(int k=1;k<i;k++)
    //         printf("%d",k);
    //     printf("\n");
    // }
     
     //Task 02
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=i;j<=rows;j++)
    //         printf("%d",j);
    //     for(int k=i-1;k>0;k--)
    //         printf("%d",k);
    //     printf("\n");
    // }

    //Task 03
    // for(int i=1;i<=(rows*2);i=i+2)
    // {
    //     for(int j=i;j<=rows*2;j=j+2)
    //         printf("%d",j);
    //     for(int k=1;k<i;k=k+2)
    //         printf("%d",k);
    //     printf("\n");
    // }

    //Task 04
    // for(int i=1;i<=rows*2;i=i+2)
    // {
    //     for(int j=i;j<=rows*2;j=j+2)
    //         printf("%d",j);
    //     for(int k=i-2;k>0;k=k-2)
    //         printf("%d",k);
    //     printf("\n");
    // }


    //Task 05
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //         printf("%d",j);
    //     for(int j=rows;j>i;j--)
    //         printf("*");
    //     for(int j=rows;j>i;j--)
    //         printf("*");
    //     for(int j=i;j>0;j--)
    //         printf("%d",j);
    //     printf("\n");
    // }


    //Task 06
    // int m=1,k=0;
    // for(int i=1;i<=rows;i++)
    // { 
    //     if(i%2==0)
    //     {
    //         for(int j=1;j<=i;j++)
    //             {
    //                 k=m;
    //                 printf("%d ",m);
    //                 m++;
    //             }
    //     }        
    //     if(i%2==1)
    //     {
    //         k=k+i;
    //         m=k;
    //         for(int j=1;j<=i;j++)
    //         {
    //             printf("%d ",k);
    //             k=k-1;
    //         }
    //         m++;
    //     }
    //     printf("\n");
    // }
    
    //Task 06 (b)
    //  int m=1,k=0;
    // for(int i=1;i<=rows;i++)
    // { 
    //     if(i%2==0)
    //     {
    //         for(int j=1;j<=i;j++)
    //             {
    //                 k=m;
    //                 printf("%d ",m);
    //                 m++;
    //             }
    //     }        
    //     if(i%2==1)
    //     {
    //         k=k+i;
    //         m=k;
    //         for(int j=1;j<=i;j++)
    //         {
    //             printf("%d ",k);
    //             k=k-1;
    //         }
    //         m++;
    //     }
    //     printf("\n");
    // }

    //Task 07
    // for(int i=1;i<=rows;i++)
    // {
    //     int m=i;
    //     for(int j=rows;j>=i;j--)
    //         printf("%d",j);
    //     for(int k=1;k<i;k++)
    //         printf("*");
    //     for(int l=2;l<i;l++)
    //         printf("*");
    //     if(i==1){
    //         for(int k=m+1;k<=rows;k++)
    //         {
    //             printf("%d",k);
    //         }
    //     }
    //     else {
    //         for(int k=i;k<=rows;k++)
    //         {
    //             printf("%d",k);
    //         }
    //     }
    //     printf("\n");
    // }


    //Task 08
    // for(int i=1;i<=rows;i++)
    // {
    //     int m=i;
    //     for(int j=1;j<=(rows+1)-i;j++)
    //         printf("%d",j);
    //     for(int k=1;k<i;k++)
    //         printf("*");
    //     for(int l=2;l<i;l++)
    //         printf("*");
    //     if(i==1){
    //         for(int k=rows-m;k>=i;k--)
    //         {
    //             printf("%d",k);
    //         }
    //     }
    //     else {
    //         for(int k=(rows+1)-i;k>=1;k--)
    //         {
    //             printf("%d",k);
    //         }
    //     }
    //     printf("\n");
    // }


    //Task 09
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //         printf("%d",j);
    //     for(int k=i-1;k>=1;k--)
    //         printf("%d",k);
    //     printf("\n");
    // }
    // for(int i=1;i<=rows-1;i++){
    //     for(int j=1;j<=rows-i;j++)
    //         printf("%d",j);
    //     for(int k=rows-i-1;k>=1;k--)
    //         printf("%d",k);
    //     printf("\n");
    // }


    //Task 10
    // int k=0;
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //         printf("%d",i);
    //     printf("\n");
    //     k=i;
    // }   
    // for(int i=k+1;i<rows*2;i++)
    // {
    //     for(int j=i;j<rows*2;j++)
    //         printf("%d",i);
    //     printf("\n");
    // }

    //Task 11
    // for(int i=rows;i>=1;i--)
    // {
    //     for(int j=i;j<=rows;j++)
    //         printf("%d",j);
    //     printf("\n");
    // }
     

    //Task 12
    // int m=0;
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=0;j<i;j++){
    //       m = i + j;
    //       printf("%d", i + j);
    //     }

    //     for(int j=m-1;j>=i;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
    // int k=0;
    // for(int i=m/2;i>=1;i--)
    // {
    //     for(int j=i;j<i*2;j++)
    //     {
    //         printf("%d",j);
    //         k=j;
    //     }
    //     for(int j=k-1;j>=i;j--)
    //         printf("%d",j);
    //     printf("\n");
    // }



    //Task 13
    // int m=0;
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=i;j>=1;j--)
    //     {
    //         printf("%d",j);
    //         m=j;
    //     }
    //     for(int j=m+1;j<=i;j++)
    //         printf("%d",j);
    //     printf("\n");
    // }

    // for(int i=rows-1;i>0;i--)
    // {
    //     for(int j=i;j>0;j--)
    //         printf("%d",j);
    //     for(int j=m+1;j<=i;j++)
    //         printf("%d",j);
    //     printf("\n");
    // }

    //Task 14
    // int m=0;
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=rows;j>=i;j--)
    //         printf(" ");
    //     if(i==1)
    //         for(int j=i;j<=i*i;j*=2)
    //             printf("%d",j);
    //     for(int j=1;j<(i*i)-1;j*=2)
    //     {
    //             printf("%d",j);
    //             m=j;
    //     }
    //     for(int j=m/2;j>=1;j/=2)
    //         printf("%d",j);

    //     printf("\n");
    // }
     return 0;
}