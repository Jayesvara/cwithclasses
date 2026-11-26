#include<iostream>
using namespace std;

class Room
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

    int calculateArea()
    {
        return length*width;
    }
};

int main()
{
    Room r;
    int l,w;

    cout<<"Enter the room length in metres: ";
    cin>>l;

    cout<<"Enter the room width in metres: ";
    cin>>w;

    r.setDimensions(l,w);

    cout<<"Area "<<r.calculateArea()<<" square metres"<<endl;

    return 0;
}