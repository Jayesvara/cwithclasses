#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct Parcel
{
    int tracking;
    string city;
    double weight;

    void printLabel()
    {
        cout<<"Parcel "<<tracking<<" | "<<city<<" | "<<fixed<<setprecision(2)<<weight<<" kg"<<endl;
    }
};

int main()
{
    Parcel p1,p2;

    cout<<"Enter the tracking number for Parcel 1: ";
    cin>>p1.tracking;
    cout<<"Enter the destination city for Parcel 1: ";
    cin>>p1.city;
    cout<<"Enter the weight in kg for Parcel 1: ";
    cin>>p1.weight;

    cout<<"Enter the tracking number for Parcel 2: ";
    cin>>p2.tracking;
    cout<<"Enter the destination city for Parcel 2: ";
    cin>>p2.city;
    cout<<"Enter the weight in kg for Parcel 2: ";
    cin>>p2.weight;

    p1.printLabel();
    p2.printLabel();

    return 0;
}