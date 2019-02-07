#include <iostream>


using namespace std;

int num1 = 0;
int num2 = 0;

void printOptions(){
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;
}

int main(){
    char op ='A';
    char again = 'Y';
    

    cout << "Our C++ Calculator\n";

    while(again == 'Y' || again == 'y'){
        cout << "(A)dd, (S)ubtract, (M)ultiply, or (D)ivide? ";
        cin >> op;

        switch(op){
            case 'A':
            case 'a':
                printOptions();
                cout << endl << num1 << " + " 
                << num2 << " = " << (num1 + num2) << endl;
            break;
            case 'S':
            case 's':
                printOptions();
                cout << endl << num1 << " - " 
                << num2 << " = " << (num1 - num2) << endl;
            break;
            case 'M':
            case 'm':
                printOptions();
                cout << endl << num1 << " x " 
                << num2 << " = " << (num1 * num2) << endl;
            break;
            case 'D':
            case 'd':
                printOptions();
                if(num2 == 0){
                    cout << endl << "You cannot divide by zero !!!!" << endl;
                }else{
                    cout << endl << num1 << " / " 
                    << num2 << " = " << (num1 / num2) << endl;
                }
            break;
            default:
                cout << op << " is not a valid option..." << endl;
        }

        /*if('A' == op || 'a' == op){
            printOptions();
            cout << endl << num1 << " + " 
            << num2 << " = " << (num1 + num2) << endl;
        }
        else if('S' == op || 's' == op){
            printOptions();
            cout << endl << num1 << " - " 
            << num2 << " = " << (num1 - num2) << endl;
        }
        else if('M' == op || 'm' == op){
            printOptions();
            cout << endl << num1 << " x " 
            << num2 << " = " << (num1 * num2) << endl;
        }
        else if('D' == op || 'd' == op){
            printOptions();
            if(num2 == 0){
                cout << endl << "You cannot divide by zero !!!!" << endl;
            }else{
                cout << endl << num1 << " / " 
                << num2 << " = " << (num1 / num2) << endl;
            }
        }
        else{
            cout << op << " is not a valid option..." << endl;
        }*/
        

        cout << "\nDo you want to use Calculator again (Y/n)? ";
        cin >> again;
    }

    return 0;
}