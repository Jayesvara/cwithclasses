#include <iostream>
#include <string>
using namespace std;

void sayHello(string s) {
    cout << "Hello, " << s;
}

int main() {
    string s;
    getline(cin, s);
    sayHello(s);
    return 0;
}
