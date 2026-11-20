#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    if(a<1 || b<1 || a>10000 || b>10000){
        cout<<"Invalid input";
    }
    else{
        int i=a;
        if(b>a){
            i=b;
        }

        while(i%a!=0 || i%b!=0){
            i++;
        }

        cout<<i;
    }
}