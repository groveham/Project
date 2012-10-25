#include <iostream>

using namespace std;

int main()
{


    int num1 = 3; //Here 3 is declared as Sum.
    int user; // This then takes the users number they enter below and stores it.

    cout << "Please enter a number that is equal to or greater than 3 \n"; //This asks the user for a number by printing it out, and places the input on a new line.
    cin >> user; //This takes the input of the user and stores it in the variable user.

    if(user >= num1){ //use == to say is 3 equal to 3. This will be 3==3. Use != to mean not equal to, eg 10!=6. 10 is not equal to 8
        cout << "Yes 3 is greater than your number!" ; //This line and the above are saying, if the variable user (what they enter) is equal to or greater than 3, then do this line of code.
    }

    return 0;
}
