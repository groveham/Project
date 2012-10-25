#include <iostream>

using namespace std;

int main()
{

    int num1;
    int num2;
    int sum;

    cout << "Enter a number please \n"; //cout takes info from the computer, and gives to user
    cin >> num1; //cin takes info from the user and puts it into the computer

    cout << "Enter a number again please \n";
    cin >> num2; // takes num1 and num2 and stores them

    sum = num1+num2;
    cout << "The sum of those numbers is " << sum << endl; //This will print out the text and then add the sum variable onto the end.

    return 0;
}
