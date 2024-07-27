#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){

    //task 01
    // int sum,sum1=0,j,rem=0,m;
    // for(int i=1;i<100;i++)
    //     printf("%d ",i);
    // printf("\n");

    // for(int i=1;i<100;i++)
    // {
    //     printf("[ %d ",i);
    //     if(i>9)
    //     {
    //         int k=i;
    //         sum=0;
    //         while(k!=0)
    //         {
    //             j=k%10;
    //             rem=rem*10+j;
    //             k=k/10;
    //             sum=sum+j;
    //         }
    //         printf("  %d", sum);
    //         if(sum>9)
    //         {
    //             sum1=0;
    //             rem=0;
    //             int l=sum;
    //             while(l!=0)
    //             {
    //                 m=l%10;
    //                 rem=rem*10+m;
    //                 l=l/10;
    //                 sum1=sum1+m;
    //             }
    //             printf("  %d",sum1);
    //         }
    //     }

    //     printf("]\n");
    // }





    //Task 02
    for (int i=0;i<100;i++)
    {
        if(i==1)
            printf("One\n");
        else if (i == 2)
            printf("Two\n");
        else if (i == 3)
            printf("Three\n");
        else if (i == 4)
            printf("Four\n");
        else if(i==5)
            printf("Five\n");
        else if (i == 6)
            printf("Six\n");
        else if (i == 7)
            printf("Seven\n");
        else if (i == 8)
            printf("Eight\n");
        else if (i == 9)
            printf("Nine\n");
        else if (i == 10)
            printf("Ten\n");
        else if (i == 11)
            printf("Eleven\n");
        else if (i == 12)
            printf("Twelve\n");
        else if (i == 13)
            printf("Thirteen\n");
        else if (i == 14)
            printf("Fourteen\n");
        else if (i == 15)
            printf("Fifteen\n");
        else if (i == 16)
            printf("Sixteen\n");
        else if(i==17)
            printf("Seventeen\n");
        else if (i == 18)
            printf("Eighteen\n");
        else if (i == 19)
            printf("Nineteen\n");
        else if (i == 20)
            printf("Twenty\n");
        else if (i == 30)
            printf("Thirty\n");
        else if (i == 40)
            printf("Fourty\n");
        else if (i == 50)
            printf("Fifty\n");
        else if (i == 60)
            printf("Sixty\n");
        else if (i == 70)
            printf("Seventy\n");
        else if (i == 80)
            printf("Eighty\n");
        else if (i == 90)
            printf("Ninety\n");
       
        if(i>20 && i<30)
        {
            printf("Twenty ");
            if (i % 10 == 1)
                printf("One\n");
            else if (i % 10 == 2)
                printf("Two\n");
            else if (i % 10 == 3)
                printf("Three\n");
            else if (i % 10 == 4)
                printf("Four\n");
            else if(i%10==5)
                printf("Five\n");
            else if(i%10==6)
                printf("Six\n");
            else if (i % 10 == 7)
                printf("Seven\n");
            else if (i % 10 == 8)
                printf("Eight\n");
            else if(i%10==9)
                printf("Nine\n");
        }

        if (i > 30 && i < 40)
        {
            printf("Thirty ");
            if (i % 10 == 1)
                printf("One\n");
            else if (i % 10 == 2)
                printf("Two\n");
            else if (i % 10 == 3)
                printf("Three\n");
            else if (i % 10 == 4)
                printf("Four\n");
            else if (i % 10 == 5)
                printf("Five\n");
            else if (i % 10 == 6)
                printf("Six\n");
            else if (i % 10 == 7)
                printf("Seven\n");
            else if (i % 10 == 8)
                printf("Eight\n");
            else if (i % 10 == 9)
                printf("Nine\n");
        }

        if(i>40&&i<50)
        {
            printf("Fourty ");
            if (i % 10 == 1)
                printf("One\n");
            else if (i % 10 == 2)
                printf("Two\n");
            else if (i % 10 == 3)
                printf("Three\n");
            else if (i % 10 == 4)
                printf("Four\n");
            else if(i%10==5)
                printf("Five\n");
            else if(i%10==6)
                printf("Six\n");
            else if (i % 10 == 7)
                printf("Seven\n");
            else if (i % 10 == 8)
                printf("Eight\n");
            else if(i%10==9)
                printf("Nine\n");
        }
        if (i >50 && i < 60)
        {
            printf("Fifty ");
            if (i % 10 == 1)
                printf("One\n");
            else if (i % 10 == 2)
                printf("Two\n");
            else if (i % 10 == 3)
                printf("Three\n");
            else if (i % 10 == 4)
                printf("Four\n");
            else if (i % 10 == 5)
                printf("Five\n");
            else if (i % 10 == 6)
                printf("Six\n");
            else if (i % 10 == 7)
                printf("Seven\n");
            else if (i % 10 == 8)
                printf("Eight\n");
            else if (i % 10 == 9)
                printf("Nine\n");
        }
        if(i>70&&i<80)
        {
            printf("Seventy ");
            if (i % 10 == 1)
                printf("One\n");
            else if (i % 10 == 2)
                printf("Two\n");
            else if (i % 10 == 3)
                printf("Three\n");
            else if (i % 10 == 4)
                printf("Four\n");
            else if(i%10==5)
                printf("Five\n");
            else if(i%10==6)
                printf("Six\n");
            else if (i % 10 == 7)
                printf("Seven\n");
            else if (i % 10 == 8)
                printf("Eight\n");
            else if(i%10==9)
                printf("Nine\n");
        }

        if (i > 80 && i < 90)
        {
            printf("Eighty");
            if (i % 10 == 1)
                printf("One\n");
            else if (i % 10 == 2)
                printf("Two\n");
            else if (i % 10 == 3)
                printf("Three\n");
            else if (i % 10 == 4)
                printf("Four\n");
            else if (i % 10 == 5)
                printf("Five\n");
            else if (i % 10 == 6)
                printf("Six\n");
            else if (i % 10 == 7)
                printf("Seven\n");
            else if (i % 10 == 8)
                printf("Eight\n");
            else if (i % 10 == 9)
                printf("Nine\n");
        }
        if(i>90&&i<100)
        {
            printf("Ninety ");
            if (i % 10 == 1)
                printf("One\n");
            else if (i % 10 == 2)
                printf("Two\n");
            else if (i % 10 == 3)
                printf("Three\n");
            else if (i % 10 == 4)
                printf("Four\n");
            else if(i%10==5)
                printf("Five\n");
            else if(i%10==6)
                printf("Six\n");
            else if (i % 10 == 7)
                printf("Seven\n");
            else if (i % 10 == 8)
                printf("Eight\n");
            else if(i%10==9)
                printf("Nine\n");
        }
    }
    return 0;
}