#include<iostream>
using namespace std;

class GardenPlot
{
    private:
    int length;
    int width;

    public:
    void setDimensions(int l,int w)
    {
        length=l;
        width=w;
    }

    int calculatePerimeter()
    {
        return 2*(length+width);
    }
};

int main()
{
    GardenPlot p1,p2;
    int l,w;

    cout<<"Enter the length of Plot 1 in metres: ";
    cin>>l;
    cout<<"Enter the width of Plot 1 in metres: ";
    cin>>w;
    p1.setDimensions(l,w);

    cout<<"Enter the length of Plot 2 in metres: ";
    cin>>l;
    cout<<"Enter the width of Plot 2 in metres: ";
    cin>>w;
    p2.setDimensions(l,w);

    cout<<"Plot 1 perimeter: "<<p1.calculatePerimeter()<<" metres"<<endl;
    cout<<"Plot 2 perimeter: "<<p2.calculatePerimeter()<<" metres"<<endl;

    return 0;
}