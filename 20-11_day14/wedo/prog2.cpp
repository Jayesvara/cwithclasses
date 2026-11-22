#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], difference[3][3];

    cout << "Enter elements of first 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            difference[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Result:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << difference[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
