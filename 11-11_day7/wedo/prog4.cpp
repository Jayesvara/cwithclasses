#include<iostream>
using namespace std;

int main(){
    int n,t,h=0;
    cin>>n>>t;

    while(n<=t){
        n=n*2;
        h++;
    }

    cout<<"Hours = "<<h<<endl;
    cout<<"Cells = "<<n;
}