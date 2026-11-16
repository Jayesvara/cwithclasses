#include <iostream>
using namespace std;

int readChoice();

int main() {
    int value = readChoice();
    cout << value << endl;
    return 0;
}

int readChoice() {
    int choice;
    cin >> choice;
    
    while (choice != 1 && choice != 2) {
        cout << "Enter a valid number: ";
        cin >> choice;
    }
    
    return choice;
}
