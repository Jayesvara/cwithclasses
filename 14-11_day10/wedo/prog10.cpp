#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "red rose";

    s.insert(0, "fresh ");
    cout << s << endl;

    s.erase(6, 4);
    cout << s << endl;

    s.replace(6, 4, "lily");
    cout << s << endl;

    return 0;
}