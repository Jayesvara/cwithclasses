#include <iostream>
using namespace std;

int main() {
    int a[6] = {41, 72, 15, 72, 60, 92};
    int n, index = -1;
    cin >> n;

    for(int i = 0; i < 6; i++) {
        if(a[i] == n) {
            index = i;
            break;
        }
    }

    cout << index;
    return 0;
}