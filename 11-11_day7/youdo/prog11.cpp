#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;

    do{
        int d=n%10;

        if(d%2==0)
            count++;

        n=n/10;
    }while(n>0);

    cout<<"Even digits = "<<count;
}