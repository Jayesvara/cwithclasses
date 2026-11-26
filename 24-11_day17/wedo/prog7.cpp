#include<iostream>
using namespace std;

class AttendanceCounter
{
    private:
    int count;

    public:
    AttendanceCounter()
    {
        count=0;
    }

    void recordArrival()
    {
        count++;
    }

    void displayCount()
    {
        cout<<count<<endl;
    }
};

int main()
{
    AttendanceCounter a;
    int n;

    cout<<"Before ";
    a.displayCount();

    cout<<"Enter the number of arrivals: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        a.recordArrival();
    }

    cout<<"After ";
    a.displayCount();

    return 0;
}