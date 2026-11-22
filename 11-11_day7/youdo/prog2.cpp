#include<iostream>
using namespace std;

int main(){
    int b,l,count=0;
    cin>>b>>l;

    while(b>0){
        if(b>=l){
            cout<<l<<endl;
            b=b-l;
        }
        else{
            cout<<b<<endl;
            b=0;
        }
        count++;
    }

    cout<<"Visits = "<<count;
}