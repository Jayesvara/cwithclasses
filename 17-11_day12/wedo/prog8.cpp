#include <iostream>
using namespace std;

int previewBalance(int balance, int cost);

int main() {
    int balance, cost;
    cin >> balance >> cost;
    int preview = previewBalance(balance, cost);
    cout << balance << " " << preview;
    return 0;
}

int previewBalance(int balance, int cost) {
    balance = balance - cost;
    return balance;
}
