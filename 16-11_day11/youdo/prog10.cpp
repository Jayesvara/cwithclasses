#include <iostream>
using namespace std;

int totalSavings(int d) {
    int sum = 0;
    for (int i = 1; i <= d; i++) {
        sum += i * 5;
    }
    return sum;
}

int main() {
    int d;
    cin >> d;
    cout << totalSavings(d) << " rupees";
    return 0;
}
