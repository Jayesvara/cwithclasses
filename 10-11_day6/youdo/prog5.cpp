#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count=0;
    int num=2;

    while(count<n){
        int prime=1;

        for(int i=2;i<num;i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }

        if(prime==1){
            count++;
        }

        if(count==n){
            cout<<num;
        }

        num++;
    }
}