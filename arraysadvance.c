#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // int arr[10];
    // int mid, start = 0, end = 10;
    // srand(time(0));
    // for (int i = start; i < end; i++)
    // {
    //     mid = (start + end) / 2;
    //     arr[i] = rand() % 30 + 1;
    //     if (arr[i] % 2 == 0)
    //     {
    //         printf("%d ", arr[i]);
    //         arr[i]=arr[start];
    //         start++;
    //     }
    //     else
    //     {
    //         printf("%d ", arr[i]);
    //         arr[i]=arr[end];
    //         end--;
    //     }
    // }



    int arr[20];
    srand(time(0));
    for(int i=0; i<20; i++)
    {
        arr[i]=rand()%5+1;
        printf("%d  ", arr[i]);
    }
    int temp=0;
    for(int i=0; i<20; i++)
    {
        for(int j=i+1; j<20; j++)
        if(arr[i]==arr[j])
        {
            temp++;
        }
    }
    for(int i=0; i<20; i++)
    {
        printf("%d  ",arr[i]);   
    }
    return 0;
}