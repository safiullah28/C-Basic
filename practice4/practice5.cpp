#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  //Task 01
  int a;
  cout<<"Enter a number ";
  cin>>a;
  int sum=0;
  int b;
  while(a!=0)
  {
    int b=a%10;
    sum=sum+a;
    a=a/10;
  }
  cout<<"The sum of digits are "<<sum;



  //Task 03
//    int a, b;
  
//     cout << "Enter 1st number ";
//     cin >> a;
//     cout << "Enter 2nd number ";
//     cin >> b;
//     int remainder;
//     if(a%b==0)
//         cout<<b<<"is the remainder";
//     else if(a%b!=0)
//     {
//         while(b!=0)
//         {
//             remainder=a%b;
//             a=b;
//             b=remainder;
//         }
//         int hcf=a;
//         cout<<"HCF is "<<hcf;
//     }
    return 0;
}
