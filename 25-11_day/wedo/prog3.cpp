#include <iostream>

using namespace std;

class Employee {
private:
    string phone;
public:
    Employee(string p) {
        phone = p;
    }

    string getPhone() {
        return phone;
    }
};

class Technician : public Employee {
private:
    string role;
public:
    Technician(string p, string r) : Employee(p) {
        role = r;
    }

    void display() {
        cout << "Phone: " << getPhone() << endl;
        cout << "Role: " << role;
    }
};

int main() {
    string phone, role;

    cout << "Enter the phone number: ";
    cin >> phone;

    cout << "Enter the role: ";
    cin >> role;

    Technician obj(phone, role);
    obj.display();

    return 0;
}