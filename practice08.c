#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    // int r1,r2;
    // for(int i=0;i<10;i++)
    // {
    //     r1=rand()%100+1;
    //     r2=rand()%100+1;
    //     if(r1>r2)
    //         printf("First is larger\n");
    //     else if (r1==r2)
    //         printf("Both are equal\n");
    //     else
    //         printf("Second is larger\n");
    // }



    // int r1,r2,r3;
    // for(int i=0;i<10;i++)
    // {
    //     r1=rand()%100+1;
    //     r2=rand()%100+1;
    //     r3=rand()%100+1;
    //     printf("%d  ",i);
    //     if(i==0)
    //         printf("%d  %d  %d\n",r1,r2,r3);
    //     else
    //     {
    //         if(r1<r2&&r1<r3&&r2<r3)
    //                 printf("%d  %d  %d\n",r1,r2,r3);
    //         else if(r1<r2&&r1<r3&&r3>r2)
    //                 printf("%d  %d  %d\n",r1,r3,r2);
    //         else if(r2<r1&&r2<r3&&r3>r1)
    //                 printf("%d  %d  %d\n",r2,r1,r3);
    //         else if (r2 < r1 && r2 < r3 && r1 > r3)
    //             printf("%d  %d  %d\n", r2, r3, r1);
    //         else if(r3<r2&&r3<r1&&r2>r1)
    //                 printf("%d  %d  %d\n",r3,r1,r2);
    //         else 
    //             printf("%d  %d  %d\n", r3, r2, r1);
    //     }

    // }

    // int sume=0,sumo=0,r;
    // for(int i=1;i<10;i++)
    // {
    //     r=rand()%100+1;
    //     printf("%d\n",r);
    //     if(r%2==0)
    //         sume=sume+r;
    //     else
    //         sumo+=r;
        
    // }
    // printf("Sum of even numbers : %d\n",sume);
    // printf("Sum of odd numbers : %d\n", sumo);

    
    
    
    // for(int i=1;i<101;i++)
    // {
    //     printf("%d  ",i);
    //     if(i%5==0)
    //         printf("\n");
    // }




    // int r1,r2,r3,avg,max=0,count=0;
    // for(int i=1;i<11;i++)
    // {
    //     avg=0;
    //     r1=rand()%100+1;
    //     r2 = rand() % 100 + 1;
    //     r3 = rand() % 100 + 1;
    //     printf("%d %d %d",r1,r2,r3);
    //     avg=(r1+r2+r3)/3;
    //     printf("  %d\n",avg);
    //     if(avg>max)
    //     {
    //         max=avg;
    //         count=i;
    //     }
    // }
    // printf("\nSet %d has highest average",count);

    // int r1, r2, r3, avg, max = 0, Mcount = 0,countm=0,min=0,a1,a2,a3,b1,b2,b3;

    // for (int i = 1; i < 11; i++)
    // {
    //     avg = 0;
    //     r1 = rand() % 100 + 1;
    //     r2 = rand() % 100 + 1;
    //     r3 = rand() % 100 + 1;
    //     printf("%d %d %d", r1, r2, r3);
    //     avg = (r1 + r2 + r3) / 3;
    //     printf("  %d\n", avg);
    //     if(i==1)
    //         min=avg;
        
    //     if (avg > max)
    //     {
    //         max = avg;
    //         Mcount = i;
    //         a1=r1;
    //         a2 = r3;
    //         a3 = r3;
    //     }
    //     else if(avg<min){
    //         min=avg;
    //         countm=i;
    //         b1 = r1;
    //         b2 = r2;
    //         b3 = r3;
    //     }
    // }
    // printf("\nSet %d has highest average : %d %d %d\n", Mcount,a1,a2,a3);
    // printf("\nSet %d has minimum average : %d %d %d", countm,b1,b2,b3);






    // int max=0,num;
    // for(int i=0;i<5;i++)
    // {
    //     num=rand()%100+1;
    //     printf("%d\n",num);
    //     if(i==0)
    //         max=num;
    //     if(num>max)
    //         max=num;
    // }
    // printf("Max is : %d",max);

    // char ch;
    // for(int i=0;i<10;i++)
    // {
    //     ch=rand()%26+'A';
    //     if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    //         printf("Letter is vowel : %c\n",ch);
    //     else
    //         printf("Letter is consonant : %c\n",ch);
    // }


    // float avg;
    // int read,i=1,sum=0;

    // FILE *myfile=fopen("nums.txt","r");
    // while(i<10001)
    // {
    //     fscanf(myfile,"%d",&read);
    //     sum+=read;
    //     i++;
    // }
    // avg=(float)sum/i;
    // printf("Average is : %f",avg);

    
    
    // int i=1,sum=0,num,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;

    // FILE *myfile=fopen("nums.txt","r");

    // while(i<10001)
    // {
    //     fscanf(myfile,"%d",&num);
        
    //         if(num==0)
    //             c0++;
    //         else if (num == 1)
    //             c1++;
    //         else if (num == 2)
    //             c2++;
    //         else if (num == 3)
    //             c3++;
    //         else if(num==4)
    //             c4++;
    //         else if (num == 5)
    //             c5++;
    //         else if (num == 6)
    //             c6++;
    //         else if (num == 7)
    //             c7++;
    //         else if(num==8)
    //             c8++;
    //         else if(num==9)
    //             c9++;
    //     i++;
    // }
    // printf("Count 0 : %d\n",c0);
    // printf("Count 1 : %d\n", c1);
    // printf("Count 2 : %d\n", c2);
    // printf("Count 3 : %d\n", c3);
    // printf("Count 4 : %d\n", c4);
    // printf("Count 5 : %d\n", c5);
    // printf("Count 6 : %d\n",c6);
    // printf("Count 7 : %d\n",c7);
    // printf("Count 8 : %d\n",c8);
    // printf("Count 9 : %d\n", c9);

    // int i = 1, sum = 0, num, c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;

    // FILE *myfile = fopen("nums.txt", "r");
    // FILE *myfile2=fopen("count.txt","w");
    // while (i < 10001)
    // {
    //     fscanf(myfile, "%d", &num);

    //     if (num == 0)
    //         c0++;
    //     else if (num == 1)
    //         c1++;
    //     else if (num == 2)
    //         c2++;
    //     else if (num == 3)
    //         c3++;
    //     else if (num == 4)
    //         c4++;
    //     else if (num == 5)
    //         c5++;
    //     else if (num == 6)
    //         c6++;
    //     else if (num == 7)
    //         c7++;
    //     else if (num == 8)
    //         c8++;
    //     else if (num == 9)
    //         c9++;
    //     i++;
    // }
    // fprintf(myfile2, " %d\n", c1);
    // fprintf(myfile2, "%d\n", c2);
    // fprintf(myfile2, " %d\n", c3);
    // fprintf(myfile2, " %d\n", c4);
    // fprintf(myfile2, " %d\n", c5);
    // fprintf(myfile2, "%d\n", c6);
    // fprintf(myfile2, "%d\n", c7);
    // fprintf(myfile2, " %d\n", c8);
    // fprintf(myfile2, " %d\n", c9);

    // fclose(myfile);
    // fclose(myfile2);


    int read,i=1,sum=0;
    FILE *file=fopen("count.txt","r");
    while(i<10){
        fscanf(file,"%d",&read);
        sum+=read;
        i++;
    }
    printf("Sum : %d\n",sum);
    
    if(sum==10000)
        printf("Equal to 10000\n");
    else
        printf("Not equal\n");
    fclose(file);

    return 0;
}