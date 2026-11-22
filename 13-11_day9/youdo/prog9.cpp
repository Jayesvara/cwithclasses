#include <iostream>
using namespace std;

int main() {
    int a[6] = {101, 102, 103, 104, 105};
    int n = 5, index = 2;

    for(int i = index; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}