#include <iostream>
using namespace std;

int main() {
    int initialWater = 40;
    int pumpRate = 12;
    int minutes = 10;
    int waterUsed = 35;

    int waterAdded = pumpRate * minutes;
    int waterLeft = initialWater + waterAdded - waterUsed;

    cout << "Water left in the tank: " << waterLeft << " litres" << endl;

    return 0;
}
