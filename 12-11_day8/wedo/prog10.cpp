#include<iostream>
using namespace std;

int parcelCharge(int parcels){
    return parcels*10;
}

int parcelCharge(int parcels,int fee){
    return parcels*10+fee;
}

int main(){
    int n,f;
    cin>>n>>f;

    cout<<parcelCharge(n)<<" "<<parcelCharge(n,f);
}