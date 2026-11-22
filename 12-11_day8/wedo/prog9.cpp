#include<iostream>
using namespace std;

void showAmounts(int amount){
    if(amount>0){
        int amount=2;
        cout<<amount<<" / ";
    }
}

int main(){
    int n;
    cin>>n;

    showAmounts(n);
    cout<<n;
}