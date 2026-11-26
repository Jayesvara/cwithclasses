#include<iostream>
using namespace std;
class Asset  {
    protected:
    int assetId;
    void setId(int id){
        assetId=id;
    }
    

};
class Cylinder: public Asset {

    private:
    int capacity;
    public:
    Cylinder(int id, int c)  {
        capacity = c;
        }

    void display() {
        cout << "Asset " << assetId << " | Capacity " << capacity << " L";
    }
};

int main() {
    int id, c;

    cout << "Enter the asset ID: ";
    cin >> id;

    cout << "Enter the capacity in litres: ";
    cin >> c;

    Cylinder obj(id, c);
    obj.display();

    return 0;
}

