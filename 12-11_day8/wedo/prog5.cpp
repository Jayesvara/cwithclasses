#include<iostream>
using namespace std;

const int hallCapacity=30;

int remainingSeats(int occupied){
    return hallCapacity-occupied;
}

int main(){
    int n;
    cin>>n;

    cout<<hallCapacity<<" / "<<remainingSeats(n);
}