#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int a[], int size) {
  for (int i = 0; i < size; i++)
    a[i] = rand() % 100 - 50;
}
void sortt(int a[], int size) {
  int temp = 0;
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1; j++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}
void display(int a[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", a[i]);
}

int minimum(int a[], int size) {
  int min = 0;
  for (int i = 0; i < size; i++) {
    if (i == 1)
      min = a[i];
    if (a[i] < min)
      min = a[i];
  }
  return min;
}
void positive(int a[], int size) {
  int min = minimum(a, size);
  min = min * (-1);
  for (int i = 0; i < size; i++)
    a[i] = a[i] + min;
}

int ngtvavg(int a[], int size) {
  int sum = 0, count = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] < 0) {
      sum += a[i];
      count++;
    }
  }
  return sum / count;
}
int pstvavg(int a[], int size) {
  int sum = 0, count = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] > 0) {
      sum += a[i];
      count++;
    }
  }
  return sum / count;
}
void avgg(int a[], int size) {
  int positive = pstvavg(a, size), negative = ngtvavg(a, size);

  for (int i = 0; i < size; i++) {
    if (a[i] < 0) {
      a[i] -= negative;
    } else {
      a[i] += positive;
    }
  }
}
void findd(int a[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (a[i] == -a[j]) {
        printf("%d  %d\n", a[i], a[j]);
        break;
      }
    }
  }
}

void added(int a[], int size, int num) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (a[i] + a[j] == num) {
        printf("%d  %d\n", a[i], a[j]);
      }
    }
  }
}
int avggg(int a[], int size) {
  float avg = 0;
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += a[i];
  }
  avg = sum / (float)size;
  return avg;
}
void subtr(int a[], int size) {
  for (int i = 0; i < size; i++)
    a[i] -= avggg(a, size);
}
int pcount(int a[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] > 0)
      count++;
  }
  return count;
}
int ncount(int a[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] < 0)
      count++;
  }
  return count;
}

void inputch(char a[], int size) {
  for (int i = 0; i < size; i++) {
    a[i] = rand() % 26 + 'A';
  }
}
void displaych(char a[], int size) {
  for (int i = 0; i < size; i++)
    printf("%c ", a[i]);
}
void vowels(char aa[], int size) {
  for (int i = 0; i < size; i++) {
    if (aa[i] == 'A' || aa[i] == 'E' || aa[i] == 'I' || aa[i] == 'O' ||
        aa[i] == 'U')
      printf("%d %c\n", i, aa[i]);
  }
}
void countofalph(char a[], int size) {
  int digits=26;
  int frequency[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int change[size];
  printf("\nNumbers : ");
  for (int i = 0; i < size; i++) {
    change[i]=a[i];
    printf("%d ",change[i]);
  }
  for(int i=0;i<size;i++)
  {
    if(change[i]>=65&&change[i]<=90)
    {
      frequency[change[i]-65]++;
    }
  }
  char ch='A';
  printf("\nCount of alphabets : ");
  for(int i=0;i<digits;i++)
  {
    printf("%c : %d  ",ch,frequency[i]);
    ch++;
  }
}

void position(char a[], int size) {
  for(int i=0;i<size;i++)
  {
    printf("%c has position %d\n",a[i],a[i]-64); 
  }
  
}
int main() {
  srand(time(0));
  int size;
  printf("Enter the number of elements in array: ");
  scanf_s("%d", &size);
  int a[size];

  // input(a, size);
  // printf("Elements in array are : ");
  // display(a, size);

  // Task 01
  // printf("\nAfter sorting : ");
  // sortt(a, size);
  // display(a, size);

  // Task 02
  //  printf("\nMinimum is : %d\n",minimum(a,size));
  //  positive(a,size);
  //  printf("\nPositive version of array is : ");
  //  display(a,size);

  // Task 03
  // printf("\nPositive average : %d",pstvavg(a,size));
  // printf("\nNegative average : %d ",ngtvavg(a, size));
  // avgg(a,size);
  // printf("\nNew Array : ");
  // display(a,size);

  // Task 04
  //  printf("\nPositive and their inverses are:\n");
  //  findd(a,size);

  // Task 05
  //  int num;
  //  printf("\nEnter a num : ");
  //  scanf_s("%d",&num);
  //  printf("Pairs are : ");
  //  added(a,size,num);

  // Task 06
  //  printf("\nArray after subtraction : ");
  //  avggg(a,size);
  //  subtr(a,size);
  //  display(a,size);
  //  printf("\nPositive count : %d\n",pcount(a,size));
  //  printf("Negative count : %d\n", ncount(a, size));

  char aa[size];
  inputch(aa, size);
  printf("Charachters in array are : ");
  displaych(aa, size);

  // Task 09
  //  printf("\nVowels with index : \n");
  //  vowels(aa,size);

  // Task 10
  //countofalph(aa, size);

  //Task 11
  printf("Positions are : \n");
  position(aa,size);
  return 0;
}