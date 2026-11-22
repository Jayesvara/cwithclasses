#include<iostream>
using namespace std;

int main(){
    int n,original,rev=0;
    cin>>n;
    original=n;

    do{
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }while(n>0);

    cout<<"Reverse = "<<rev<<endl;

    if(original==rev)
        cout<<"Palindrome";
    else
        cout<<"Not palindrome";
}