#include <iostream>
using namespace std;

int main() {
    int a[5] = {28, 31, 26, 30, 29};
    int n;
    cin >> n;

    a[2] = n;

    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}