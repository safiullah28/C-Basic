#include <stdio.h>
int main() {
  char c1[100], c2[15], c3[15], c4[15];
  printf("Enter sentence with three words : ");
  gets(c1);
  int i = 0, j = 0;

  while (c1[i] != ' ') {
    c2[j] = c1[i];
    i++;
    j++;
  }
  c2[j]='\0';
  j++;
  i++;

  int k = 0;
  while (c1[i] != ' ') {
    c3[k] = c1[i];
    i++;
    k++;
  }
  c3[k]='\0';
  k++;
  i++;
  int l = 0;
  while (c1[i] != '\0') {
    c4[l] = c1[i];
    i++;
    l++;
  }
  c4[l]='\0';
  l++;
  printf("%s\n%s\n%s", c2, c3, c4);

  i = 0, j = 0, k = 0, l = 0;

  while (c1[i] != ' ') {
    c2[j] = c1[i];
    i++;
    j++;
  }
  i++;
  c2[j] = ';';
  j++;
  c2[j]='\0';
  while (c1[i] != ' ') {
    c3[k] = c1[i];
    i++;
    k++;
  }
  i++;
  c3[k] = ';';
  k++;
  c3[k]='\0';
  k++;
  while (c1[i] != '\0') {
    c4[l] = c1[i];
    i++;
    l++;
  }
  c4[l]='\0';
  l++;
  printf("\n%s%s%s", c2, c3, c4);
  return 0;
}