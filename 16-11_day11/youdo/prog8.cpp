#include <iostream>
#include <cmath>
using namespace std;

int tablesNeeded(int n) {
    return ceil(n/4); 
}

int main() {
    int n;
    cin>>n;
    cout<<tablesNeeded(n); 
    return 0;
}
