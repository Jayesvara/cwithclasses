#include<iostream>
using namespace std;

int main(){
    int t,d,s=0,w=0;
    cin>>t>>d;

    do{
        s=s+d;
        w++;
        d=d+20;
    }while(s<t);

    cout<<"Weeks = "<<w<<endl;
    cout<<"Savings = "<<s;
}