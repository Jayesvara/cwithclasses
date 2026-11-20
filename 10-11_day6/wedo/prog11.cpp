#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<0){
        cout<<"Invalid Input";
    }
    else{
        int rev=0;

        while(n>0){
            int digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }

        cout<<rev;
    }
}