#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));
  int size, i;
  printf("Enter size of array : ");
  scanf_s("%d", &size);
  int a[size];
  for (i = 0; i < size; i++) {
    a[i] = rand() % 10;
  }
  for (i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
   int digits=10;
  int frequ[]={0,0,0,0,0,0,0,0,0,0};
  for(i=0;i<size;i++)
  {
   if(a[i]>=0&&a[i]<=9)
   {
    frequ[a[i]]++;
   } 
  }
  
  printf("\nFrequency : ");
  for(i=0;i<digits;i++)
  {
    printf("%d ",frequ[i]);
  }
  int max=frequ[a[0]],element=0;
  for(int i=0;i<digits;i++)
  {
    if(frequ[a[i]]>max)
      {
        max=frequ[a[i]];
        element=a[i];
      }
  }

  printf("\nMaximum Frequency : %d",max);
  
  for(int i=0;i<size;i++)
  {
    if (max == frequ[a[i]] &&  a[i] > element) {

      element = a[i];
    }
  }
  printf("\nMax Freuquency Element : %d",element);
  
  return 0;
}