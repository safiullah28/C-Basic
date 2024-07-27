#include <stdio.h>
int main(){
    int a;
    printf("Enter a 4 digit number ");
    scanf_s("%d",&a);
    printf("The number is %d",a);
    int b = a%10;
    int c= ((a/10)%10);
    int d= ((a/100)%10);
    int e= a/1000;
    printf("\nThe reverse number is %d%d%d%d",b,c,d,e);
    return 0;
}