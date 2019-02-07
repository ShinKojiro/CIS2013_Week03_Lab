#include <iostream>

using namespace std;

int main(){
    char op ='A';
    char again = 'Y';
    int num1 = 0;
    int num2 = 0;

    cout << "Our C++ Calculator\n";

    while(again == 'Y' || again == 'y'){
        cout << "(A)dd or (S)ubtract? ";
        cin >> op;
        if('A' == op || 'a' == op){
            cout << "Enter your first number: ";
            cin >> num1;
            cout << "Enter your second number: ";
            cin >> num2;

            cout << endl << num1 << " + " 
            << num2 << " = " << (num1 + num2) << endl;
        }
        else if('S' == op || 's' == op){
            cout << "Enter your first number: ";
            cin >> num1;
            cout << "Enter your second number: ";
            cin >> num2;

            cout << endl << num1 << " - " 
            << num2 << " = " << (num1 - num2) << endl;
        }
        else{
            cout << op << " is not a valid option..." << endl;
        }
        

        cout << "\nDo you want to use Calculator again (Y/n)? ";
        cin >> again;
    }

    return 0;
}