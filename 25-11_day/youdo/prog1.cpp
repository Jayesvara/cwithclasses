#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;

public:
    Person(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }
};

class Participant : public Person
{
private:
    int registrationNumber;

public:
    Participant(string n, int r) : Person(n)
    {
        registrationNumber = r;
    }

    void display()
    {
        cout << getName() << " | Registration " << registrationNumber;
    }
};

int main()
{
    string name;
    int regNo;

    cout << "Enter the name: ";
    cin >> name;

    cout << "Enter the registration number: ";
    cin >> regNo;

    Participant p1(name, regNo);
    p1.display();

    return 0;
}