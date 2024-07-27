#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){
    // srand(time(0));
    // int start,end;
    // printf("Enter starting number : ");
    // scanf_s("%d",&start);
    // printf("Enter ending number : ");
    // scanf_s("%d",&end);
    // printf("Ascending numbers : ");
    // for(int i=start;i<=end;i++){
    //     printf("%d  ",i);
    // }
    // printf("\nDescending numbers : ");
    // for (int i = end; i >= start; i--)
    // {
    //     printf("%d  ", i);
    // }
    // printf("\nSquares : ");
    // for(int i=start;i<=end;i++){
    //     printf("%d  ",i*i);
    // }
    // printf("\nCubes : ");
    // for (int i = start; i <= end; i++)
    // {
    //     printf("%d  ", i*i*i);
    // }



    // unsigned int num1,num2=0,diff=0;
    // printf("Enter the number :");
    // scanf_s("%d",&num2);
    // for(int i=0;i<11;i++)
    // {
    //     scanf_s("%d",&num1);
    //     printf("Number %d : %d\n",i+1,num1);
    //     diff=num1-num2;
    //     if(diff<0)
    //         printf("Difference : %d\n",diff);
    //     else
    //         printf("Difference : %d\n",-diff);
    //     num2=num1;
    // }




    // int k,num;
    // printf("Enter K : ");
    // scanf_s("%d",&k);
    // for(int i=0;i<11;i++)
    // {
    //     printf("Enter a number : ");
    //     scanf_s("%d",&num);
    //     if(num>k)
    //         printf("%d is greater than %d\n",num,k);
    //     if (num == k)
    //         printf("%d is equal to %d\n", num,k);
    //     if (num < k)
    //         printf("%d is smaller than %d\n", num,k );
    // }



    int n;
    float s1,s2;
    printf("Enter the number : ");
    scanf_s("%d",&n);
    s1=rand()%n+1;
    while(!(s1<n))
    {
        s1=rand()%7+1;
    }
    printf("S1 : %f\n",s1);
    
    s2=(s1+(n/s1))/2;

    float num=s2-s1;
    num=abs(num);
    
    if(num<0.00001)
        printf("Square root : %f\n",num);
    
    else{
    while(num>(0.00001)){
    s1=num;
    s2 = (s1 + (n / s1)) / 2;
    if(s2<(0.00001))
        printf("Square root : %f\n",s2);
    }
    }

    printf("Square root of %d is : %f",n,sqrt(n));

    return 0;
}