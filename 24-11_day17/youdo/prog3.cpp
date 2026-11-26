#include<iostream>
#include<iomanip>
using namespace std;

class PrinterTray
{
    private:
    int capacity;
    int sheets;

    double percentage()
    {
        return (double)sheets/capacity*100;
    }

    public:
    PrinterTray()
    {
        capacity=200;
    }

    void setCount(int s)
    {
        sheets=s;
    }

    void display()
    {
        double p=percentage();

        cout<<"Paper remaining: "<<fixed<<setprecision(2)<<p<<"%"<<endl;

        if(p<20)
        {
            cout<<"Paper low"<<endl;
        }
    }
};

int main()
{
    PrinterTray t;
    int n,s;

    cout<<"Enter the number of checks: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the sheet count for check "<<i<<": ";
        cin>>s;

        t.setCount(s);
        t.display();
    }

    return 0;
}