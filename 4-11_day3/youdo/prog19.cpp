#include <iostream>
using namespace std;

int main() {
    int token = 407;

    int hundreds = token / 100;         // 4
    int tens = (token / 10) % 10;       // 0
    int ones = token % 10;              // 7

    int reversed_token = (ones * 100) + (tens * 10) + hundreds;

    cout << "Reversed token: " << reversed_token << endl;

    return 0;
}
