#include <iostream>
using namespace std;

int perimeter(int side);
int perimeter(int length, int width);

int main() {
    int side, length, width;
    cin >> side >> length >> width;
    cout << perimeter(side) << " " << perimeter(length, width);
    return 0;
}

int perimeter(int side) {
    return 4 * side;
}

int perimeter(int length, int width) {
    return 2 * (length + width);
}
