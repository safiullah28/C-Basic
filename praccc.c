// #include <stdio.h>
// int main(){
//     int rows,k=0;
//     printf("Enter rows : ");
//     scanf_s("%d",&rows);
//     for(int i=1;i<=rows;i++){
//         printf("*");
//         for(int j=1;j<i;j++)
//             printf(" ");
//         printf("%d",i);
//         printf("\n");
//         k=i;
//     }
//     for(int i=k+1;i<=(rows*2);i++)
//     {
//         printf("*");
//         for(int j=rows*2;j>i;j--)
//             printf(" ");
//         printf("%d",i);
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
// #include<math.h>

int getInput1()
{
    int n;
    printf("Enter n: ");
    scanf_s("%d",&n);
    return n;
}

int getInput2()
{
    int m;
    printf("Enter m: ");
    scanf_s("%d",&m);
    return m;
}


void nearestMultiple(int n , int m)
{
    int remainder,multiple1,multiple2;

    remainder = n % m;
    if (remainder != 0)
    {
        multiple1 = n - remainder;
        multiple2 = multiple1 + m ;

        if ((n - multiple1) > (multiple2 - n))
        {
            printf("The multiple of %d closet to %d is %d.",m , n ,multiple2);
        }

        else
        {
            printf("The multiple of %d closet to %d is %d.",m , n ,multiple1);
        }
        
    }
    else
    {
            printf("The multiple of %d closet to %d are %d and %d.",m , n ,n-m ,n+m);
    }   
}

int main(){
    int num1 =  getInput1();
    int num2 =  getInput2();
     nearestMultiple(num1,num2);
    

    return 0;
}
