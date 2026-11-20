#include <iostream>
using namespace std;

void addReturns(int* count, int returned) {
    *count += returned;
}

int main() {
    int shelfCount, returned;
    cin >> shelfCount >> returned;

    addReturns(&shelfCount, returned);

    cout << shelfCount << endl;

    return 0;
}
