#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input(int a[], int size) {
  for (int i = 0; i < size; i++)
    a[i] = rand() % 90 + 10;
}
void input2(int a[], int size) {
  for (int i = 0; i < size; i++)
    a[i] = rand() % 20 + 11;
}
void input3(int a[], int size) {
  for (int i = 0; i < size; i++)
    a[i] = rand() % 9 + 1;
}
void display(int a[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", a[i]);
}

// Task 01

int MIN(int a[], int size1, int size2) {
  int min;
  for (int i = size1; i < size2; i++) {
    if (i == size1)
      min = a[i];
    if (a[i] < min)
      min = a[i];
  }
  return min;
}

int MAX(int a[], int size1, int size2) {
  int max;
  for (int i = size1; i < size2; i++) {
    if (i == size1)
      max = a[i];
    if (a[i] > max)
      max = a[i];
  }
  return max;
}
float AVG(int a[], int size1, int size2) {
  float avg;
  int sum = 0;
  for (int i = size1; i < size2; i++) {
    sum += a[i];
  }
  avg = (sum / (float)(size2 - size1));
  return avg;
}
void quarters(int a[], int size1, int size2) {
  for (int i = size1; i < size2; i++)
    printf("%d ", a[i]);
}

// Task 02

int MAXIMUM(int a[], int size) {
  int max = 0;
  for (int i = 0; i < size; i++) {
    if (i == 0)
      max = a[i];
    if (a[i] > max)
      max = a[i];
  }
  return max;
}
float AVERAGE(int a[], int size) {
  float avg;
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += a[i];
  }
  avg = sum / ((float)size);
  return avg;
}
void ODD(int a[], int size) {
  for (int i = 0; i < size; i++) {
    if (a[i] % 2 == 1) {
      a[i] += 1;
    }
  }
}
void neighbour(int a[], int size) {
  for (int i = 0; i < size; i++) {
    if (i >= 1) {
      if (a[i] == a[i - 1]) {
        a[i] = a[i] + 2;
      }
    }
  }
}

// Task 03
void add(int a[], int size, int b[], int size1, int c[], int size2) {
  int score = 0;
  for (int i = 0; i < size2; i++) {
    printf("Enter result of 1st and 2nd array at %d : ", i + 1);
    scanf_s("%d", &c[i]);
    if (c[i] == a[i] + b[i])
      score++;
  }
  printf("\nScore : %d\n", score);
  
  for(int i=0;i<size;i++)
  {
      printf("%d + %d = %d\n", a[i], b[i], c[i]);
  }
  printf("Incorrect\t Correct\n");
  
  for (int i = 0; i < size; i++) 
  {
    if (c[i] != a[i] + b[i])
    {
      printf("%d + %d = %d", a[i], b[i], c[i]);
      c[i]=a[i]+b[i];
      printf("\t%d + %d = %d\n", a[i], b[i], c[i]);
    }
  }
}
void Incorrectandcorrect(int a[], int size) {}
int main() {
  srand(time(0));

  int size1;
  printf("Enter the number of elements in array: ");
  scanf_s("%d", &size1);
  int a[size1];
  // Task 01

  // input(a, size1);
  //   printf("\nMonthly sales : ");
  //   display(a, size1);

  //   printf("\nQuarter I : ");
  //   quarters(a, 0, (size1 / 4));
  //   printf("\tMin : %d", MIN(a, 0, size1 / 4));
  //   printf("\tMax : %d", MAX(a, 0, size1 / 4));
  //   printf("\tAverage : %f", AVG(a, 0, size1 / 4));
  //   float avgmin1 = AVG(a, 0, size1 / 4);

  //   printf("\nQuarter II : ");
  //   quarters(a, size1 / 4, (size1 / 2));
  //   printf("\tMin : %d", MIN(a, size1 / 4, size1 / 2));
  //   printf("\tMax : %d", MAX(a, size1 / 4, size1 / 2));
  //   printf("\tAverage : %f", AVG(a, size1 / 4, size1 / 2));
  //   float avgmin2 = AVG(a, size1 / 4, size1 / 2);

  //   printf("\nQuarter III : ");
  //   quarters(a, size1 / 2, (size1 / 1.3));
  //   printf("\tMin : %d", MIN(a, size1 / 2, size1 / 1.3));
  //   printf("\tMax : %d", MAX(a, size1 / 2, size1 / 1.3));
  //   printf("\tAverage : %f", AVG(a, size1 / 2, size1 / 1.3));
  //   float avgmin3 = AVG(a, size1 / 2, size1 / 1.3);
  //   printf("\nQuarter IV : ");
  //   quarters(a, size1 / 1.3, (size1));
  //   printf("\tMin : %d", MIN(a, size1 / 1.3, size1));
  //   printf("\tMax : %d", MAX(a, size1 / 1.3, size1));
  //   printf("\tAverage : %f", AVG(a, size1 / 1.3, size1));
  //   float avgmin4 = AVG(a, size1 / 1.3, size1);
  //   int q1min = MIN(a, 0, size1 / 4);
  //   int q1max = MAX(a, 0, size1 / 4);

  //   int q2min = MIN(a, size1 / 4, size1 / 2);
  //   int q2max = MAX(a, size1 / 4, size1 / 2);

  //   int q3min = MIN(a, size1 / 2, size1 / 1.3);
  //   int q3max = MAX(a, size1 / 2, size1 / 1.3);

  //   int q4min = MIN(a, size1 / 1.3, size1);
  //   int q4max = MAX(a, size1 / 1.3, size1);

  //   {
  //     if (q1min < q2min && q1min < q3min && q1min < q4min)
  //       printf("\nQuarter 1 has minimum sale : %d", q1min);
  //     else if (q2min < q1min && q2min < q3min && q2min < q4min)
  //       printf("\nQuarter 2 has minimum sale : %d", q2min);
  //     else if (q3min < q2min && q3min < q1min && q3min < q4min)
  //       printf("\nQuarter 3 has minimum sale : %d", q3min);
  //     else
  //       printf("\nQuarter 4 has minimum sale : %d", q4min);
  //   }

  //   {
  //     if (q1max > q2max && q1max > q3max && q1max > q4max)
  //       printf("\nQuarter 1 has maximum sale : %d", q1max);
  //     else if (q2max > q1max && q2max > q3max && q2min > q4max)
  //       printf("\nQuarter 2 has maximum sale : %d", q2max);
  //     else if (q3max > q2max && q3max > q1max && q3min > q4max)
  //       printf("\nQuarter 3 has maximum sale : %d", q3max);
  //     else if (q4max > q2max && q4max > q3max && q4min > q1max)
  //       printf("\nQuarter 4 has maximum sale : %d", q4max);
  //   }
  //   {
  //     if(avgmin1>avgmin2 &&avgmin1>avgmin3&&avgmin1>avgmin4)
  //         printf("\nQuarter 1 has average minimum sale : %f",avgmin1);
  //     else if (avgmin2 > avgmin1 && avgmin2 > avgmin3 && avgmin2 > avgmin4)
  //       printf("\nQuarter 2 has average minimum sale : %f", avgmin2);
  //     else if(avgmin3>avgmin2 &&avgmin3>avgmin1&&avgmin3>avgmin4)
  //         printf("\nQuarter 3 has average minimum sale : %f",avgmin3);
  //     else
  //       printf("\nQuarter 4 has average minimum sale : %f", avgmin4);
  //   }
  //   {
  //     if (avgmin1 < avgmin2 && avgmin1 < avgmin3 && avgmin1 < avgmin4)
  //       printf("\nQuarter 1 has average maximum sale : %f", avgmin1);
  //     else if (avgmin2 < avgmin1 && avgmin2 < avgmin3 && avgmin2 < avgmin4)
  //       printf("\nQuarter 2 has average maximum sale : %f", avgmin2);
  //     else if (avgmin3 < avgmin2 && avgmin3 < avgmin1 && avgmin3 < avgmin4)
  //       printf("\nQuarter 3 has average maximum sale : %f", avgmin3);
  //     else
  //       printf("\nQuarter 4 has average maximum sale : %f", avgmin4);
  //   }

  // Task 02
  // input2(a, size1);
  // display(a, size1);
  // printf("\nMaximum : %d", MAXIMUM(a, size1));
  // printf("\nAverage : %f", AVERAGE(a, size1));
  // int max1 = MAXIMUM(a, size1);
  // float avg1 = AVERAGE(a, size1);
  // printf("\n\nODD\n");
  // ODD(a, size1);
  // display(a, size1);
  // printf("\nMaximum : %d", MAXIMUM(a, size1));
  // printf("\nAverage : %f", AVERAGE(a, size1));
  // int max2 = MAXIMUM(a, size1);
  // float avg2 = AVERAGE(a, size1);
  // max2 = max2 - max1;
  // avg2=avg2-avg1;
  // printf("\nDifference of maximums are : %d", max2);
  // printf("\nDifference of averages are : %f", avg2);

  // printf("\n\nNeighbours\n");
  // neighbour(a, size1);
  // display(a,size1);
  // printf("\nMaximum : %d", MAXIMUM(a, size1));
  // printf("\nAverage : %f", AVERAGE(a, size1));
  // int max3 = MAXIMUM(a, size1);
  // float avg3 = AVERAGE(a, size1);
  // max3 = max3 - max2;
  // avg3 = avg3 - avg2;
  // printf("\nDifference of maximums are : %d", max3);
  // printf("\nDifference of averages are : %f", avg3);

  // Task 03
  // int b[size1];
  // int c[size1];
  // input3(a, size1);
  // printf("Array 1: ");
  // display(a, size1);
  // printf("\nArray 2 : ");
  // input3(b, size1);
  // display(b, size1);
  // printf("\n");
  // add(a, size1, b, size1, c, size1);

  return 0;
}