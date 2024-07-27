#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int a[][5], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      a[i][j] = rand() % 10;
    }
  }
}
void input1(char a[][5], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      a[i][j] = '-';
    }
  }
}

void display(int a[][5], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}

void display1(char a[][5], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%c ", a[i][j]);
    }
    printf("\n");
  }
}

void diagonal(int a[][5], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (j == i)
        printf("%d", a[i][j]);
      else
        printf(" ");
    }
    printf("\n");
  }
}
void change0(int a[][5], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (a[i][j] == 0)
        a[i][j] += 1;
    }
  }
}
void index0(int a[][5], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (a[i][j] == 0) {
        printf("%d %d\n", i, j);
      }
    }
  }
}
void averageout(int a[][5], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if ((i > 0 && i < rows - 1) && (j > 0 && j < columns - 1)) {
        a[i][j] =
            (a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j - 1] +
             a[i][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i][j + 1]) /
            8;
      }
    }
  }
}

void game(char a[][3], int rows1, int columns1, char ch) {
  do {
    if (a[rows1][columns1] == '-') {
      if (ch == 'a')
        a[rows1][columns1] = 'a';
      else
        a[rows1][columns1] = 'b';
    } else {
      printf("\nWrong input : Again input the number\n");
    }
  } while (a[rows1][columns1] != ch);
}

void block(char a[][3], int rows, int columns, int digit) {
  do {
    if (digit == 1) {
      rows = 0;
      columns = 0;
    } else if (digit == 2) {
      rows = 0;
      columns = 1;
    } else if (digit == 3) {
      rows = 0;
      columns = 2;
    } else if (digit == 4) {
      rows = 1;
      columns = 0;
    } else if (digit == 5) {
      rows = 1;
      columns = 1;
    } else if (digit == 6) {
      rows = 1;
      columns = 2;
    } else if (digit == 7) {
      rows = 2;
      columns = 0;
    } else if (digit == 8) {
      rows = 2;
      columns = 1;
    } else if (digit == 9) {
      rows = 2;
      columns = 2;
    } else {
      printf("\nWrong input!Again input the number : ");
    }
  } while (!(digit >= 1 && digit <= 9));
}
void condition(char a[][3], int rows, int columns, int digit, char ch) {
  do {
    block(a, rows, columns, digit);
    if (a[rows][columns] == '-') {
      a[rows][columns] = ch;
    } else {
      printf("\nBlock Already filled! Again input the number : \n");
    }
  } while (a[rows][columns] == '-');
}
int condition1(char a[][3],int rows,int columns) {
  for (int i = 0; i < 3; i++) {
    if ((a[i][0] == a[i][1] && a[i][0] == a[i][2]) ||
        (a[0][i] == a[1][i] && a[0][i] == a[2][i]))
      return 1;
    if ((a[0][0] == a[1][1] && a[1][1] == a[2][2]) ||
        (a[0][2] == a[1][1] && a[1][1] == a[2][0]))
      return 1;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (a[i][j] != 'a' && a[i][j] != 'b') {
          return 0;
        }
      }
    }
  }
  return 0;
}
int main() {
  srand(time(0));
  int rows, columns;
  int blockk, rows1, columns1;
  printf("Enter rows : ");
  scanf_s("%d", &rows);
  printf("Enter columns : ");
  scanf_s("%d", &columns);
  rows1 = rows;
  columns1 = columns;
  int a[rows][columns];
  // input(a,rows,columns);
  // printf("Elements in arrays are : \n");
  // display(a,rows,columns);
  // Task 01
  // diagonal(a,rows,columns);

  // Task 02
  // printf("\nAfter replacing : \n");
  // change0(a,rows,columns);
  // display(a,rows,columns);

  // Task 03
  // printf("\nIndex Zeros\n");
  // index0(a,rows,columns);

  // Task 04
  //  averageout(a, rows, columns);
  //  printf("\nNew Array : \n");
  //  display(a,rows,columns);

  // Task 05
  char arr[rows][columns];
  input1(arr, rows, columns);

  char ch1, choice, ch;
  do {

    display1(arr, rows1, columns1);
    do {
      printf("\nEnter the block : ");
      scanf_s("%d", &blockk);
      block(arr, rows, columns, blockk);
      printf("\nEnter character a or b : ");
      scanf_s("%c",&ch1);
      scanf_s("%c", &ch);
      condition(arr, rows, columns, blockk, ch);
      display1(arr,rows1,columns1);
      condition1(arr,rows,columns);
      if (condition1(arr,rows,columns) == 1 && ch == 'a') {
        printf("\nPlayer 1 Wins the Game");
        break;
      } else if (condition1(arr,rows,columns) == 1 && ch == 'b') {
        printf("\nPlayer 2 Wins the Game");
        break;
      }
    }while(!(condition1(arr,rows,columns)==1||condition1(arr,rows,columns)==0));
    if(condition1(arr,rows,columns)==0){
      printf("\nGame Draw");
    }
    printf("\nDo you want to play again : Y or N : ");
    scanf_s("%c", &ch1);
    scanf_s("%c", &choice);
  } while (choice != 'N' || choice != 'n');

  return 0;
}