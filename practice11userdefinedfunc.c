#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void even(int n){
    for (int i=1;i<=n;i++){
        if(i%2==0)
            printf("%d\n",i);
    }
}
void printchar(char c,int n){
    for(int i=0;i<n;i++)
        printf("%c ",c);
}
void counting(int n,int d){
    for(int i=1;i<=n;i=i+d)
        printf("%d  ",i);
}

int SUM(int n){
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}

void printsquare(int rows,int columns){
    for(int i=0;i<rows;i++)
    {
        if(i==0||i==rows-1)
        {
            for(int j=0;j<columns;j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            printf("*");
            for(int k=1;k<columns-1;k++)
                printf(" ");
            printf("*\n");
        }
    }
}

void multiples(int n,int k){
    for(int i=1;i<=k;i++)
        printf("%d ",n*i);
}
void random(int n,int a,int b){
    srand(time(0));
    int numb;
    for(int i=0;i<n;i++)
    {
        numb=(rand()%b+a)-a;
        printf("%d  ",numb);
    }
}
float disc(int a, int b, int c)
{
    float disc = (b * b) - (4 * a * c);
    return disc;
}
float root1(int a,int b,int c){
    float r1;
    r1 = ((-1 * b) + sqrt(disc(a,b,c))) / (2 * a);
    return r1;
}
float root2(int a, int b, int c)
{
    float r1;
    r1 = ((-1 * b) - sqrt(disc(a,b,c))) / (2 * a);
    return r1;
}
void order(int n1,int n2,int n3){
    if (n1 < n2 && n1 < n3 && n2 < n3)
        printf("%d   %d   %d\n", n1, n2, n3);
    else if (n1 < n2 && n1 < n3 && n2 > n3)
        printf("%d   %d   %d\n", n1, n3, n2);
    else if (n2 < n1 && n2 < n3 && n3 > n1)
        printf("%d   %d   %d\n", n2, n1, n3);
    else if (n2 > n1 && n2 > n3 && n1 > n3)
        printf("%d   %d   %d\n ", n3, n1, n2);
    else if (n1 > n2 && n1 > n3 && n2 < n3)
        printf("%d   %d   %d\n", n2, n3, n1);
    else
        printf("%d   %d   %d\n", n3, n2, n1);
}
float average(float a,int b,int c){
    float avg;
    avg=(a+b+c)/3;
    return avg;
}
int times(int x,int y){
    int power=pow(x,y);
    return power;
}

int main(){

    //Task 01
    int n,d,a,b,c;
    char c1,ch;
    // printf("Enter a number : ");
    // scanf_s("%d",&n);
    // even(n);
  
  //Task 02
    // printf("Enter count : ");
    // scanf_s("%d",&n);
    // printf("Enter a character : ");
    // scanf_s("%c",&c1);
    // scanf_s("%c", &ch);
    // printchar(ch,n);

    //Task 03
    // printf("Enter a number : ");
    // scanf_s("%d",&n);
    // printf("Enter a distance : ");
    // scanf_s("%d",&d);
    // counting(n,d);

    //Task 04
    // printf("Enter a number : ");
    // scanf_s("%d",&n);
    // printf("Sum of first %d integers is : %d",n,SUM(n));

    //Task 05






    //Task 06
    // printf("Enter rows : ");
    // scanf_s("%d",&n);
    // printf("Enter columns : ");
    // scanf_s("%d",&d);
    // printsquare(n,d);

    //Task 07
    // printf("Enter number for multiples : ");
    // scanf_s("%d",&n);
    // printf("Enter till you want multiples : ");
    // scanf_s("%d",&d);
    // multiples(n,d);

    //Task 08
    // printf("Enter numbers : ");
    // scanf_s("%d",&n);
    // printf("Enter till random wanna start : ");
    // scanf_s("%d",&a);
    // printf("Enter till random wanna end : ");
    // scanf_s("%d",&b);
    // random(n,a,b);

    //Task 09
    // a=0;
    // while (a == 0)
    // {
    //     printf("Enter A : ");
    //     scanf_s("%d", &a);
    //     if (a == 0)
    //         printf("Enter non-zero value\n");
    // }
    // printf("B : ");
    // scanf_s("%d", &b);
    // printf("C : ");
    // scanf_s("%d", &c);
    // printf("A : %d\n", a);
    // printf("B : %d\n", b);
    // printf("C : %d\n", c);
    // float discr=disc(a,b,c);
    // if(discr<0)
    //     printf("Roots are imaginary\n");
    // else{
    //     printf("1st root : %f\n",root1(a,b,c));
    //     printf("2nd root : %f\n", root2(a, b, c));
    // }


    //Task 10
    // printf("A : ");
    // scanf_s("%d", &a);
    // printf("B : ");
    // scanf_s("%d", &b);
    // printf("C : ");
    // scanf_s("%d", &c);
    // order(a,b,c);

    //Task 11
    // printf("A : ");
    // scanf_s("%d", &a);
    // printf("B : ");
    // scanf_s("%d", &b);
    // printf("C : ");
    // scanf_s("%d", &c);
    // printf("%f",average(a,b,c));

    // Task 12
    //  printf("A : ");
    //  scanf_s("%d", &a);
    //  printf("B : ");
    //  scanf_s("%d", &b);
    //  printf("%d",times(a,b));


    int rows,k=0;
    printf("Enter rows : ");
    scanf_s("%d",&rows);
    for(int i=1;i<=(rows/2);i++){
        printf("*");
        for(int j=1;j<i;j++)
            printf(" ");
        printf("%d",i);
        printf("\n");
        k=i;
    }
    for(int i=k+1;i<=rows;i++)
    {
        printf("*");
        for(int j=rows;j>i;j--)
            printf(" ");
        printf("%d",i);
        printf("\n");
    }
    return 0;
}