#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;

    do{
        int d=n%10;
        sum+=d;
        n=n/10;
    }while(n>0);

    cout<<"Digit sum = "<<sum;
}