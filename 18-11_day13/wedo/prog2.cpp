#include <iostream>
using namespace std;

int main() {
    int stock, corrected;
    cin >> stock >> corrected;
    
    int *ptr = &stock;
    *ptr = corrected;
    
    cout << stock << endl;
    
    return 0;
}
