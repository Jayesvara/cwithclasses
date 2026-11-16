#include <iostream>
using namespace std;
void greet(string name);
int main() {
    greet("ranga");
    return 0;
}

void greet(string name) {
    cout << "Hello " << name << endl;
}
