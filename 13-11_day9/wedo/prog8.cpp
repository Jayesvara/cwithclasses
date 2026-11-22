#include <iostream>
using namespace std;

int main() {
    int a[6] = {41, 72, 15, 72, 60, 72};
    int n, count = 0;
    cin >> n;

    cout << "Indices: ";
    for(int i = 0; i < 6; i++) {
        if(a[i] == n) {
            cout << i << " ";
            count++;
        }
    }

    if(count == 0) {
        cout << "No matches";
    }

    cout << "Count: " << count;
    return 0;
}