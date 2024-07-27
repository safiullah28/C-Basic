#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
    //Task 01
    
    // int random,max=0;
    // srand(time(0));
    // printf("Random numbers are : ");
    // int position=0;
    // for(int i=0;i<10;i++)
    // {
    //     random=rand()%100+1;
    //     printf("%d   ",random);
    //     if (random > max)
    //     {
    //         max=random;
    //         position=i+1;
    //     }
    // }
    // printf("\nMax number at position is %d",position);

    //Task 02

    // int random,max=0,counte=0,counto=0;
    // float sume=0,sumo=0,averageE,averageO;
    // srand(time(0));
    // printf("Random numbers are : ");
        
    // for(int i=0;i<10;i++)
    // {
    //     random=rand()%100+1;
    //      printf("%d  ",random);
    //     if(random%2==0)
    //     {
    //         int even=random;
    //         //printf("\nEven number : %d \n",even);
    //         sume+=even;
    //         counte++;
    //     }
    //     else if(random%2!=0)
    //     {
    //         int odd=random;
    //         //printf("\nOdd number : %d \n",odd);
    //         sumo+=odd;
    //         counto++;
    //     }
    // }
    // // if (counte>0)
    // // {
    // //     printf("\nEven numbers are ");
    // //     for(int i=0;i<counte;i++)
    // //     {
    // //         if(random%2==0)
    // //             printf("%d  ",random);
    // //     }
    // // }

    // //     if (counto>0)
    // // {
    // //     printf("\nOdd numbers are ");
    // //     for(int i=0;i<counto;i++)
    // //     {
    // //         if(random%2!=0)
    // //             printf("%d  ",random);
    // //     }
    // // }
    // printf("\nEven numbers are %d \n",counte);
    // printf("Odd numbers are %d \n",counto);
    // averageE=sume/(float)counte;
    // printf("Average of Even numbers are : %f \n",averageE);
    //     averageO=sumo/(float)counto;
    // printf("Average of Odd numbers are : %f \n",averageO);


//Task 03
//        int random,pair=0,n=10;
//     srand(time(0));
//     printf("N number of pairs \n");
//     for(int i=0;i<n+1;i++)
//     {
//         random=rand()%100+1;
//         if(i>0){
//             if(random==pair)
//             {
//                 printf("%d is equal to  %d\n",pair,random);
//             }
//             if(random>pair)
//             {
//                 printf("%d is less than  %d\n",pair,random);
//             }
//             if(random<pair)
//             {
//                 printf("%d is greater than  %d\n",pair,random);
//             }

// // printf("%d   %d\n",pair,random);
//         }
//         pair=random;
//     }


//Task 04
//   int random,pair=0,n=10,max=0,random1,pair1;
//     srand(time(0));
//     printf("N number of pairs \n");
//     for(int i=0;i<n+1;i++)
//     {
//         random=rand()%100+1;
//         if(i>0)
//              printf("%d   %d\n",pair,random);
//         if(random+pair>max)
//         {
//             max=random+pair;
//             random1=random;
//             pair1=pair;
//         }
//         pair=random;
//     }
//     printf("\nThe largest sum pair is %d   %d",pair1,random1);


//Task 05
// int random,even,odd,maxe=0,maxo=0;
//     srand(time(0));
//     printf("Random numbers are : ");
        
//     for(int i=0;i<10;i++)
//     {
//         random=rand()%100+1;
//          printf("%d  ",random);
//         if(random%2==0)
//         {
//             even=random;
//             if(even>maxe)
//             {
//                 maxe=even;
//             }
//         }
//         else if(random%2!=0)
//         {
//             odd=random;
//             if(odd>maxo)
//             {
//                 maxo=random;
//             }
//         }
//     }
//     printf("\nLargest Even Number: %d \nLargest Odd Number: %d.",maxe,maxo);

//Task 06
// int random,sum=0;
//     srand(time(0));
//     printf("Random numbers with sum are\n");
//     for(int i=0;i<10;i++)
//     {
//         random=rand()%100+1;
//         sum+=random;
//         printf("%d\t %d\n",random,sum);
//     }

    return 0;
}