#include<iostream>
using namespace std;
class Employee {
    public:
     int id;
     string name;
     string department;
     void displayCard(){
        cout<<"ID is"<<id<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Department is "<<department;
     }
     int main(){
        Employee e;
        cout<<"Enter the employee id";
        cin>>e.id;
        cout<<"Enter the name";
        cin>>e.name;
        cout<<"Enter the department";
        cout<<e.department;

        e.displayCard();
     }
};