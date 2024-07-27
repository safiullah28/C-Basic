#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    // int a[10];
    // int sum=0,k,average;
    // srand(time(0));
    // for (int i = 1 ;i <= 10; i++) {
    //     a[i]=rand()%20+1;
    //     printf("Element at index %d = %d\n",i,a[i]);
    //     sum+=a[i];
    //     k=i;
    // }
    // average=sum/k;
    // printf("Average of numbers are %d\n",average);
    // for(int i=1;i<=10;i++)
    //     if(a[i]>average)
    //         printf("Number greater than average is %d\n",a[i]);

    // srand(time(0));
    // int a[50],count=0;
    // for(int i=0;i<50;i++)
    // {
    //     a[i]=rand()%100+1;
    //     if(a[i]%2==0){
    //         printf("Index is %d and even element is %d\n",i,a[i]);
    //         count++;
    //     }
    // }
    // printf("Even elements are %d",count);

    // Task 01
    //  int arr[11],middle=0;
    //  srand(time(0));
    //  printf("Value in array at \n");
    //  for(int i=0;i<11;i++)
    //  {
    //      arr[i]=rand()%99+1;
    //      printf("a[%d] is %d\n",i,arr[i]);
    //      middle=i/2;

    // }
    // printf("Middle value is %d\n",arr[middle]);
    // for(int i=0;i<11;i++)
    // {
    //         int diff=arr[middle]-arr[i];
    //     printf("Difference of a[%d] is %d\n",i,diff);
    // }

    // Task 02
    // srand(time(0));
    // int a[10], avg, max = 0, first=0, second=0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     a[i] = rand() % 100 + 1;
    //     if (i % 2 == 0)
    //     {
    //         avg = (a[i - 1] + a[i]) / 2;
    //         printf("Pair is a[%d] a[%d] = %d %d\n", i - 1, i, a[i], a[i - 1]);
    //         printf("Average of pair = %d\n", avg);
    //         if (avg > max)
    //         {
    //             first = i;
    //             second = i - 1;
    //             max = avg;
    //         }
    //     }
    // }
    // printf("Max average is %d and their pair is %d %d ", max, a[first], a[second]);

    // Task 03
    // srand(time(0));
    // int size = 10, a[size * 3], avg, max = 0, first = 0, second = 0, third = 0;
    // printf("Enter the size of array : ");
    // scanf_s("%d", &size);
    // for (int i = 1; i <= size * 3; i++)
    // {
    //     a[i] = rand() % 100 + 1;
    //     if (i % 3 == 0)

    //     {
    //         avg = (a[i - 1] + a[i]) / 3;
    //         printf("Pair is a[%d] a[%d] a[%d] = %d %d %d\n", i - 2, i - 1, i, a[i - 2], a[i - 1], a[i]);
    //         printf("Average of pair = %d\n", avg);
    //         if (avg > max)
    //         {
    //             first = i;
    //             second = i - 1;
    //             third = i - 2;
    //             max = avg;
    //         }
    //     }
    // }
    // printf("Max average is %d and their pair is %d %d %d", max, a[first], a[second], a[third]);




    //Task 04
    



    return 0;
}