#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int singledigit(int single){
    srand(time(0));
    single=rand()%10;
    return single;
}
int doubledigit(int doub){
    srand(time(0));
    doub=rand()%89+10;
    return doub;
}
int tripledigit(int triple){
    srand(time(0));
    triple=rand()%899+99;
    return triple;
}
int addition(int a, int b){
    return a+b;
}
int subtraction(int a, int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
int division(int a, int b){
    return a/b;
}

int main(){
    int count=0,n;
        for(int i=1;i<500;i++){
            if(i>1){
            for(int j=2;j<=(i/2)+1;j++){
            if(i%j==0){
                count++;
                break;
            }      
        }
        }
        if(count==0&&i!=0&&i!=1)
        {
            printf("%d  ",i);
        }
        else if(count==1)
        {
            printf("not prime ");
        }
    }
    return 0;
}