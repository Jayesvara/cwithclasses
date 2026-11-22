#include <iostream>
using namespace std;

int main() {
    int n, a[100], count = 0;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            a[count] = i;
            count++;
        }
    }

    for(int i = 0; i < count; i++) {
        cout << a[i] << " ";
    }

    return 0;
}