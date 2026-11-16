#include <iostream>
using namespace std;
int main() {
    int amount = 3670;

    cout << "Notes  " << amount << " rupees:\n";
    int notes500 = amount / 500;
    amount = amount % 500;

    int notes100 = amount / 100;
    amount = amount % 100;

    int notes50 = amount / 50;
    amount = amount % 50;

    int notes10 = amount / 10;
    amount = amount % 10;

    cout << "500 rupee notes: " << notes500 << "\n";
    cout << "100 rupee notes: " << notes100 << "\n";
    cout << "50 rupee notes: " << notes50 << "\n";
    cout << "10 rupee notes: " << notes10 << "\n";

    return 0;
}
