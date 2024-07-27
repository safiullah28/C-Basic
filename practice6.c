#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));
    //01
    // int num=1;
    // while(num<100){
    //     if(num%2==0)
    //         printf("%d  ",num);
    //     num++;
    // }


    //02
    // int start,end;
    // printf("Enter starting number : ");
    // scanf_s("%d",&start);
    // printf("Enter ending number : ");
    // scanf_s("%d",&end);
    // if (start > end)
    // {
    //     printf("Sorry Starting number is less than ending number");
    // }

    // while(start<=end)
    // {
    //     printf("%d  ",start);
    //     start++;
    // }



    //03
    // int i=0,sum=0,num=0;
    // printf("Enter numbers : ");
    // while(i<5)
    // {
    //     scanf_s("%d",&num);
    //     sum=sum+num;

    //     i++;
    // }
    // printf("Sum is : %d",sum);


    //04
    // int odd=49;
    // while(odd>=1)
    // {
    //     if(odd%2!=0)
    //         printf("%d  ",odd);
    //     odd--;
    // }


    //05
    // int i=0,num=0,max=0;
    // printf("Enter numbers : ");
    // while(i<5)
    // {
    //     scanf_s("%d",&num);
    //     if(num>max)
    //         max=num;
    //     i++;
    // }
    // printf("Max : %d",max);


    //06
    // int n1,n2,p1,p2,n,HCF=0;
    // printf("Enter num1 : ");
    // scanf_s("%d",&n1);
    // printf("Enter num2 : ");
    // scanf_s("%d", &n2);
    // p1 = n1;
    // p2 = n2;
    // if(n1>n2){
    // while(n!=0)
    //     {
    //         n=n1%n2;
    //         HCF = n2;
    //         n1 = n2;
    //         n2 = n;
    //     }
    // }
    // else if(n1<n2){
    //     while(n!=0)
    //     {
    //         n=n2%n1;
    //         HCF = n1;
    //         n2 = n1;
    //         n1 = n;
    //     }
    // }
    // else if (n1==n2) {
    //     HCF=n1=n2;
    // }
    // printf("HCF of %d and %d : %d",p1,p2,HCF);




    // int i=0;
    // while(i<101){
    //     if((i%6==0)&&(i%4==0))
    //         printf("%d  ",i);
    //     i++;
    // }

    // int i=1,num,square,sqr=0;
    // printf("Enter the num : ");
    // scanf_s("%d",&num);
    // while(i<num){
    //     square=i*i;
    //     printf("%d  +  ",square);
    //     sqr=sqr+square;
    //     i++;
    // }
    // printf("%d = %d",num*num,sqr+(num*num));


    // int i=0,fibonacci,sum=0;

    // while(i<fibonacci){
        
    // }

    // int i=1,n;
    // printf("Enter till you wanna print : ");
    // scanf_s("%d",&n);
    // while(i<=n)
    // {
    //     if((!(i%8==0||i%4==0))&&(i%2==0))
    //         printf("%d  ",i);
    //     i++;
    // }

    // int a=0,b=0,c=0,d=0,count=0;
    // while(!(a<b&&b<c&&c<d&&a<c&&a<d&&b<d)){
    //     a = rand() & 10 + 1;
    //     b = rand() & 10 + 1;
    //     c = rand() & 10 + 1;
    //     d = rand() & 10 + 1;
    //     printf("%d %d %d %d\n",a,b,c,d);
    //     count++;
    // }
    // printf("Loop run %d times",count);



    // int i=1;
    // while(i<=100)
    // {
    //      if((!(i%6==0&&i%4==0))&&(i%6==0||i%4==0))
    //         printf("%d  ",i);
    //     i++;
    // }

    // int i=1,sum=0,num;
    // printf("Enter till you want the sum to print : ");
    // scanf_s("%d",&num);
    // while(i<=num)
    // {
    //     if((!(i%3==0&&i%5==0))&&(i%3==0||i%5==0))
    //     {
    //         sum=sum+i;
    //     }
    //     i++;
    // }
    // printf("\nSum : %d",sum);



    //  int n1,n2,p1,p2,n,HCF=0,LCM;
    // printf("Enter num1 : ");
    // scanf_s("%d",&n1);
    // printf("Enter num2 : ");
    // scanf_s("%d", &n2);
    // p1 = n1;
    // p2 = n2;
    // if(n1>n2){
    // while(n!=0)
    //     {
    //         n=n1%n2;
    //         HCF = n2;
    //         n1 = n2;
    //         n2 = n;
    //     }
    // }
    // else if(n1<n2){
    //     while(n!=0)
    //     {
    //         n=n2%n1;
    //         HCF = n1;
    //         n2 = n1;
    //         n1 = n;
    //     }
    // }
    // else if (n1==n2) {
    //     LCM=n1=n2;
    // }
    // LCM=(p1*p2)/HCF;
    // printf("LCM of %d and %d : %d",p1,p2,LCM);


    // int num,l_digit,first_digit;
    // printf("Enter the number : ");
    // scanf_s("%d",&num);
    // l_digit=num%10;
    // while(num>=10)
    // {
    //     num/=10;
    //     first_digit=num;
    // }
    // printf("First digit : %d \nLast digit : %d",first_digit,l_digit);

    // int num,ld=0,rem=0,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    // scanf_s("%d",&num);
    // while(num!=0)
    // {
    //     ld=num&10;
    //     if(ld==0)
    //         c0++;
    //     else if(ld==1)
    //         c1++;
    //     else if(ld==2)
    //         c2++;
    //     else if(ld==3)
    //         c3++;
    //     else if(ld==4)
    //         c4++;
    //     else if(ld==5)
    //         c5++;
    //     else if(ld==6)
    //         c6++;
    //     else if(ld==7)
    //         c7++;
    //     else if(ld==8)
    //         c8++;
    //     else if(ld==9)
    //         c9++;
        
    //     num/=10;
    // }
    // printf("0 appers %d times\n",c0);
    // printf("1 appers %d times\n",c1);
    // printf("2 appers %d times\n",c2);
    // printf("3 appers %d times\n",c3);
    // printf("4 appers %d times\n",c4);
    // printf("5 appers %d times\n",c5);
    // printf("6 appers %d times\n",c6);
    // printf("7 appers %d times\n",c7);
    // printf("8 appers %d times\n",c8);
    // printf("9 appers %d times\n",c9);




    // int d1,d2,d3,count=0;
    // while((!(d2==d1+1&&d3==d2+1))){
    //     d1=rand()%6+1;
    //     d2=rand()%6+1;
    //     d3=rand()%6+1;
    //     // printf("Enter d1 : ");
    //     // scanf_s("%d",&d1);
    //     // printf("Enter d2 : ");
    //     // scanf_s("%d",&d2);
    //     // printf("Enter d3 : ");
    //     // scanf_s("%d",&d3);
    //     printf("D1 : %d D2 : %d D3 : %d\n",d1,d2,d3);
    //     count++;
    // }
    // printf("Loop ran %d times",count);


    int r1, r2, r3, toCountinue = 1,count=0;
    while (toCountinue){
    printf ("Enter Roll 1: ");
    scanf_s("%d", &r1);
    printf ("Enter Roll 2: ");
    scanf_s("%d", &r2);
    printf ("Enter Roll 3: ");
    scanf_s("%d", &r3);
    printf ("Rolls are: %d - %d - %d\n", r1, r2, r3);
    if (r1 == r2+1 && r2 == r3+1) toCountinue = 0;
    else if (r1 == r3+1 && r3 == r2+1) toCountinue = 0;
    else if (r3 == r1+1 && r1 == r2+1) toCountinue = 0;
    else if (r3 == r2+1 && r2 == r1+1) toCountinue = 0;
    else if (r2 == r1+1 && r1 == r3+1) toCountinue = 0;
    else if (r2 == r3+1 && r3 == r1+1) toCountinue = 0;
    
    count++;
    }   


    return 0;
}