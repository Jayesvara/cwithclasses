#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "TIGER";

    for(int i = 0; i < s.length(); i++) {
        cout << i << " " << s[i] << endl;
    }

    return 0;
}