#include <iostream>
using namespace std;

int main() {
    int c1, c2;
    cin >> c1 >> c2;

    int *p = &c1;
    int *q = p;

    (*q)++;

    q = &c2;

    cout << *p << " " << *q << endl;

    return 0;
}
