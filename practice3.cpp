#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdlib.h>
using namespace std;


void func(int *a,int *b)
{
    int sum=*a+*b;
    int subt=*a-*b;
    
    *a=sum;
    *b=subt;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;

    cout<<"Enter 1st number ";
    cin>>a;
    cout<<"Enter 2nd number ";
    cin>>b;
    func(&a,&b);
    cout<<a<<endl<<abs(b);
    return 0;
}
