#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));

    int rows,columns;
    printf("Enter rows : ");
    scanf_s("%d",&rows);
    printf("Enter columns : ");
    scanf_s("%d", &columns);
    for(int i=1;i<=rows*2;i++)
    {
        for (int j = columns;j >= i ; j--)
            printf(" ");
        if(i==1||i==rows*2)
        {
            for(int j=1;j<=columns;j++)
                printf("*");
        }
        if(i>1&&i<rows*2&&i%2==0)
        {
            printf("*");
            for(int j=1;j<=columns-2;j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}