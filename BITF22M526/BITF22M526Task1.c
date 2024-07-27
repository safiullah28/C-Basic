#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    const int rs=500;
    int charges=0;
    int minutes=rand()%200+100,minutes1=200;
    int msgs=rand()%200+100,msgs1=200;
    int social=rand()%400+400,social1=500;
    int general=rand()%400+400,general1=500;
    printf("\t\tPost Paid bill \n");
    printf("\t\t-------------- \n");
    printf("Fixed Charges:\t\t %d\n",rs);
    printf("Minutes\t\t%d\t%d\t",minutes,minutes1);
    if(minutes<=minutes1)
    {
        printf("-\n");
        charges+=minutes1;
    }
    else
    {
        charges+=minutes1;
        minutes-=minutes1;
        charges+=minutes;
        printf(" %d",charges);
    }

    printf("\nMessages\t%d\t%d\t",msgs,msgs1);
    if (msgs <= msgs1) {
      printf("-\n");
      charges += msgs1;
    } 
    else {
      charges+=msgs1;
      msgs-=msgs1;
      charges+=msgs;
    }

    printf("\nSocial Internet\t%d\t%d\t",social,social1);
    if (social <= social1) {
      printf("-\n");
      charges += social1;
    } 
    else {
        charges+=social1;
        social-=social1;
        charges+=social;
      printf("%d\n", social);
    }
    printf("\nGeneral Internet %d\t%d\t", general, general1);
    if (general <= general1) {
      printf("-\n");
      charges += social1;
    } else {
      charges += general1;
      general -= general1;
      charges += general;
      printf("%d\n", general);
    }
    charges-=rs;
    printf("\nTotal Charges : \t\t%d",charges);
}