#include<iostream>
using namespace std;

int payableAmount(int bill){
    if(bill>=500){
        int discount=50;
        bill=bill-discount;
    }
    return bill;
}

int main(){
    int b;
    cin>>b;

    cout<<payableAmount(b);
}