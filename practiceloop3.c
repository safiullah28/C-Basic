#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
    // srand(time(0));
    // int random1,random2;
    // while(1)
    // {
    //     random1=rand()%30+1;
    //     random2=rand()%30+1;
    //     printf("%d   %d\n",random1,random2);
    //     if(random1>random2)
    //         break;
    // }

    //Task 02
    // srand(time(0));
    // int random1,random2,random3;
    // while(1)
    // {
    //     random1=rand()%9+1;
    //     random2=rand()%9+1;
    //     random3=rand()%9+1;
    //     if(random1<random2&&random1<random3&&random2<random3)
    //     {
    //          printf("%d   %d   %d\n",random1,random2,random3);
    //          printf("The smallest number is %d and largest number is %d ",random1,random3);
    //          break;
    //     }
    //     else
    //     {
    //          printf("%d   %d   %d\n",random1,random2,random3);
    //     }
    // }

    //Task 03
    // srand(time(0)); 
    // char ch;
    // printf("The alphabets are ");
    // while(1)
    // {
    //     ch=rand()%26+'A';
    //     if(ch=='A')
    //     break;
    //     else if(ch=='E')
    //     break;
    //     else if(ch=='I')
    //     break;
    //     else if(ch=='O')
    //     break;
    //     else if(ch=='U')
    //     break;
    //     else
    //     printf("%c   ",ch); 
    // }


    //Task 04
    srand(time(0)); 
    // char ch,ch1,ch2,ch3;

    // while(1)
    // {
    //     ch=rand()%26+'A';
    //     printf("1st character is %c \n",ch);
    //     if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    //        {
    //          ch2=ch;
    //        }
    //     ch1=rand()%26+'A';
    //     printf("2nd character is %c \n",ch1);
    //     if(ch1=='A'||ch1=='E'||ch1=='I'||ch1=='O'||ch1=='U'){
    //             ch3=ch1;
    //         }
    //     if(ch3==ch2)
    //     {
    //         printf("The different vowels are %c  %c \n",ch2,ch3);
    //         break;
    //     }
    //     else if(ch2!=ch3)
    //     {
    //             printf("The same vowels are %c  %c \n",ch2,ch3);
    //             break;
    //     }
    //     else
    //     {
    //         printf("The characters are %c   %c \n",ch,ch1);
    //     }
    // }
    
    //Task 04

//     int rand1=rand()%5+1;
//     int rand2=rand()%5+1;
//     char vowel1,vowel2;
//     if(rand1!=rand2)
//     {
//     if(rand1==1)
//         vowel1='A';
//     else if(rand1==2)
//         vowel1='E';
//     else if(rand1==3)
//         vowel1='I';
//     else if(rand1==4)
//         vowel1='O';
//     else if(rand1==5)
//         vowel1='U';
//    printf("1st vowel is %c\n",vowel1);
    
//     if(rand2==1)
//         vowel2='A';
//     else if(rand2==2)
//         vowel2='E';
//     else if(rand2==3)
//         vowel2='I';
//     else if(rand2==4)
//         vowel2='O';
//     else if(rand2==5)
//         vowel2='U';
//     printf("2nd vowel is %c\n",vowel2);

//     printf("Random vowels are %c    %c",vowel1,vowel2);    
//     }
//     else
//         printf("Vowels are same");



//Task 05
// short int choice;
// do{
//     printf("First\n");
//     printf("Second\n");
//     printf("Third\n");
//     printf("Fourth\n");
//     printf("Fifth\n");
//     printf("Sixth\n");
//     printf("Enter your choice\n");
//     scanf_s("%d",&choice);
//     if(choice==1)
//         printf("You have selected first option\n");
//     else if(choice==2)
//         printf("You have selected second option\n");
//     else if(choice==3)
//         printf("You have selected third option\n");
//     else if(choice==4)
//         printf("You have selected fourth option\n");
//     else if(choice==5)
//         printf("You have selected fifth option\n");
// }while(choice!=6);

// printf("Exit");
    

    
    return 0;
}