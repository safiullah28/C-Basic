#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int a[], int size) {
  for (int i = 0; i < size; i++)
    a[i] = rand();
}
void display(int a[], int b[], int size) {
  int count,k=0,max;
  float avg;
  
  for (int i = 0; i < size; i++) {
    count = 0;
    printf("%d", a[i]);
    count++;
    printf("  %d", b[i]);
    count++;
    avg = (a[i] + b[i]) / (float)count;
    printf("  %1f", avg);
    if(i==0)
        max=avg;
    if(avg>max)
    {
        max=avg;
        k=i;
    }

    if (a[i] > b[i])
      printf("  First");
    else if (a[i] == b[i])
      printf("  Equal");
    else
      printf("  Second");
    printf("\n");
  }
  printf("Pair %d has largets aevrage ",k);
}
int main() {
  srand(time(0));
  int size;
  printf("Enter size of array : ");
  scanf_s("%d", &size);
  int a[size], b[size];
  input(a, size);
  input(b, size);
  display(a, b, size);
  return 0;
}
