#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int a[], int size) {
  for (int i = 0; i < size; i++)
    a[i] = rand() % 10;
}
void input1(int a[], int size) {
  for (int i = 0; i < size; i++)
    a[i] = i;
}

void display(int a[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", a[i]);
}
void frequency(int a[], int size, int frequencyy[], int size1) {

  for (int i = 0; i < size; i++) {
    frequencyy[a[i]]++;
  }
  for (int i = 0; i < 10; i++) {
    printf("%d has %d occurences\n", i, frequencyy[i]);
  }
}

void sort(int freq1[], int size, int a[], int size1) {
  int temp;
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (freq1[i] > freq1[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        temp = freq1[i];
        freq1[i] = freq1[j];
        freq1[j] = temp;
      }
    }
  }
}

void copy(int freq1[], int size, int freq2[], int size1) {
  for (int i = 0; i < size; i++)
    freq2[i] = freq1[i];
}

void display2(int freq2[], int size, int digit[], int size1) {
  for (int i = 0; i < size; i++) {
    printf("%d has %d occurences\n", digit[i], freq2[i]);
  }
}

void input2d(int a[][5], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      a[i][j] = rand() % 10;
    }
  }
}

void display2d(int a[][5], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
void sort2d(int a[][5], int rows, int columns) {
  int temp;
  for (int i = 0; i < rows; i++) {
    for (int k = 0; k < columns - 1; k++) {
      for (int j = 0; j < columns - 1; j++) {
        if (a[j][i] > a[j + 1][i]) {
          temp = a[j][i];
          a[j][i] = a[j + 1][i];
          a[j + 1][i] = temp;
        }
      }
    }
  }
}

void avgmaxmin(int a[][5], int rows, int columns) {
  int k = 0;
  int avg, max, min;
  printf("   \t\tAvg  Max  Min\n");

  for (int i = 0; i < rows; i++) {
    max = a[i][0];
    min = a[i][0];
    avg = 0;
    printf("    ");
    for (int j = 0; j < columns; j++) {
      printf("%d ", a[i][j]);
      if (a[i][j] > max)
        max = a[i][j];
      else if (a[i][j] < min)
        min = a[i][j];
      avg = avg + a[i][j];
      k = j + 1;
    }
    avg = avg / k;

    printf("\t%d    %d    %d", avg, max, min);
    printf("\n");
  }
  k = 0;
  printf("Avg ");
  for (int j = 0; j < columns; j++) {
    avg = 0;
    for (int i = 0; i < rows; i++) {
      avg = avg + a[i][j];
      k = i + 1;
    }
    avg /= k;
    printf("%d ", avg);
  }
  printf("\nMax ");
  for (int j = 0; j < columns; j++) {
    max = a[j][0];
    for (int i = 0; i < rows; i++) {
      if (a[i][j] > max)
        max = a[i][j];
    }
    avg /= k;
    printf("%d ", max);
  }

  printf("\nMin ");
  for (int j = 0; j < columns; j++) {
    min = a[j][0];
    for (int i = 0; i < rows; i++) {
      if (a[i][j] < min)
        min = a[i][j];
    }
    printf("%d ", min);
  }
}
void mat3x3(int a[][5], int startr, int startc, int endr, int endc) {
  for (int i = startr; i < endr; i++) {
    for (int j = startc; j < endc; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
int main() {
  srand(time(0));
  //   int size;
  //   printf("Enter size of array : ");
  //   scanf_s("%d", &size);
  //   int a1[size];

  // input(a1,size);
  // printf("Elements in the array are:\n");
  // display(a1,size);
  // Task 01
  // int freq1[10]={0,0,0,0,0,0,0,0,0,0};
  // printf("\n");
  // frequency(a1,size,freq1,10);

  // Task 02
  //  int freq2[10],digit[10];
  //  input1(digit,10);
  //  copy(freq1,10,freq2,10);

  // sort(freq1, 10, freq2, 10);

  // sort(freq1,10,digit,10);
  // printf("\n\n");
  // display2(freq2,10,digit,10);

  // Task 05
  int rows, columns;
  printf("Enter rows : ");
  scanf_s("%d", &rows);
  printf("Enter columns : ");
  scanf_s("%d", &columns);
  int a[rows][columns];
  input2d(a, rows, columns);
  // printf("Before Swapping : \n");
  // display2d(a, rows, columns);

  //   sort2d(a, rows, columns);
  //   printf("\nAfter swapping : \n");
  display2d(a, rows, columns);

  // Task 06

  // Task 07
  // printf("\n");
  // avgmaxmin(a, rows, columns);
  int startr, startc, endr, endc;
  printf("Enter start row: ");
  scanf_s("%d", &startr);
  printf("Enter start column: ");
  scanf_s("%d", &startc);
  printf("Enter end row: ");
  scanf_s("%d", &endr);
  printf("Enter end column: ");
  scanf_s("%d", &endc);
  int endc1 = endc;
  int c1 = 1;
  do 
  {
    for (int i = 1; i <= rows / 2 + 1; i++) {
      mat3x3(a, startr, startc, endr, endc);
      startc++;
      endc++;
      printf("\n");
    }
    printf("\n");
    startc = 0;
    endc = endc1;
    startr++;
    endr++;
    c1++;
  } while (!(c1 == (columns / 2 + 1)));

  // mat3x3(a, startr, startc, endr,endc);
  // printf("\n");
  // startc++;
  // endc++;
  // mat3x3(a, startr, startc, endr,endc);
  // startc++;
  // endc++;
  // printf("\n");
  // mat3x3(a, startr, startc, endr,endc);

  // printf("\n");
  // startc=0;endc=endc1;
  // startr++;
  // endr++;
  // mat3x3(a, startr, startc, endr, endc);
  // printf("\n");
  // startc++;

  // endc++;
  // mat3x3(a, startr, startc, endr, endc);
  // startc++;
  // endc++;
  // printf("\n");
  // mat3x3(a, startr, startc, endr, endc);

  // printf("\n");
  // startc=0;endc=endc1;
  // startr++;
  // endr++;
  // mat3x3(a, startr, startc, endr, endc);
  // printf("\n");
  // startc++;
  // endc++;
  // mat3x3(a, startr, startc, endr, endc);
  // startc++;
  // endc++;
  // printf("\n");
  // mat3x3(a, startr, startc, endr, endc);

  return 0;
}