
#include<iostream>
using namespace std;

struct book
{
    int id;
    string name;
    int copies;
};

int main()
{
    book b;

    cout<<"Enter the book id: ";
    cin>>b.id;
    cin.ignore();

    cout<<"Enter the book name: ";
    getline(cin,b.name);

    cout<<"Enter the number of copies: ";
    cin>>b.copies;

    cout<<"ID "<<b.id<<endl;
    cout<<"Title "<<b.name<<endl;
    cout<<"Copies "<<b.copies<<endl;

    return 0;
}