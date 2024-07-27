#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int a[10], avg, max = 0, first = 0, second = 0;
    srand(time(0));
   
    for (int i = 1; i < 11; i++)
    {
        a[i] = rand() % 100 + 1;
        if (i % 2 == 0)
        {
            avg = (a[i - 1] + a[i]) / 2;
            printf("Pair is a[%d] a[%d] = %d %d\n", i - 1, i, a[i], a[i - 1]);
            printf("Average of pair = %d\n", avg);
        }
        if (avg > max)
        {
            max = avg;
            first = a[i - 1];
            second = a[i];
        }
    }
    printf("Average of Largest pair = %d       Pair is a[%d]  a[%d]",max,a[first],a[second]);
    
    return 0;
}