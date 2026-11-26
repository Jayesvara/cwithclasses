#include<iostream>
using namespace std;

class EventBooking
{
    private:
    int seats;

    public:
    EventBooking()
    {
        seats=30;
    }

    void bookSeats(int n)
    {
        if(n>0 && n<=seats)
        {
            seats=seats-n;
            cout<<"Accepted ";
        }
        else
        {
            cout<<"Rejected ";
        }

        cout<<seats<<endl;
    }
};

int main()
{
    EventBooking e;
    int n,request;

    cout<<"Enter the number of requests: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the number of seats for request "<<i<<": ";
        cin>>request;

        e.bookSeats(request);
    }

    return 0;
}