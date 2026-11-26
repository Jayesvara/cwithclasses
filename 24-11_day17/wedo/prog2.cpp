#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    string department;
    void displayCard()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<department<<endl;
    }
};
int main(){
    Employee e;
    cout<<"Enter the employee id ";
    cin>>e.id;
    cout<<"Enter the employee name ";
    cin>>e.name;
    cout<<"Enter the department ";
    cin>>e.department;
    e.displayCard();
    return 0;
}