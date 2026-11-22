#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "red blue";

    int pos = s.find("blue");
    string word = s.substr(pos);

    cout << pos << endl;
    cout << word << endl;

    cout << s.find("pink");

    return 0;
}