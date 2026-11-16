#include <iostream>
using namespace std;

double triangleArea(double base, double height);
int main() {
    double base, height;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the height: ";
    cin >> height;

    double area = triangleArea(base, height);
    cout << "The area is " << area << endl;
    return 0;
}

double triangleArea(double base, double height) {
    return 0.5 * (base * height);
}
