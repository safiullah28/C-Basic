#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    //Task 01


    
    // int add,add1,sub,sub1,mul,mul1,n1,n2,i=0,choice,count=0,p1,p2;
    // while(i<10){
    //     choice=rand()%3+1;
    //     if(choice==1)
    //     {
    //         printf("Addition\n");
    //         n1=rand()%100;
    //         n2 = rand() % 100 ;
    //         printf("N1 : %d   N2 : %d\n",n1,n2);
    //         add=n1+n2;
    //         printf("Enter your guess : ");
    //         scanf_s("%d",&add1);
    //         if(add1==add)
    //         {
    //             printf("Answer : %d\n",add1);
    //             printf("Correct\n");
    //             count++;
    //         }
    //         else{
    //             printf("Answer : %d\n",add1);
    //             printf("Incorrect\n");
    //         }
    //     }
        
    //     if(choice==2)
    //     {
    //         printf("Subtraction\n");
    //         n1 = rand() % 90+10;
    //         n2 = rand() % 90+10;
    //         while(!(n2<n1))
    //         {
    //             n1 = rand() % 90+10;
    //             n2 = rand() % 90+10;
    //         }
    //         printf("N1 : %d   N2 : %d\n",n1,n2);
    //         sub=n1-n2;
    //         printf("Enter your guess : ");
    //         scanf_s("%d",&sub1);
    //         if(sub1==sub)
    //         {
    //             printf("Answer : %d\n",sub1);
    //             printf("Correct\n");
    //             count++;
    //         }
    //         else{
    //             printf("Answer : %d\n",sub1);
    //             printf("Incorrect\n");
    //         }

    //     }
    //     if(choice==3){
    //         printf("Multiplication\n");
    //         n1 = rand() % 10;
    //         n2 = rand() % 10 ;
    //         printf("N1 : %d   N2 :  %d\n",n1,n2);
    //         mul=n1*n2;
    //         printf("Enter your guess : ");
    //         scanf_s("%d",&mul1);
    //         if(mul1==mul)
    //         {
    //             printf("Answer : %d\n",mul1);
    //             printf("Correct\n");
    //             count++;
    //         }
    //         else {
    //             printf("Answer : %d\n",mul1);
    //             printf("Incorrect\n");
    //         }
    //     }
    //     i++;
    // }
    // printf("Score : %d out of 10 ",count);



    //Task 02

    int student=1,mid,final,sessional,total,fail=0,pass=0,Tsum=0,Msum=0,FSum=0,SSum=0,Tmax=0,Tmin=0,Mmax=0,Mmin=0,Fmax=0,Fmin=0,Smax=0,Smin=0;
    float Tavg,Mavg,Favg,Savg;
    printf("Roll no.\tMid\tFinal\tSessional\tTotal\tGrade\n");


    mid=rand()%36;
    Mmin=mid;
    final=rand()%41;
    Fmin=final;
    sessional=rand()%26;
    Smin=sessional;
    total=mid+final+sessional;
    Tmin=total;

    while(student<=30){
        
        
        mid=rand()%36;
        if(mid>Mmax)
        {
            Mmax=mid;
        }
        if(Mmin>mid)
        {
            Mmin=mid;
        }

        final=rand()%41;
        if (final > Fmax)
        {
            Fmax = final;
        }
        if (Fmin > final)
        {
            Fmin = final;
        }



        sessional=rand()%26;
        if(Smax<sessional)
        {
            Smax=sessional;
        }
        if(Smin>sessional)
        {
            sessional=Smin;
        }


        total=mid+final+sessional;
        if(total>Tmax)
        {
            Tmax=total;
        }
        if(Tmin>total)
        {
            Tmin=total;
        }
        if(total>84){
            printf("%d\t\t%d\t%d\t%d\t\t%d\tA\n",student,mid,final,sessional,total);
            pass++;

        }
        else if (total < 85&&total>79)
        {
            printf("%d\t\t%d\t%d\t%d\t\t%d\tA-\n", student, mid, final, sessional, total);
            pass++;
        }
        else if (total < 80&&total>74)
        {
            printf("%d\t\t%d\t%d\t%d\t\t%d\tB+\n", student, mid, final, sessional, total);
            pass++;
        }
        else if (total < 75 && total > 69)
        {
            printf("%d\t\t%d\t%d\t%d\t\t%d\tB\n", student, mid, final, sessional, total);
            pass++;
        }
        else if (total < 70 && total > 64)
        {
            printf("%d\t\t%d\t%d\t%d\t\t%d\tB-\n", student, mid, final, sessional, total);
            pass++;
        }
        else if (total < 65&&total>60)
        {
            printf("%d\t\t%d\t%d\t%d\t\t%d\tC+\n", student, mid, final, sessional, total);
            pass++;
        }
        else if (total < 61&&total>57)
        {
            printf("%d\t\t%d\t%d\t%d\t\t%d\tC\n", student, mid, final, sessional, total);
            pass++;
        }
        else if (total < 58 && total > 55)
        {
            printf("%d\t\t%d\t%d\t%d\t\t%d\tC-\n", student, mid, final, sessional, total);
            pass++;
        }
        else if (total < 56&&total>49)
        {
            printf("%d\t\t%d\t%d\t%d\t\t%d\tD\n", student, mid, final, sessional, total);
            pass++;
        }
        else if (total < 50)
        {
            printf("%d\t\t%d\t%d\t%d\t\t%d\tF\n", student, mid, final, sessional, total);
            fail++;
        }
        Tsum+=total;
        Msum+=mid;
        FSum+=final;
        SSum+=sessional;
        student++;
    }
    Tavg=(Tsum/(float)student);
    Mavg = (Msum / (float)student);
    Favg = (FSum / (float)student);
    Savg = (SSum / (float)student);



    printf("\nTotal : %d",student);
    printf("\nPass : %d",pass);
    printf("\nFail : %d", fail);
    printf("\nOverall Average Marks : %f", Tavg);
    printf("\nAverage Midterm Marks : %f", Mavg);
    printf("\nAverage Final Term Marks : %f", Favg);
    printf("\nAverage Sessional Marks : %f", Savg);
    printf("\nMaximum Marks : %d",Tmax );
    printf("\nMinimum Marks : %d",Tmin );
    printf("\nMaximum Midterm Marks : %d", Mmax);
    printf("\nMninimum Midterm Marks : %d", Mmin);
    printf("\nMaximum Final Marks : %d",Fmax );
    printf("\nMinimum Final Marks : %d", Fmin);
    printf("\nMaximum Sessional Marks : %d", Smax);
    printf("\nMinimum Sessional Marks : %d", Smin);


    return 0;
}