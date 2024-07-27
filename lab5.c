#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    
    srand(time(0));
    // Task 01
    //  int males,females,total;
    //  printf("Enter number of Males : ");
    //  scanf_s("%d",&males);
    //  printf("Enter number of Females : ");
    //  scanf_s("%d", &females);
    //  total=males+females;
    //  printf("Number of Males in classroom : %d%%\n",males*100/total);
    //  printf("Number of Females in classroom : %d%%\n", females * 100 / total);

  

    // Task 02
    // int num1, num2, num3, num4;
    // num1=rand()%5+1;
    // num2 = rand() % 5 + 1;
    // num3 = rand() % 5 + 1;
    // num4 = rand() % 5 + 1;
    
    // printf("%d\t%d\t%d\t%d\n", num1, num2, num3, num4);
    // if (num1 == num2 && num1 == num3 && num1 == num4 && num2 == num3 && num2 == num4 && num3 == num1 && num3 == num2 && num3 == num4 && num4 == num1 && num4 == num2 && num4 == num3)
    // {
    //     printf("All are same");
    // }
    // else if (num1 != num2 && num1 != num3 && num1 != num4 && num2 != num3 && num2 != num4 && num3 != num1 && num3 != num2 && num3 != num4 && num4 != num1 && num4 != num2 && num4 != num3)
    // {
    //     printf("All are different");
    // }
    // else if((num1==num2&&num1==num3&&num1!=num4)||(num2==num1&&num2==num3&&num2!=num4)||(num3==num1&&num3==num2&&num3!=num4)||(num4==num1&&num4==num2&&num4!=num3)||(num1!=num2&&num1==num3&&num1==num4)||(num1==num2&&num1!=num3&&num1==num4)||(num2!=num1&&num2==num3&&num2==num4) ){
    //     printf("Three same and one different");
    // }
    // else if ((num1 == num2 && num3 == num4) || (num1 == num4 && num2 == num3) || (num1 == num3 && num2 == num4))
    // {
    //     printf("Two same Two Same");
    // }
    // else if((num1==num2&&num1!=num3&&num1!=num4)||(num1!=num2&&num1==num3&&num1!=num4)||(num1!=num2&&num1!=num3&&num1==num4&&num2!=num3)||(num1!=num2&&num1!=num3&&num1!=num4&&num2==num3)||(num1!=num2&&num1!=num3&&num1!=num4&&num2==num4&&num3!=num4)||(num1!=num2&&num1!=num3&&num1!=num4&&num2!=num3&&num1!=num4&&num3==num4)){
    //     printf("Two same Two different");
    // }

   
    // Task 03

    // int num1,num2,choice,check;
    // num1=rand()%9+1;
    // num2 = rand() % 9 + 1;
    // printf("Num1 = %d\n",num1);
    // printf("Num2 = %d\n", num2);
    // choice=rand()%3+1;
    // printf("Choice is %d\n",choice);
    // if(choice==1)
    // {
    //     printf("Enter Sum : ");
    //     scanf_s("%d",&check);
    //     if(check==(num1+num2))
    //     printf("Correct");
    //     else
    //     printf("Incorrect");
    // }
    // if (choice == 2)
    // {
    //     printf("Enter Difference : ");
    //     scanf_s("%d", &check);
    //     if (check == (num1-num2))
    //     printf("Correct");
    //     else
    //     printf("Incorrect");
    // }
    // if (choice == 3)
    // {
    //             printf("Enter Product : ");
    //     scanf_s("%d",&check);
    //     if(check==(num1*num2))
    //     printf("Correct");
    //     else
    //     printf("Incorrect");
    // }
    return 0;
}