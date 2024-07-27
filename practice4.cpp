// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n;
//     cin>>n;
//     int a[n];
 
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     for(int i=n-1;i>=0;i--)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

#include <iostream>

int main()
{
    int rows = 3;
    int columns = 4;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            // Print integers for odd rows
            if (i % 2 == 1)
            {
                std::cout << i << " ";
            }
            // Print characters for even rows
            else
            {
                std::cout << static_cast<char>('a' + i - 2) << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}