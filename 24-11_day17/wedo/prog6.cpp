#include<iostream>
#include<iomanip>
using namespace std;

class WaterTank
{
    private:
    int capacity;
    int level;

    double calculatePercentage()
    {
        return (double)level/capacity*100;
    }

    public:
    void setValues(int c,int l)
    {
        capacity=c;
        level=l;
    }

    void display()
    {
        double p=calculatePercentage();

        cout<<"Fill "<<fixed<<setprecision(2)<<p<<"%"<<endl;

        if(p<25)
        {
            cout<<"Refill required"<<endl;
        }
    }
};

int main()
{
    WaterTank w;
    int c,l;

    cout<<"Enter the tank capacity in litres: ";
    cin>>c;

    cout<<"Enter the current water level in litres: ";
    cin>>l;

    w.setValues(c,l);
    w.display();

    return 0;
}