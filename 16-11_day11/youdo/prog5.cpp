#include <iostream>
using namespace std;

double areaOfTriangle(double b, double h) {
    return (0.5 * b * h);
}

int main() {
    double b, h;
    cin >> b >> h;
    cout << areaOfTriangle(b, h);
    return 0;
}
