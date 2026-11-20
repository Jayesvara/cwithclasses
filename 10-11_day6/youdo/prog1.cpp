#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<1){
        cout<<"Invalid input (less than 1)";
    }
    else if(n>1000000){
        cout<<"Invalid input (exceeds maximum allowed)";
    }
    else{
        int sum=0;
        for(int i=2;i<=n;i+=2){
            sum=sum+i;
        }
        cout<<sum;
    }
}