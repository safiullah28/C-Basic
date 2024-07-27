#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
    int a,b,c,d;
    srand(time(0));
    a=rand()%20+1;
    b = rand() % 20 + 1;
    c = rand() % 20 + 1;
    d = rand() % 20 + 1;
    printf("\t%d\t%d\t%d\t%d\n",a,b,c,d);
    if(b<c){
    if(a<b&&a<c&&a<d)
        printf("1");
    else if(a>b&&a<c&&a<d)
        printf("2");
    else if (a > b && a > c && a < d )
        printf("3 :");
    else if(a>b&&a>b&&a>d)
        printf("4");
    else if(d<a&&d<b&&d<c)
        printf("5");
    else if (d < a && d < b && d > c)
        printf("6");
    else if (d < a && d > b && d > c)
        printf("7");
        
    }
    else if(b>=c)
        printf("Sorry b is greater than C\n");

    // scanf("%d",&num);
    // if((num&255)>>5){
    //     printf("Last 5 bits are on");
    // }
    // else
    // printf("Last 5 bits off");

}
