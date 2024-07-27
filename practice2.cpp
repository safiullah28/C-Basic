#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float a,b,c,d;
    cout<<"Enter 1st number ";
    cin>>a;
    cout<<"Enter 2nd number ";
    cin>>b;
    cout<<"Enter 3rd number ";
    cin>>c;
    cout<<"Enter 4th number ";
    cin>>d;
    if(a>=b&&a>=c&&a>=d)
    {
        cout<<a;
    }
    else if(b>=a&&b>=c&&b>=d)
    {
        cout<<b;
    }
    else if(c>=a&&c>=b&&c>=d)
    {
        cout<<c;
    }
    else  if(d>=a&&d>=b&&d>=c)
    {
        cout<<d;
    }
   
    return 0;
}
