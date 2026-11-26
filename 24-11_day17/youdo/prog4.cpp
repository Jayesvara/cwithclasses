#include<iostream>
#include<iomanip>
using namespace std;

class MeetingClock
{
    private:
    int hour;
    int minute;

    public:
    MeetingClock()
    {
        hour=0;
        minute=0;
    }

    MeetingClock(int h,int m)
    {
        hour=h;
        minute=m;
    }

    void advance()
    {
        minute++;

        if(minute==60)
        {
            minute=0;
            hour++;

            if(hour==24)
            {
                hour=0;
            }
        }
    }

    void display()
    {
        cout<<setfill('0')<<setw(2)<<hour<<":";
        cout<<setw(2)<<minute<<endl;
    }
};

int main()
{
    MeetingClock c1;
    int h,m;

    cout<<"Enter the custom clock hour: ";
    cin>>h;

    cout<<"Enter the custom clock minute: ";
    cin>>m;

    MeetingClock c2(h,m);

    c1.advance();
    c2.advance();

    cout<<"Default clock: ";
    c1.display();

    cout<<"Custom clock: ";
    c2.display();

    return 0;
}