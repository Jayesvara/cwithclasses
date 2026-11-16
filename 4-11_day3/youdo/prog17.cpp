#include <iostream>
using namespace std;

int main() {
    int total_students = 1430;
    int bus_capacity = 50;

    int full_buses = total_students / bus_capacity;
    int students_left = total_students % bus_capacity;

    cout << "Number of full buses: " << full_buses << endl;
    cout << "Students left without a seat: " << students_left << endl;

    return 0;
}
