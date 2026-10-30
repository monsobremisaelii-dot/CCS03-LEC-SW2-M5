#include <iostream>
using namespace std;

int main() 
{
float n1,n2, result;
char op;

cout << "Enter number 1: ";
cin >> n1;

cout << "Enter number 2: ";
cin >> n2;

cout << "Select an operator (+, -, *, /): ";
cin >> op;

    switch (op)
        {
            case '+':
                result = n1 + n2;
                cout << "The result of the operation is: " << result << endl;
            break;
            
            case '-':
                result = n1 - n2;
                cout << "The result of the operation is: " << result << endl;
            break;
            
            case '*':
                result = n1 * n2;
                cout << "The result of the operation is: " << result << endl;
            break;
            
            case '/':
                result = n1 / n2;
                cout << "The result of the operation is: " << result << endl;
            break;
            
        }
    
return 0;
}
