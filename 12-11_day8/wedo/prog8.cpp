#include<iostream>
using namespace std;

int previewBalance(int balance,int cost){
    balance=balance-cost;
    return balance;
}

int main(){
    int b,c;
    cin>>b>>c;

    cout<<b<<" "<<previewBalance(b,c);
}