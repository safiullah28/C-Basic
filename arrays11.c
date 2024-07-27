#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input(int a[], int n) {
  for (int i = 0; i < n; i++)
    a[i] = rand() % 100 + 1;
}
void input2(int a[], int n) {
  for (int i = 0; i < n; i++)
    a[i] = rand() % 1000 + 1000;
}
void input3(int a[], int n) {
  for (int i = 0; i < n; i++)
    a[i] = rand() % 5 + 3;
}
void display(int a[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
}
// Task 01
float Average(int a[], int n) {
  float avg = 0;
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += a[i];
  avg = sum / (float)n;
  return avg;
}
void subtract(int a[], int n) {

  for (int i = 0; i < n; i++) {
    a[i] = a[i] - Average(a, n);
  }
}
void count(int a[], int n) {
  int cp = 0, cn = 0;
  printf("\nPositive count : ");
  for (int i = 0; i < n; i++) {
    if (a[i] > Average(a, n)) {
      cp++;
    }
  }
  printf("%d", cp);
  printf("\nNegative count : ");
  for (int i = 0; i < n; i++) {
    if (a[i] < Average(a, n)) {
      cn++;
    }
  }
  printf("%d", cn);
}

// Task 02
float Avg_pass(int a[], int n) {
  float avg;
  int sum = 0, k = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] >= 50)
      sum += a[i];
    k = i;
  }
  avg = sum / (float)k;
  return avg;
}
void fail(int a[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] < 50)
      printf("%d ", a[i]);
  }
}
void above_avg(int a[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] > Avg_pass(a, n))
      printf("%d ", a[i]);
  }
}
void below_avg(int a[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] < Avg_pass(a, n))
      printf("%d ", a[i]);
  }
}
// Task 03
int quarters(int a[], int start, int end) {
  int sum = 0;
  for (int i = start; i < end; i++) {
    sum += a[i];
  }
  return sum;
}
// Task 04
int c_even(int a[], int n) {
  int even = 0;
  for (int i = 0; i < n; i++)
    if (i % 2 == 0)
      even++;
  return even;
}
int c_odd(int a[], int n) {
  int odd = 0;
  for (int i = 0; i < n; i++)
    if (i % 2 == 1)
      odd++;
  return odd;
}
void list(int a[], int n) {
  int odd = c_odd(a, n), even = c_even(a, n);
  if (even > odd) {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0)
        a[i] = a[i] + 1;
    }
  }
  if (odd > even) {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1)
        a[i] = a[i] - 1;
    }
  }
  display(a, n);
}

// Task 05
void printstars(int a[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] == 3)
      printf("* * *");
    else if (a[i] == 4)
      printf("* * * *");
    else if (a[i] == 5)
      printf("* * * * *");
    else if (a[i] == 6)
      printf("* * * * * *");
    else if (a[i] == 7)
      printf("* * * * * * *");
    printf("\n");
  }
}
// Task 06
void triangle(int a[], int n) {
  int sum;
  for (int i = 0; i < n; i++) {
    sum = 0;
    for (int j = 0; j <= i; j++) {
      printf("%d ", a[j]);
      sum += a[j];
    }
    printf(" = %d", sum);
    printf("\n");
  }
}

// Task 07
void children(int a[], int n) {
  printf("\nChildren : ");
  for (int i = 0; i < n; i++)
    if (a[i] <= 12)
      printf("%d ", a[i]);
}
void adults(int a[], int n) {
  printf("\nAdults : ");
  for (int i = 0; i < n; i++)
    if (a[i] > 12&&a[i]<=64)
      printf("%d ", a[i]);
}
void seniors(int a[], int n) {
  printf("\nSeniors : ");
  for (int i = 0; i < n; i++)
    if (a[i] >64 )
      printf("%d ", a[i]);
}
//Task 08
int sum_list(int a[],int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=a[i];
  return sum;
}
int MAX(int a[],int n)
{
  int max;
  for(int i=0;i<n;i++)
  {
    if(i==0)
      max=a[i];
    if(a[i]>max)
      max=a[i];
  }
  return max;
}
void common_elements(int a[],int b[],int n1,int n2){
  printf("\nCommon Elements : ");
  int k=0;
  int d[k];
  for(int i=0;i<n1;i++)
  {
    for(int j=0;j<n2;j++)
    {
      if(a[i]==b[j])
        {
          d[k]=a[i];
          k++;
        }
    }
  }
  for(int i=0;i<k;i++)
    printf("%d ",d[i]);
}

int main() {
  srand(time(0));
  int size,size1;
  printf("Enter length of array : ");
  scanf_s("%d", &size);
  int a[size];
  int b[size];
  input(a, size);
  // input2(a, size);
  // input3(a, size);

  // printf("Length : ");
  // display(a,size);

  // Task 01
  //  printf("\nAverage : ");
  //  printf("%f\n",Average(a,size));
  //  subtract(a,size);
  //  display(a,size);
  //  count(a,size);

  // Task 02
  //  printf("Marks : ");
  //  display(a, size);
  //  printf("\nAverage : %f", Avg_pass(a, size));
  //  printf("\nMarks of fail students : ");
  //  fail(a, size);
  //  printf("\nMarks of students above average : ");
  //  above_avg(a,size);
  //  printf("\nMarks of students below average : ");
  //  below_avg(a, size);

  // Task 03
  //  display(a, size);
  //  printf("Sale in two halves ");
  //  printf("\nFirst half : %d",quarters(a,0,size/2));
  //  printf("\nSecond half : %d", quarters(a,size/2,size ));
  //  printf("\nQuarter wise sale \n");
  //  printf("Sale in Quarter 1 : %d",quarters(a,0,size/4));
  //  printf("\nSale in Quarter 1 : %d", quarters(a, size/4, size / 2));
  //  printf("\nSale in Quarter 23 : %d",quarters(a,size/2,size/1.7));
  //  printf("\nSale in Quarter 23 : %d", quarters(a, size / 1.7, size ));

  // Task 04
  // printf("List : ");
  // display(a,size);
  // printf("\nEven  : %d\tOdd : %d",c_even(a,size),c_odd(a,size));
  // printf("\nList after processing : ");
  // list(a,size);

  // Task 05
  // printstars(a,size);

  // task 06
  // triangle(a,size);

  // Task 07
  // display(a,size);
  // children(a,size);
  // adults(a,size);
  // seniors(a,size);


  //Task 08
  printf("Enter length of array 2 : ");
  scanf_s("%d", &size1);
  input(b,size1);
 
  printf("List 1 : ");
  display(a,size);
  printf("\nList 2 : ");
  display(b, size1);
  printf("\nList 1 Sum : %d",sum_list(a,size));
  printf("\nList 2 Sum : %d", sum_list(b, size1));
  printf("\nMax in List 1 : %d", MAX(a, size));
  printf("\nMax in List 2 : %d", MAX(b, size1));
  common_elements(a, b, size, size1);
  return 0;
}