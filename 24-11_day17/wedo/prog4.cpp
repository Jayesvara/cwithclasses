#include<iostream>
using namespace std;

class Bus
{
    private:
    int seats;

    public:
    void setSeats(int s)
    {
        seats=s;
    }

    void bookSeats(int n)
    {
        seats=seats-n;
    }

    void displaySeats()
    {
        cout<<seats<<endl;
    }
};

int main()
{
    Bus b1,b2;
    int s1,s2,n;

    cout<<"Enter the available seats for Bus 1: ";
    cin>>s1;
    b1.setSeats(s1);

    cout<<"Enter the available seats for Bus 2: ";
    cin>>s2;
    b2.setSeats(s2);

    cout<<"Enter the number of seats to book on Bus 1: ";
    cin>>n;

    b1.bookSeats(n);

    cout<<"Bus 1 available ";
    b1.displaySeats();

    cout<<"Bus 2 available ";
    b2.displaySeats();

    return 0;
}