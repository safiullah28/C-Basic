#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int flr(float n){
    if(n>0){
        n=(n+1)-1;
    }
    return n;

}

int ceiling(float n)
{
    if (n > 0)
    {
        n = n + 1;
    }
    return n;
}
int main(){
    float n;
    printf("Enter a number : ");
    scanf_s("%f",&n);
    printf("Floor : %d\n",flr(n));
    printf("Ceiling : %d\n",ceiling(n));

    return 0;
}