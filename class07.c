#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int x,y,z;
    while(1)
    {
        x=rand()%9+1;
        y=rand()%9+1;
        z=rand()%9+1;
        if(x!=y!=z)
        {
                            printf("X: %d\tY: %d\tZ: %d ",x,y,z);
                            break;
        }
    }
    
    return 0;
}