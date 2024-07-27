#include <stdio.h>
#include <math.h>
int main()
{
    int a=0, b, c, Discriminant, Root1, Root2;
    while(a==0){
        printf("Enter A : ");
        scanf_s("%d",&a);
        if(a==0)
            printf("Enter non-zero value\n");
    }
    printf("B : ");
    scanf_s("%d", &b);
    printf("C : ");
    scanf_s("%d", &c);
    printf("A : %d\n",a);
    printf("B : %d\n", b);
    printf("C : %d\n",c);
    Discriminant = (b * b) - (4 * a * c);
    Root1 = ((-1 * b) + sqrt(Discriminant)) / (2 * a);
    Root2 = ((-1 * b) - sqrt(Discriminant)) / (2 * a);
    if(Discriminant<0)
        printf("Roots are imaginary\n");
    else
    {
        printf("1st Root : %d\n",Root1);
        printf("2nd Root : %d\n", Root2);
    }






    int R1,R2,W1,W2;
    printf("Team 1 Runs : ");
    scanf("%d",&R1);
    printf("Team 1 Wickets : ");
    scanf("%d", &W1);
    printf("Team 2 Runs : ");
    scanf("%d", &R2);
    
    printf("Team 2 Wickets : ");
    scanf("%d", &W2);

    if(R2>R1)
        printf("Team 2 won by %d wickets\n",10-W2);
    else if(R1>R2)
        printf("Team 1 won by %d runs\n",R1-R2);
    else if((R1==R2)&&(W1==W2))
        printf("The match has been draw\n");
    else if(R1==R2)
    {
        if(W1>W2)
            printf("Team 2 won by %d wickets\n", 10 - W2);
        else
            printf("Team 1 won by 1 run\n");
    }
   
    return 0;
}