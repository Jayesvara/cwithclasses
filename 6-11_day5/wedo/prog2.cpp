#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double c,f;
    cin>>c;

    f=(c*9.0/5)+32;

    cout<<"Fahrenheit: "<<fixed<<setprecision(1)<<f<<"°F";

    return 0;
}