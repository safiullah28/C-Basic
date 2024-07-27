#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    // Task 01
    //  int num;
    //  cout<<"Enter the number ";
    //  cin>>num;
    //   if(num==1)
    //      cout<<"One";
    //   else if(num == 2)
    //      cout << "Two";
    //   else if (num == 3)
    //      cout << "Three";
    //   else if (num == 4)
    //      cout << "Four";
    //   else if (num == 5)
    //      cout << "Five";
    //   else
    //   cout<<"Out of Range";

    // Task 02
    // int num1, num2;
    // cout << "Enter 1st number ";
    // cin >> num1;
    // cout << "Enter 2nd number ";
    // cin >> num2;
    // float avg = (num1 + num2) / 2.0;
    // cout << "Average of two numbers are " << avg << endl;
    // if (num1 > avg)
    //     cout << num1 << " is greater than " << avg << endl;
    // else
    //     cout << num1 << " is less than " << avg << endl;
    // if (num2 > avg)
    //     cout << num2 << " is greater than " << avg << endl;
    // else
    //     cout << num2 << " is less than " << avg << endl;

    // Task 03
    // int n1, n2, n3;
    // srand(time(0));
    // n1 = rand() % 10;
    // n2 = rand() % 10;
    // n3 = rand() % 10;

    // cout<<"1st number "<<n1<<"\t2nd number "<<n2<<"\t3rd number "<<n3<<endl;
    // if (n1 == n2)
    //     cout << n1 << " 1st num and " << n2 << " 2nd num are same";
    // if (n2 == n3)
    //     cout << n2 << " 2nd num and " << n3 << " 3rd num are same";
    // if(n1==n3)
    //     cout << n1 << " 1st num and " << n3 << " 3rd num are same";

    // Task 04
    // int n1, n2;
    // srand(time(0));
    // n1 = rand() % 10;
    // n2 = rand() % 10;
    // cout << "1st number " << n1 << "\t2nd number " << n2 << endl;
    // if (n1 == n2)
    // {
    //     cout << "Same number generated,Let me Try Again " << endl;
    //     n2 = rand() % 10;
    //     if (n2 == n1)
    //     {
    //         cout << "Sorry, Same number again" << endl;
    //     }
    //     if(n2!=n1)
    //     {
    //         cout<<n2;
    //     }
    // }

    // Task 05
    // char c;
    // srand(time(0));
    // c = rand() % 26 + 'A';
    // cout << "Letter is " << c << endl;
    // // if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    //     cout << "Letter is vowel";

    // OR

    // if (c == 'A')
    //     cout << "Letter is vowel";
    // else if (c == 'E')
    //     cout << "Letter is vowel";
    // else if (c == 'I')
    //     cout << "Letter is vowel";
    // else if (c == 'O')
    //     cout << "Letter is vowel";
    // else if (c == 'U')
    //     cout << "Letter is vowel";
    // else
    //     cout << "Letter is consonant";

    // Task 06
    // int num;
    // srand(time(0));
    // num = rand() % 6 + 1;
    // if (num == 1)
    //     cout << "One";
    // if (num == 2)
    //     cout << "Two";
    // if (num == 3)
    //     cout << "Three";
    // if (num == 4)
    //     cout << "Four";
    // if (num == 5)
    //     cout << "Five";
    // if (num == 6)
    //     cout << "Six";

    // Task 07
    // int dice1;
    // srand(time(0));
    // cout << "For player 1" << endl;
    // dice1 = rand() % 6 + 1;
    // int dice3=dice1;
    // cout << "1st time roll of dice for Player one = " << dice3 << endl;
    // dice1 = rand() & 6 + 1;
    // int dice2 = dice3;
    // cout << "2nd time roll of dice for Player one = " << dice2 << endl;
    // int player1 = dice3 + dice2;
    // cout << "Player one score: " << player1 << endl;

    // cout << endl
    //      << "For player 2 " << endl;
    // dice1 = rand() % 6 + 1;
    // dice3=dice1;
    // cout << "1st time roll of dice for Player two =" << dice3 << endl;
    // dice1 = rand() % 6 + 1;

    // cout << "2nd time roll of dice for Player two = " << dice2 << endl;
    // int player2 = dice3 + dice2;
    // cout << "Player Two Score :" << player2 << endl<<endl;
    // if (player1 > player2)
    //     cout << "Winner is Player one with score = " << player1 << endl;
    // else if (player2 > player1)
    //     cout << "Winner is player two with score = " << player2 << endl;
    // else if (player1 == player2)
    //     cout << "Match Draw" << endl;

    // task 08
    //     int dice;
    //     srand(time(0));
    //     dice = rand() % 6 + 1;
    //     cout<<"First roll of dice "<<dice<<endl;
    //     int count = 0;
    //     if (dice == 6)
    //         count++;
    //     dice = rand() % 6 + 1;
    //     cout << "Second roll of dice " << dice << endl;
    //     if (dice == 6)
    //         count++;
    //     dice = rand() % 6 + 1;
    //     cout << "Third roll of dice " << dice << endl;
    //     if (dice == 6)
    //         count++;
    //     dice = rand() % 6 + 1;
    //     cout << "Forth roll of dice " << dice << endl;
    //     if (dice == 6)
    //         count++;
    //     dice = rand() % 6 + 1;
    //     cout << "Fifth roll of dice " << dice << endl;
    //     if (dice == 6)
    //         count++;
    //     dice = rand() % 6 + 1;
    //     cout << "Sixth roll of dice " << dice << endl;
    //     if (dice == 6)
    //         count++;
    // cout<<"The total six appeared are "<<count;

    // Task 09

    int n1, n2, dice1;
    cout << "Enter 1st numb ";
    cin >> n1;
    cout << "Enter 2nd numb ";
    cin >> n2;
    srand(time(0));
    dice1 = rand() % 6 + 1;
    int dice2 = dice1;
    dice1 = rand() % 6 + 1;
    int dice3 = dice1;
    cout << "1st number on dice is " << dice2 << " and 2nd number on dice is " << dice3 << endl;
    if (dice2 == n1)
        cout << "Succeed" << endl;
    else if (dice2 == n2)
        cout << "Succeed" << endl;
    else if (dice3 == n1)
        cout << "Succeed" << endl;
    else if (dice3 == n2)
        cout << "Succeed" << endl;
    else
        cout << "Fail" << endl;

    // Task 10
    // int player1, player2, dice1, dice2, dice3, dice4;
    // srand(time(0));
    // cout << "For player one " << endl;
    // dice1 = rand() % 6 + 1;
    // dice2 = dice1;
    // cout << "First roll of the dice for Player one " << dice2<<endl;
    // dice1 = rand() % 6 + 1;
    // dice3 = dice1;
    // cout << "Second roll of the dice for Player one " << dice3 << endl;
    // dice1 = rand() % 6 + 1;
    // dice4 = dice1;
    // cout << "Third roll of the dice for Player one " << dice4 << endl;
    // player1 = dice2 + dice3 + dice4;
    // cout << "Sum of all the roll od the dices for Player one " << player1 << endl<< endl;

    // cout << "For Player Two";
    // dice1 = rand() % 6 + 1;
    // dice2 = dice1;
    // cout << "First roll of the dice for Player two " << dice2 << endl;
    // dice1 = rand() % 6 + 1;
    // dice3 = dice1;
    // cout << "Second roll of the dice for Player two " << dice3 << endl;
    // dice1 = rand() % 6 + 1;
    // dice4 = dice1;
    // cout << "Third roll of the dice for Player two " << dice4 << endl;
    // player2 = dice2 + dice3 + dice4;
    // cout << "Sum of all the roll of the dices for Player one " << player2 << endl
    //      << endl;
    // if (player1 > player2)
    //     cout << "Player one won the game with marks " << player1 << endl;
    // if (player2 > player1)
    //     cout << "Player two won the game with marks " << player2 << endl;
    // if (player1 == player2)
    //     cout << "Game has drawn " << endl;

    return 0;
}