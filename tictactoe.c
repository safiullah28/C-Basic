#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input1(char a[][3], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      a[i][j] = '-';
    }
  }
}
void display1(char a[][3], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%c ", a[i][j]);
    }
    printf("\n");
  }
}

void game(char a[][3], int rows1, int columns1, char ch) {
  do {
    if (a[rows1][columns1] == '-'&&(!(a[rows1][columns1]=='a'||a[rows1][columns1]=='b'))) {
      if (ch == 'a')
        a[rows1][columns1] = 'a';
      else
        a[rows1][columns1] = 'b';
    } else if(a[rows1][columns1]=='a'||a[rows1][columns1]=='b'){
      printf("\nWrong input : Again input the number\n");
    }
  } while (!(a[rows1][columns1] == ch));
}



int gamecondition(char a[][3]) {
  for (int i = 0; i < 3; i++) {
    if ((a[i][0] == 'a' && a[i][1] == 'a' && a[i][2] == 'a') ||
        (a[0][i] == 'a' && a[1][i] == 'a' && a[2][i] == 'a') ||
        (a[0][0] == 'a' && a[1][1] == 'a' && a[2][2] == 'a') ||
        (a[0][2] == 'a' && a[1][1] == 'a' && a[2][0] == 'a'))
      return 1;
    if ((a[i][0] == 'b' && a[i][1] == 'b' && a[i][2] == 'b') ||
        (a[0][i] == 'b' && a[1][i] == 'b' && a[2][i] == 'b') ||
        (a[0][0] == 'b' && a[1][1] == 'b' && a[2][2] == 'b') ||
        (a[0][2] == 'b' && a[1][1] == 'b' && a[2][0] == 'b'))
      return 2;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (a[i][j] != 'a' && a[i][j] != 'b') {
          return -1;
        }
      }
    }
  }
  return -2;
}
int main() {
  srand(time(0));
  int rows, columns;
  int blockk, rows1, columns1;
  printf("Enter rows : ");
  scanf_s("%d", &rows);
  printf("Enter columns : ");
  scanf_s("%d", &columns);

  int a[rows][columns];
  char arr[rows][columns];

  char ch1, choice, ch;
  do {
    input1(arr, rows, columns);
    display1(arr, rows, columns);

    do {
      printf("\nEnter rows and columns separated by space : rows columns : ");
      scanf_s("%d %d", &rows1, &columns1);
      printf("\nEnter a or b : ");
      scanf_s("%c", &ch1);
      scanf_s("%c", &ch);
      game(arr, rows1, columns1, ch);
      display1(arr, rows, columns);
      if (gamecondition(arr) == 1 && ch == 'a') {
        printf("\nPlayer 1 Wins the Game");
        break;
      } else if (gamecondition(arr) == 2) {
        printf("\nPlayer 2 Wins the Game");
        break;
      } else if (gamecondition(arr) == -2)
      {
        printf("\nDraw");
        break;
      }
    } while (gamecondition(arr)==-1);

    
    printf("\nDo you want to play again : Y or N : ");
    scanf_s("%c",&ch1);
    scanf_s("%c", &choice);
  } while (!(choice == 'N' || choice == 'n'));

  return 0;
}
