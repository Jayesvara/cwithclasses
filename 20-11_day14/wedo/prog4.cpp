#include <iostream>
using namespace std;

struct Student {
    int rollno;
    string name;
    int englishnumber;
    int mathmarks;
    int sciencemarks;
    int total;
    float average;
};

int main() {
    Student nskstudents[14];
    int n;
    cout << "How many students (max 14)? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter details for Student " << i + 1 << " ---\n";
        cout << "Roll No: ";
        cin >> nskstudents[i].rollno;
        cout << "Name: ";
        cin >> nskstudents[i].name;
        cout << "English Marks: ";
        cin >> nskstudents[i].englishnumber;
        cout << "Math Marks: ";
        cin >> nskstudents[i].mathmarks;
        cout << "Science Marks: ";
        cin >> nskstudents[i].sciencemarks;
        nskstudents[i].total = nskstudents[i].englishnumber + nskstudents[i].mathmarks + nskstudents[i].sciencemarks;
        nskstudents[i].average = nskstudents[i].total / 3.0f;
    }
    cout << "\n========================================\n";
    cout << "          NSK STUDENT DETAILS           \n";
    cout << "========================================\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll No: " << nskstudents[i].rollno
             << " | Name: " << nskstudents[i].name
             << " | Total: " << nskstudents[i].total
             << " | Average: " << nskstudents[i].average << "\n";
    }
    return 0;
}
