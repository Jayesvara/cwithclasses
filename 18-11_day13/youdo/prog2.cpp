#include <iostream>
using namespace std;

int main() {
    int count, sold;
    cin >> count >> sold;

    int* ptr = &count;
    *ptr -= sold;

    cout << *ptr << endl;

    return 0;
}
