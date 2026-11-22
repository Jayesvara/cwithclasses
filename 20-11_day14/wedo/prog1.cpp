#include <iostream>
using namespace std;
int main() {
    int classroom[3][3];
    int counter = 1;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            classroom[row][col] = counter;
            counter = counter + 1;
        }
    }

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << classroom[row][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}
