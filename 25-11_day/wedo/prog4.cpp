#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }
};

class Student : public Person {
private:
    int roll;

public:
    Student(string n, int r) : Person(n) {
        roll = r;
    }
};

class AssessmentReport : public Student {
private:
    int theory, lab;
};