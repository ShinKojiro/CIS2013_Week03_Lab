#include <iostream>

using namespace std;

int main(){
    char op ='A';
    char again = 'Y';

    cout << "Our C++ Calculator\n";

    while(again == 'Y' || again == 'y'){
        cout << "(A)dd or (S)ubtract? ";
        cin >> op;
        cout << "Do you want to use Calculator again (Y/n)? ";
        cin >> again;
    }

    return 0;
}