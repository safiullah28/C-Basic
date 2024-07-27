#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int a[],int size)
{
    for(int i=0;i<size;i++)
        a[i]=rand()%100-50;
}
void sortt(int a[],int size)
{
    int temp=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void display(int a[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", a[i]);
}

int main()
{
    srand(time(0));
    int size1;
    printf("Enter the number of elements in array: ");
    scanf_s("%d", &size1);
    int a[size1];

    input(a,size1);
    printf("Elements in array are : ");
    display(a,size1);
    printf("\nAfter sorting : ");
    sortt(a,size1);
    display(a,size1);

    return 0;
}