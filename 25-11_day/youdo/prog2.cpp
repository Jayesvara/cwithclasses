#include <iostream>
using namespace std;

class Equipment
{
protected:
    int code;

public:
    Equipment(int c)
    {
        code = c;
    }
};

class Generator : public Equipment
{
private:
    int rating;

public:
    Generator(int c, int r) : Equipment(c)
    {
        rating = r;
    }

    void display()
    {
        cout << "Generator " << code << ": " << rating << " kW" << endl;
    }
};

class Pump : public Equipment
{
private:
    int rating;

public:
    Pump(int c, int r) : Equipment(c)
    {
        rating = r;
    }

    void display()
    {
        cout << "Pump " << code << ": " << rating << " L/min" << endl;
    }
};

int main()
{
    int gc, gr, pc, pr;

    cout << "Enter the generator code: ";
    cin >> gc;

    cout << "Enter the generator rating: ";
    cin >> gr;

    cout << "Enter the pump code: ";
    cin >> pc;

    cout << "Enter the pump rating: ";
    cin >> pr;

    Generator g1(gc, gr);
    Pump p1(pc, pr);

    g1.display();
    p1.display();

    return 0;
}