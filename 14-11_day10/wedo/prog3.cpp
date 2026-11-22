#include <iostream>
using namespace std;

int main() {
    string s = "MANGO";

    cout << s.length() << endl;
    cout << s[0] << endl;
    cout << s[2] << endl;
    cout << s.length() - 1 << endl;

    cout << s.at(5);

    return 0;
}