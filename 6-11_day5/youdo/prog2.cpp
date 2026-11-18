#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double km;
    cin>>km;

    if(km>=0 && km<=10000){
        double miles=km*0.621371;
        cout<<fixed<<setprecision(2)<<"Miles: "<<miles;
    }
    else{
        cout<<"Invalid input";
    }

    return 0;
}