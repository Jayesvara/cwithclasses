#include<iostream>
using namespace std;

int main(){
    int n,d=2,sum=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        sum+=d;
        cout<<"Distance = "<<d<<", Total = "<<sum<<endl;
        d+=2;
    }

    if(sum>=12)
        cout<<"Days = "<<n;
    else
        cout<<"Target not reached";
}