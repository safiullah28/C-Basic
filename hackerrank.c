#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int a[],int size)
{
    for(int i=0;i<size;i++)
        a[i]=rand()%100;
}
void display(int a[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
}
void bubblesort(int a[],int size)
{
    int temp=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
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
int search(int a[],int size,int n)
{
    int k=0;
    for(int i=0;i<size;i++)
    {
        if(n==a[i])
        {
            return i;
        }
    }
    return -1;
}
int binsearch(int a[],int end,int n)
{
    int mid,start,loc=-1;
    start=0;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==n)
        {
            loc=mid;
            return loc;
            break;
        }
        else if (n<a[mid])
        {
            end=mid-1;
        }
        else if(n>a[mid])
        {
            start=mid+1;
        }
    }
    if(loc==-1)
        return -2;
    else 
        return loc;

}
int main() {

  srand(time(0));
  int size,num;
  printf("Enter size of array : ");
  scanf_s("%d",&size);
  int a[size];
  input(a, size);
  printf("Elements in array are : ");
  display(a, size);
  bubblesort(a,size);
  printf("\nAfter Sorting : ");
  display(a, size);
//   for(int i=0;i<size;i++)
//   {
//     num=rand()%100;
//     printf("\nNumber is : %d",num);
//     printf("\nElement is at index : %d",search(a,size,num));
//   }

  for (int i = 0; i < size; i++)
      {
        
        num=rand()%100;
        printf("\nNumber is : %d",num);
        printf("\nElement is at index : %d",binsearch(a,size,num));
      }

    return 0;
}