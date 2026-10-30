#include <iostream>
using namespace std;

int main() 
{
    
int number;

//INPUT

cout << "Please enter a number (Maximum of 4 digits): ";
cin >> number;

// PROCESSING AND OUTPUT

    if (number <= 0)
        {
            cout << "This is a non-positive number." << endl;
        }

    else if (number > 9999)
        {
            cout << "Invalid input. MAXIMUM OF 4 DIGITS ONLY!" << endl;
        }
    else 
        {
            cout << "This number is Positve." << endl;

            if (number <= 9)
                {
                    cout << "This number has 1 digit." << endl;
                }
            else if (number <= 99)
                {
                    cout << "This number has 2 digits." << endl;
                }
            else if (number <= 999 )
                {
                    cout << "This number has 3 digits." << endl;
                }
            else 
                {
                    cout << "This number has 4 digits." << endl;
                }
        }
               
return 0;
}
