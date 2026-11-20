#include <iostream>
using namespace std;

int main() {
    int durations[5];
    for (int i = 0; i < 5; i++) {
        cin >> durations[i];
    }

    int target;
    cin >> target;

    int count = 0;
    int* ptr = durations;

    for (int i = 0; i < 5; i++) {
        if (*(ptr + i) >= target) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
