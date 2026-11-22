#include<iostream>
using namespace std;

int twice(int amount){
    return amount*2;
}

double twice(double amount){
    return amount*2;
}

int main(){
    int a;
    double b;
    cin>>a>>b;

    cout<<twice(a)<<" "<<twice(b);
}