#include<iostream>
using namespace std;

void printOrder(int items){
    if(items>=10){
        int extraBoxes=1;
        cout<<extraBoxes<<" / ";
    }
}

int main(){
    int n;
    cin>>n;

    printOrder(n);
    cout<<n;
}