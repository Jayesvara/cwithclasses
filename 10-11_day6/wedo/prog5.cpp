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
        double sum=0;
        for(int i=1;i<=n;i++){
            sum=sum+i;
        }
        double avg=sum/n;
        cout<<avg;
    }
}