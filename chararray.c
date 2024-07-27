#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(0));
  // Task 04

  // char a[100]="abc)(=+ 12345caA!@#$^&*";
  // int i=0,count=0;
  // while(a[i]!='\0')
  // {
  //   if ((a[i] > 64 && a[i] < 91) || (a[i] > 96 && a[i] <
  //   123)||(a[i]>47&&a[i]<58)); else
  //   {
  //     count++;
  //   }
  //     i++;
  // }
  // printf("Count : %d",count);

  // Task 05
//   char a[50], b[50];
//   printf("Enter string 1 : ");
//   scanf_s("%s", a);
//   printf("Enter string 2 : ");
//   scanf_s("%s", b);
//   int i;
  


  // Task 06
  //  char a1[20],a2[20],a3[50];
  //  printf("Enter string 1 : ");
  //  scanf_s("%s",a1);

  // printf("Enter string 2 : ");
  // scanf_s("%s", a2);

  // int i=0,j=0;
  // while(a1[i]!='\0')
  // {
  //     a3[i]=a1[i];
  //     i++;
  // }
  // a3[i]=' ';
  // i++;
  // while(a2[j]!='\0')
  // {
  //     a3[i]=a2[j];
  //     j++;
  //     i++;
  // }
  // a3[i]='\0';

  // printf("\nString after concatenation is: %s",a3);



  //Task 07
   char a1[20],a2[20],a3[50];
   printf("Enter string : ");
   gets(a3);
   int i,j;
   for(i=0;a3[i]!=' ';i++)
   {
    a1[i]=a3[i];
   }
   a1[i] = '\0';
   for(j=0;a3[i]!='\0';i++,j++)
   {
    a2[j]=a3[i];
   }
   a2[j]='\0';
   printf("First Name : %s\n",a1);
   printf("Last Name : %s\n", a2);

   return 0;
}