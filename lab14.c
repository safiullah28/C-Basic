#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int a[],int size)
{
    for(int i=0;i<size;i++)
        a[i]=rand()%90+10;
}
void display(int a[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
}
void copy(int a[],int b[],int size)
{
    for(int i=0;i<size;i++)
        b[i]=a[i];
}

void bubblesort(int a[],int size)
{
    int temp=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++){
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void indexing(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d is at position %d\n",a[i],i);
    }
}

void input2(int a[],int size)
{
    for(int i=0;i<size;i++)
        a[i]=rand()%100+1;
}
void input3(int a[],int size)
{
    for(int i=1;i<=size;i++)
        a[i]=i;
}

void toremove(int a[],int num)
{ 
   for(int i=0;i<=num;i++){
        int removed= rand()%30+1;
        a[removed]=-1;
   }
}

int print(int a[],int b[],int size)
{
    int count=0;
    printf("Roll No\t\tMarks\n");
    for(int i=0;i<size;i++)
    {
        if(a[i]==-1);

        else
        {
            printf("%d\t%d\n",a[i],b[i-1]);
            count++;
        }
    }
    return count;
}
void newlist(int a[],int b[],int c[],int d[],int count)
{
    for(int i=1;i<=count;i++)
    {
        c[i]=a[i];
        d[i]=b[i-1];
    }
    printf("Roll no\t\tMarks\n");

    for(int i=1;i<=count;i++)
    {
        printf("%d\t%d\n",c[i],d[i]);
    }
}
int main(){
    srand(time(0));
    
    //Task 01
    int size;
    printf("Enter size of array : ");
    scanf_s("%d",&size);
    int a[size],b[size];
    // input(a,size);
    // printf("The elements in array 1 are : ");
    // display(a,size);
    // printf("\nThe elements in copied are : ");
    // copy(a,b,size);
    // display(b, size);
    // bubblesort(a,size);
    // printf("\nSorted array : ");
    // display(a,size);
    // printf("\n");
    // indexing(a,size);


    //Task 02
    input2(a,size);
    display(a,size);
    printf("\n");
    int roll_no[size];
    input3(roll_no,size);

    int num = rand() % 3 + 2;

    toremove(roll_no,num);
    print(roll_no,a,size);
    printf("\n\nNew List\n");
    int count1=print(roll_no,a,size);
    int list1[count1],list2[count1];
    newlist(roll_no,a,list1,list2,count1);

    return 0;

}